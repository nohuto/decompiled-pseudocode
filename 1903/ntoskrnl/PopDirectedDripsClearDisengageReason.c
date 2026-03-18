/*
 * XREFs of PopDirectedDripsClearDisengageReason @ 0x140159350
 * Callers:
 *     PopDirectedDripsNotifyPnpActionQueueEvent @ 0x140159218 (PopDirectedDripsNotifyPnpActionQueueEvent.c)
 *     PnpRemoveDeviceActionRequests @ 0x140177278 (PnpRemoveDeviceActionRequests.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x14029FB7C (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PopDirectedDripsDisengageTimerCallback @ 0x1402F1120 (PopDirectedDripsDisengageTimerCallback.c)
 *     PopDirectedDripsNotify @ 0x140747380 (PopDirectedDripsNotify.c)
 *     PopDripsWatchdogCallbackWorker @ 0x1408AAA90 (PopDripsWatchdogCallbackWorker.c)
 *     PopPowerAggregatorDisengageDirectedDrips @ 0x1408B28B4 (PopPowerAggregatorDisengageDirectedDrips.c)
 * Callees:
 *     PopQueueDirectedDripsWork @ 0x1402F1840 (PopQueueDirectedDripsWork.c)
 */

__int64 __fastcall PopDirectedDripsClearDisengageReason(char a1)
{
  int v1; // edx
  signed __int32 v2; // r8d
  __int64 result; // rax
  int v4; // ett

  v1 = 1 << a1;
  _m_prefetchw(&dword_140444B5C);
  v2 = _InterlockedAnd(&dword_140444B5C, ~(1 << a1));
  _m_prefetchw(PopDirectedDripsState);
  LODWORD(result) = PopDirectedDripsState[0];
  do
  {
    v4 = result;
    result = (unsigned int)_InterlockedCompareExchange(PopDirectedDripsState, result, result);
  }
  while ( v4 != (_DWORD)result );
  if ( (result & 1) != 0 && (v2 & v1) != 0 )
    return PopQueueDirectedDripsWork(PopDirectedDripsState, 2LL);
  return result;
}
