/*
 * XREFs of HUBHSM_WaitingForPortsToReleaseReferenceOnResetOnResume @ 0x1C00083C0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_QueueStopToAllPSMs @ 0x1C000EC28 (HUBMUX_QueueStopToAllPSMs.c)
 */

__int64 __fastcall HUBHSM_WaitingForPortsToReleaseReferenceOnResetOnResume(__int64 a1)
{
  HUBMUX_QueueStopToAllPSMs(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
