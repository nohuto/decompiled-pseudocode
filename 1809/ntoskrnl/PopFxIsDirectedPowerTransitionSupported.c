/*
 * XREFs of PopFxIsDirectedPowerTransitionSupported @ 0x1402D8364
 * Callers:
 *     PopDripsWatchdogDfxCallback @ 0x14086E2E0 (PopDripsWatchdogDfxCallback.c)
 *     PopDripsWatchdogPs4Callback @ 0x14086E650 (PopDripsWatchdogPs4Callback.c)
 *     PopDirectedDripsBuildBroadcastTree @ 0x14087BFB8 (PopDirectedDripsBuildBroadcastTree.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopFxIsDirectedPowerTransitionSupported(__int64 a1)
{
  return (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 808), 0, 0) & 0x20) != 0;
}
