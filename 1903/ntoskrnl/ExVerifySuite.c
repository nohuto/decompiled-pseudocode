/*
 * XREFs of ExVerifySuite @ 0x14018C1B0
 * Callers:
 *     MmWriteTriageInformation @ 0x1402C6718 (MmWriteTriageInformation.c)
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 *     PsLocateSystemDlls @ 0x14075B4B8 (PsLocateSystemDlls.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140A0A860 (ExpUpdateProductSuiteTypeInRegistry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExVerifySuite(SUITE_TYPE SuiteType)
{
  int v1; // eax

  if ( SuiteType > (PhoneNT|BackOffice) )
    return 0;
  v1 = MEMORY[0xFFFFF780000002D0];
  return _bittest(&v1, SuiteType);
}
