/*
 * XREFs of KeUpdateTotalCyclesCurrentThread @ 0x140001878
 * Callers:
 *     PsQueryTotalCycleTimeProcess @ 0x1405B48E0 (PsQueryTotalCycleTimeProcess.c)
 *     KeEnableProfiling @ 0x14087F7E8 (KeEnableProfiling.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x140012B6C (KiUpdateTotalCyclesCurrentThread.c)
 */

__int64 __fastcall KeUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  _disable();
  result = KiUpdateTotalCyclesCurrentThread(KeGetCurrentPrcb(), a1, a2);
  _enable();
  return result;
}
