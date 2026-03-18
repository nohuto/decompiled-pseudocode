/*
 * XREFs of ExpGetFirmwareEnvironmentVariable @ 0x14090E040
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x1406EDCB0 (NtQuerySystemEnvironmentValueEx.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1406EDD60 (ExGetFirmwareEnvironmentVariable.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutexUnsafe @ 0x140089BB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140089D40 (ExReleaseFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x1400F4860 (ExUnlockUserBuffer.c)
 *     ExLockUserBuffer @ 0x1406A49BC (ExLockUserBuffer.c)
 *     IoGetEnvironmentVariableEx @ 0x14085AAD4 (IoGetEnvironmentVariableEx.c)
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( P )
    ExUnlockUserBuffer((struct _MDL *)P);
  return EnvironmentVariable;
}
