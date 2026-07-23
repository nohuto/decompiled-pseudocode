/*
 * XREFs of KiStartDebugAccumulation @ 0x140297E48
 * Callers:
 *     KeFreezeExecution @ 0x1402971B8 (KeFreezeExecution.c)
 *     KiFreezeTargetExecution @ 0x1402978CC (KiFreezeTargetExecution.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400D1DBC (KiUpdateTotalCyclesCurrentThread.c)
 */

__int64 __fastcall KiStartDebugAccumulation(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 32) && !PoAllProcIntrDisabled )
    return KiUpdateTotalCyclesCurrentThread(a1, *(_QWORD *)(a1 + 8), 0LL);
  return result;
}
