/*
 * XREFs of PopThermalZoneTimerCallback @ 0x1402DC620
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x140121E30 (IoCancelIrp.c)
 */

BOOLEAN __fastcall PopThermalZoneTimerCallback(__int64 a1, __int64 a2)
{
  return IoCancelIrp(*(PIRP *)(a2 + 56));
}
