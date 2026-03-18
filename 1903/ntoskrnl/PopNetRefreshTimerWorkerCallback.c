/*
 * XREFs of PopNetRefreshTimerWorkerCallback @ 0x1408B41B0
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x14013D6DC (PopOkayToQueueNextWorkItem.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopNetArmRefreshTimer @ 0x1408B3E30 (PopNetArmRefreshTimer.c)
 *     PopNetDisengageNetworkRefresh @ 0x1408B3F80 (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x1408B3FC8 (PopNetEngageNetworkRefresh.c)
 *     PopNetGetNextDueRefreshTime @ 0x1408B4014 (PopNetGetNextDueRefreshTime.c)
 *     PopNetIsNetworkRefreshEnabled @ 0x1408B4140 (PopNetIsNetworkRefreshEnabled.c)
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
  PopOkayToQueueNextWorkItem((__int64)&unk_140438C48);
  return PopReleasePolicyLock();
}
