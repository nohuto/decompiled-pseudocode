/*
 * XREFs of SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1401BAB18
 * Callers:
 *     SymCryptSaveYmm @ 0x140199BA0 (SymCryptSaveYmm.c)
 * Callees:
 *     KeSaveExtendedProcessorState @ 0x14012EBB0 (KeSaveExtendedProcessorState.c)
 *     SymCryptCpuFeaturesNeverPresent @ 0x14013C96C (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFatal @ 0x1402A5EEC (SymCryptFatal.c)
 */

__int64 __fastcall SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater(PXSTATE_SAVE XStateSave)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (((unsigned __int8)g_SymCryptCpuFeaturesNotPresent | (unsigned __int8)SymCryptCpuFeaturesNeverPresent()) & 0x10) != 0 )
    SymCryptFatal(544042361LL);
  if ( KeSaveExtendedProcessorState(4uLL, XStateSave) < 0 )
    return 184549640;
  return v2;
}
