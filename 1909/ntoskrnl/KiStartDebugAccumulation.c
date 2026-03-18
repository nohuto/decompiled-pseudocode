/*
 * XREFs of KiStartDebugAccumulation @ 0x1402AE870
 * Callers:
 *     KeFreezeExecution @ 0x1402ADB80 (KeFreezeExecution.c)
 *     KiFreezeTargetExecution @ 0x1402AE2C0 (KiFreezeTargetExecution.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x140012D9C (KiUpdateTotalCyclesCurrentThread.c)
 */

__int64 __fastcall KiStartDebugAccumulation(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 32) && !PoAllProcIntrDisabled )
    return KiUpdateTotalCyclesCurrentThread(a1, *(_QWORD *)(a1 + 8), 0LL);
  return result;
}
