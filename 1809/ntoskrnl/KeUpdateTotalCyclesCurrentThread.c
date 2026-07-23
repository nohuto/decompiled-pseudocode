/*
 * XREFs of KeUpdateTotalCyclesCurrentThread @ 0x140001858
 * Callers:
 *     PsQueryTotalCycleTimeProcess @ 0x140586280 (PsQueryTotalCycleTimeProcess.c)
 *     KeEnableProfiling @ 0x140845628 (KeEnableProfiling.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400D1DBC (KiUpdateTotalCyclesCurrentThread.c)
 */

__int64 __fastcall KeUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  _disable();
  result = KiUpdateTotalCyclesCurrentThread(KeGetCurrentPrcb(), a1, a2);
  _enable();
  return result;
}
