/*
 * XREFs of KeRestoreExtendedProcessorState @ 0x1401311E0
 * Callers:
 *     SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1401BAB04 (SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater.c)
 * Callees:
 *     KeRestoreExtendedAndSupervisorState @ 0x1401311F4 (KeRestoreExtendedAndSupervisorState.c)
 */

void __stdcall KeRestoreExtendedProcessorState(PXSTATE_SAVE XStateSave)
{
  KeRestoreExtendedAndSupervisorState(XStateSave);
}
