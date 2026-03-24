/*
 * XREFs of KeUpdateTotalCyclesCurrentThread @ 0x140001858
 * Callers:
 *     PsQueryTotalCycleTimeProcess @ 0x140585280 (PsQueryTotalCycleTimeProcess.c)
 *     KeEnableProfiling @ 0x1408443C8 (KeEnableProfiling.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400D1D3C (KiUpdateTotalCyclesCurrentThread.c)
 */

__int64 __fastcall KeUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  _disable();
  result = KiUpdateTotalCyclesCurrentThread(KeGetCurrentPrcb(), a1, a2);
  _enable();
  return result;
}
