/*
 * XREFs of ExpGetFirmwareEnvironmentVariable @ 0x1408D0DC8
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x1406CAD20 (NtQuerySystemEnvironmentValueEx.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1406CADC0 (ExGetFirmwareEnvironmentVariable.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     ExUnlockUserBuffer @ 0x14011A6F8 (ExUnlockUserBuffer.c)
 *     ExLockUserBuffer @ 0x14069E938 (ExLockUserBuffer.c)
 *     IoGetEnvironmentVariableEx @ 0x14082131C (IoGetEnvironmentVariableEx.c)
 */

__int64 __fastcall ExpGetFirmwareEnvironmentVariable(
        LPCWSTR pwsz,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int *a4,
        int *a5,
        KPROCESSOR_MODE a6)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int EnvironmentVariable; // ebx
  PVOID P; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  if ( *a4 )
  {
    result = ExLockUserBuffer(a3, *a4, a6, IoWriteAccess, &v13, (struct _MDL **)&P);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    v13 = 0LL;
    P = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  EnvironmentVariable = IoGetEnvironmentVariableEx(pwsz, a2, v13, a4, a5);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( P )
    ExUnlockUserBuffer((struct _MDL *)P);
  return EnvironmentVariable;
}
