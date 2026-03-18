/*
 * XREFs of KeRestoreExtendedProcessorState @ 0x140130650
 * Callers:
 *     SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1401BA3E4 (SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater.c)
 * Callees:
 *     KeRestoreExtendedAndSupervisorState @ 0x140130664 (KeRestoreExtendedAndSupervisorState.c)
 */

void __stdcall KeRestoreExtendedProcessorState(PXSTATE_SAVE XStateSave)
{
  KeRestoreExtendedAndSupervisorState(XStateSave);
}
