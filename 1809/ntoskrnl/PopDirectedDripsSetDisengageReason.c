/*
 * XREFs of PopDirectedDripsSetDisengageReason @ 0x140869918
 * Callers:
 *     PopDirectedDripsNotify @ 0x14071F9E8 (PopDirectedDripsNotify.c)
 *     PopDripsWatchdogCallbackWorker @ 0x14086F250 (PopDripsWatchdogCallbackWorker.c)
 * Callees:
 *     PopQueueDirectedDripsWork @ 0x1402D6D58 (PopQueueDirectedDripsWork.c)
 */

signed __int32 __fastcall PopDirectedDripsSetDisengageReason(char a1)
{
  signed __int32 result; // eax
  signed __int32 v2; // ett
  int v3; // edx

  _m_prefetchw(&PopDirectedDripsState);
  result = PopDirectedDripsState;
  do
  {
    v2 = result;
    result = _InterlockedCompareExchange(&PopDirectedDripsState, result, result);
  }
  while ( v2 != result );
  if ( (result & 1) != 0 )
  {
    v3 = 1 << a1;
    _m_prefetchw(&dword_14041A2B4);
    result = _InterlockedOr(&dword_14041A2B4, 1 << a1);
    if ( (result & v3) == 0 )
      return PopQueueDirectedDripsWork((struct _KEVENT *)&PopDirectedDripsState, 2uLL);
  }
  return result;
}
