/*
 * XREFs of TtmpAcquireSessionById @ 0x140761694
 * Callers:
 *     TtmpDisplayBurstPowerSettingCallback @ 0x140761640 (TtmpDisplayBurstPowerSettingCallback.c)
 *     TtmGetSessionDisplayRequiredCount @ 0x14087F84C (TtmGetSessionDisplayRequiredCount.c)
 *     TtmNotifyConsoleUserPresent @ 0x14087FB30 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyCsStateExited @ 0x14087FBC0 (TtmNotifyCsStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x14087FC2C (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x14087FCA0 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x14087FDE8 (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmNotifySessionPowerStateChange @ 0x140880020 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x1408800A4 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x140880134 (TtmSessionMonitorControl.c)
 *     TtmiAcquireCurrentSession @ 0x1408801E4 (TtmiAcquireCurrentSession.c)
 *     TtmpInsertPowerRequestToSession @ 0x140880BB8 (TtmpInsertPowerRequestToSession.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1408815BC (TtmpUpdatePowerRequestAttribute.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     TtmiLogError @ 0x1407616FC (TtmiLogError.c)
 */

__int64 __fastcall TtmpAcquireSessionById(_QWORD *a1, int a2)
{
  unsigned int v2; // ebx
  bool v4; // zf
  struct _KTHREAD *CurrentThread; // rax

  v2 = 0;
  v4 = TtmpEnabled == 1;
  *a1 = 0LL;
  if ( v4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
    if ( TtmpSession && *(_DWORD *)TtmpSession == a2 )
    {
      *a1 = TtmpSession;
    }
    else
    {
      v2 = -1073740715;
      TtmiLogError("TtmpAcquireSessionById");
      ExReleaseResourceLite(&TtmpSessionLock);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v2 = -1073741637;
    TtmiLogError("TtmpAcquireSessionById");
  }
  return v2;
}
