/*
 * XREFs of SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1401BAB04
 * Callers:
 *     SymCryptRestoreYmm @ 0x140199B8C (SymCryptRestoreYmm.c)
 * Callees:
 *     KeRestoreExtendedProcessorState @ 0x1401311E0 (KeRestoreExtendedProcessorState.c)
 */

void __fastcall SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater(struct _XSTATE_SAVE *a1)
{
  KeRestoreExtendedProcessorState(a1);
}
