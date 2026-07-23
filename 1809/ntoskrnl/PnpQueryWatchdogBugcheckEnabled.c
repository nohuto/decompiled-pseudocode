/*
 * XREFs of PnpQueryWatchdogBugcheckEnabled @ 0x140289E44
 * Callers:
 *     PnpDisableWatchdog @ 0x140005B60 (PnpDisableWatchdog.c)
 *     PnpQueryWatchdogTimeout @ 0x140005D00 (PnpQueryWatchdogTimeout.c)
 *     PnpProcessWatchdogWorkItem @ 0x140289D7C (PnpProcessWatchdogWorkItem.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 */

char PnpQueryWatchdogBugcheckEnabled()
{
  struct _KTHREAD *CurrentThread; // rax
  char v1; // di

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PnpWatchdogBugcheckLock, 0LL);
  if ( !(_BYTE)dword_14054119C && (PnpSetupOOBEInProgress || PnpSetupInProgress) )
    v1 = 1;
  if ( PnpWatchdogBugcheckConfig )
  {
    if ( PnpWatchdogBugcheckConfig == 1 )
      v1 = 1;
  }
  else
  {
    v1 = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PnpWatchdogBugcheckLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PnpWatchdogBugcheckLock);
  KeAbPostRelease((ULONG_PTR)&PnpWatchdogBugcheckLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v1;
}
