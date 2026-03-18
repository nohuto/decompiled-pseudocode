/*
 * XREFs of HUBHSM_WaitingForDevicesToReleaseReferenceOnSuspend @ 0x1C00089B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_QueuePowerDownEventToDSMs @ 0x1C000F1F8 (HUBMUX_QueuePowerDownEventToDSMs.c)
 */

__int64 __fastcall HUBHSM_WaitingForDevicesToReleaseReferenceOnSuspend(__int64 a1)
{
  HUBMUX_QueuePowerDownEventToDSMs(*(_QWORD *)(a1 + 960), 4030LL);
  return 1000LL;
}
