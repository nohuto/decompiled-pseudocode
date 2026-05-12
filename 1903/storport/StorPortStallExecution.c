/*
 * XREFs of StorPortStallExecution @ 0x1C0017420
 * Callers:
 *     StorPortStallExecutionVrfy @ 0x1C00777B0 (StorPortStallExecutionVrfy.c)
 * Callees:
 *     <none>
 */

void __fastcall StorPortStallExecution(ULONG a1)
{
  KeStallExecutionProcessor(a1);
}
