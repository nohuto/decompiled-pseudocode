/*
 * XREFs of KiStartDebugAccumulation @ 0x1402AEB10
 * Callers:
 *     KeFreezeExecution @ 0x1402ADE20 (KeFreezeExecution.c)
 *     KiFreezeTargetExecution @ 0x1402AE560 (KiFreezeTargetExecution.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x140012B6C (KiUpdateTotalCyclesCurrentThread.c)
 */

__int64 __fastcall KiStartDebugAccumulation(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 32) && !PoAllProcIntrDisabled )
    return KiUpdateTotalCyclesCurrentThread(a1, *(_QWORD *)(a1 + 8), 0LL);
  return result;
}
