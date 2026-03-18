/*
 * XREFs of SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1401AF2A4
 * Callers:
 *     SymCryptSaveYmm @ 0x14018EDB0 (SymCryptSaveYmm.c)
 * Callees:
 *     KeSaveExtendedProcessorState @ 0x14012E540 (KeSaveExtendedProcessorState.c)
 *     SymCryptCpuFeaturesNeverPresent @ 0x14013A76C (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFatal @ 0x14028F68C (SymCryptFatal.c)
 */

__int64 __fastcall SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater(PXSTATE_SAVE XStateSave)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (((unsigned __int8)g_SymCryptCpuFeaturesNotPresent | (unsigned __int8)SymCryptCpuFeaturesNeverPresent()) & 0x10) != 0 )
    SymCryptFatal(544042361LL);
  if ( KeSaveExtendedProcessorState(4uLL, XStateSave) < 0 )
    return 169869640;
  return v2;
}
