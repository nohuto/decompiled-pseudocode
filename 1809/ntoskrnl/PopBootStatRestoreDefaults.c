/*
 * XREFs of PopBootStatRestoreDefaults @ 0x1408774D8
 * Callers:
 *     PopPowerInformationInternal @ 0x14058DF30 (PopPowerInformationInternal.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlUnlockBootStatusData @ 0x140718BC0 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140718CA0 (RtlLockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x140753390 (PopBootStatAccessCheck.c)
 *     RtlRestoreBootStatusDefaults @ 0x140895DB8 (RtlRestoreBootStatusDefaults.c)
 */

__int64 PopBootStatRestoreDefaults()
{
  KPROCESSOR_MODE PreviousMode; // bp
  struct _KTHREAD *CurrentThread; // rax
  int v2; // esi
  HANDLE FileHandle; // [rsp+30h] [rbp+8h] BYREF

  FileHandle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBootStatLock, 0LL);
  v2 = RtlLockBootStatusData(&FileHandle);
  if ( v2 >= 0 )
  {
    if ( !PreviousMode || (v2 = PopBootStatAccessCheck(FileHandle, PreviousMode, 1u), v2 >= 0) )
      v2 = RtlRestoreBootStatusDefaults(FileHandle);
  }
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopBootStatLock);
  KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v2;
}
