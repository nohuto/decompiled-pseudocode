/*
 * XREFs of SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1401BA3E4
 * Callers:
 *     SymCryptRestoreYmm @ 0x14019952C (SymCryptRestoreYmm.c)
 * Callees:
 *     KeRestoreExtendedProcessorState @ 0x140130650 (KeRestoreExtendedProcessorState.c)
 */

void __fastcall SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater(struct _XSTATE_SAVE *a1)
{
  KeRestoreExtendedProcessorState(a1);
}
