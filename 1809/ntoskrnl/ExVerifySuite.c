/*
 * XREFs of ExVerifySuite @ 0x14018DD80
 * Callers:
 *     MmWriteTriageInformation @ 0x1402AE7D8 (MmWriteTriageInformation.c)
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 *     PsLocateSystemDlls @ 0x1407560D8 (PsLocateSystemDlls.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x1409D5BCC (ExpUpdateProductSuiteTypeInRegistry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExVerifySuite(SUITE_TYPE SuiteType)
{
  int v1; // eax

  if ( SuiteType > MaxSuiteType )
    return 0;
  v1 = MEMORY[0xFFFFF780000002D0];
  return _bittest(&v1, SuiteType);
}
