/*
 * XREFs of PopFxIsDirectedPowerTransitionSupported @ 0x1402F364C
 * Callers:
 *     PopDripsWatchdogDfxCallback @ 0x1408AA5C0 (PopDripsWatchdogDfxCallback.c)
 *     PopDripsWatchdogPs4Callback @ 0x1408AA980 (PopDripsWatchdogPs4Callback.c)
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x1408B89CC (PopDirectedDripsBuildBroadcastTreeFull.c)
 * Callees:
 *     <none>
 */

char __fastcall PopFxIsDirectedPowerTransitionSupported(__int64 a1, int *a2)
{
  int v2; // r8d
  char result; // al

  v2 = 0;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 816), 0, 0) & 0x20) != 0 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 816), 0, 0) & 0x100) != 0 )
    {
      result = 0;
      v2 = 2;
    }
    else
    {
      result = 1;
    }
  }
  else
  {
    result = 0;
    v2 = 1;
  }
  if ( a2 )
    *a2 = v2;
  return result;
}
