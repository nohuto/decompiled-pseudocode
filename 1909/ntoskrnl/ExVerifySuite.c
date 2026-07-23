/*
 * XREFs of ExVerifySuite @ 0x14018CA30
 * Callers:
 *     MmWriteTriageInformation @ 0x1402C6478 (MmWriteTriageInformation.c)
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 *     PsLocateSystemDlls @ 0x14075FC3C (PsLocateSystemDlls.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140A0AD8C (ExpUpdateProductSuiteTypeInRegistry.c)
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
