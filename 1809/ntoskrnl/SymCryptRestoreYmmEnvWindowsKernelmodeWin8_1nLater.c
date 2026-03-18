/*
 * XREFs of SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1401AF290
 * Callers:
 *     SymCryptRestoreYmm @ 0x14018ED9C (SymCryptRestoreYmm.c)
 * Callees:
 *     KeRestoreExtendedProcessorState @ 0x14012F790 (KeRestoreExtendedProcessorState.c)
 */

void __fastcall SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater(struct _XSTATE_SAVE *a1)
{
  KeRestoreExtendedProcessorState(a1);
}
