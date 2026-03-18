/*
 * XREFs of ExpSetFirmwareEnvironmentVariable @ 0x14090F774
 * Callers:
 *     ExSetFirmwareEnvironmentVariable @ 0x14090CD80 (ExSetFirmwareEnvironmentVariable.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140912EF0 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutexUnsafe @ 0x140089BB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140089D40 (ExReleaseFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x1400F4860 (ExUnlockUserBuffer.c)
 *     ExLockUserBuffer @ 0x1406A49BC (ExLockUserBuffer.c)
 *     IoSetEnvironmentVariableEx @ 0x14085ADC0 (IoSetEnvironmentVariableEx.c)
 */

__int64 __fastcall ExpSetFirmwareEnvironmentVariable(
        LPCWSTR pwsz,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5,
        KPROCESSOR_MODE a6)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v11; // ebx
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  PVOID P; // [rsp+38h] [rbp-10h] BYREF

  if ( a4 )
  {
    result = ExLockUserBuffer(a3, a4, a6, IoReadAccess, &v12, (struct _MDL **)&P);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    v12 = 0LL;
    P = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v11 = IoSetEnvironmentVariableEx(pwsz, a2, v12, a4, a5);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( P )
    ExUnlockUserBuffer((struct _MDL *)P);
  return v11;
}
