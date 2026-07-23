/*
 * XREFs of PopNetRefreshTimerWorkerCallback @ 0x140878110
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x14013BB40 (PopOkayToQueueNextWorkItem.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopNetArmRefreshTimer @ 0x140877DC0 (PopNetArmRefreshTimer.c)
 *     PopNetDisengageNetworkRefresh @ 0x140877F10 (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x140877F58 (PopNetEngageNetworkRefresh.c)
 *     PopNetGetNextDueRefreshTime @ 0x140877FA4 (PopNetGetNextDueRefreshTime.c)
 *     PopNetIsNetworkRefreshEnabled @ 0x1408780A0 (PopNetIsNetworkRefreshEnabled.c)
 */

__int64 PopNetRefreshTimerWorkerCallback()
{
  __int64 v0; // rcx
  __int64 QuadPart; // rcx
  char v2; // dl
  LARGE_INTEGER NextDueRefreshTime; // rax

  PopAcquirePolicyLock();
  if ( PopNetInLpePhase && PopNetIsNetworkRefreshEnabled() && _InterlockedExchangeAdd(&PopNetRefreshTimerState, 0) == 2 )
  {
    if ( PopNetRefreshIntervalActive )
    {
      PopNetDisengageNetworkRefresh();
      NextDueRefreshTime = PopNetGetNextDueRefreshTime();
      v2 = 1;
      _InterlockedExchange(&PopNetRefreshTimerState, 1);
      QuadPart = NextDueRefreshTime.QuadPart;
    }
    else
    {
      PopNetEngageNetworkRefresh(v0);
      QuadPart = 300000000LL;
      _InterlockedExchange(&PopNetRefreshTimerState, 1);
      v2 = 0;
    }
    PopNetArmRefreshTimer(QuadPart, v2);
  }
  PopOkayToQueueNextWorkItem((__int64)&unk_1404113E8);
  return PopReleasePolicyLock();
}
