/*
 * XREFs of HUBHSM_WaitingForPortsToAcquireReferenceOnResume @ 0x1C00082C0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_QueuePowerUpEventToPSMs @ 0x1C000DA78 (HUBMUX_QueuePowerUpEventToPSMs.c)
 */

__int64 __fastcall HUBHSM_WaitingForPortsToAcquireReferenceOnResume(__int64 a1)
{
  HUBMUX_QueuePowerUpEventToPSMs(*(_QWORD *)(a1 + 960), 3014LL);
  return 1000LL;
}
