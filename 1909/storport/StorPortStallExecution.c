/*
 * XREFs of StorPortStallExecution @ 0x1C0017430
 * Callers:
 *     StorPortStallExecutionVrfy @ 0x1C00787B0 (StorPortStallExecutionVrfy.c)
 * Callees:
 *     <none>
 */

void __fastcall StorPortStallExecution(ULONG a1)
{
  KeStallExecutionProcessor(a1);
}
