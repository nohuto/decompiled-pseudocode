/*
 * XREFs of KeUpdateTotalCyclesCurrentThread @ 0x140001878
 * Callers:
 *     PsQueryTotalCycleTimeProcess @ 0x1405B4CC0 (PsQueryTotalCycleTimeProcess.c)
 *     KeEnableProfiling @ 0x14087EEE8 (KeEnableProfiling.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x140012D9C (KiUpdateTotalCyclesCurrentThread.c)
 */

__int64 __fastcall KeUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  _disable();
  result = KiUpdateTotalCyclesCurrentThread(KeGetCurrentPrcb(), a1, a2);
  _enable();
  return result;
}
