/*
 * XREFs of PopDirectedDripsSetDisengageReason @ 0x1401593AC
 * Callers:
 *     PopDirectedDripsNotifyPnpActionQueueEvent @ 0x140159218 (PopDirectedDripsNotifyPnpActionQueueEvent.c)
 *     PnpRequestDeviceAction @ 0x14015D184 (PnpRequestDeviceAction.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x1402F175C (PopDirectedDripsStartDisengageTimer.c)
 *     PopDirectedDripsNotify @ 0x140747380 (PopDirectedDripsNotify.c)
 *     PopDripsWatchdogCallbackWorker @ 0x1408AAA90 (PopDripsWatchdogCallbackWorker.c)
 * Callees:
 *     PopQueueDirectedDripsWork @ 0x1402F1840 (PopQueueDirectedDripsWork.c)
 */

__int64 __fastcall PopDirectedDripsSetDisengageReason(char a1)
{
  int v1; // edx
  signed __int32 v2; // r8d
  __int64 result; // rax
  int v4; // ett

  v1 = 1 << a1;
  _m_prefetchw(&dword_140444B5C);
  v2 = _InterlockedOr(&dword_140444B5C, 1 << a1);
  _m_prefetchw(PopDirectedDripsState);
  LODWORD(result) = PopDirectedDripsState[0];
  do
  {
    v4 = result;
    result = (unsigned int)_InterlockedCompareExchange(PopDirectedDripsState, result, result);
  }
  while ( v4 != (_DWORD)result );
  if ( (result & 1) != 0 && (v2 & v1) == 0 )
    return PopQueueDirectedDripsWork(PopDirectedDripsState, 2LL);
  return result;
}
