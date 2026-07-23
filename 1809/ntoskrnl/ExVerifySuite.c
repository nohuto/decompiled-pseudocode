/*
 * XREFs of ExVerifySuite @ 0x14018DEE0
 * Callers:
 *     MmWriteTriageInformation @ 0x1402AEAC8 (MmWriteTriageInformation.c)
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 *     PsLocateSystemDlls @ 0x1407572A8 (PsLocateSystemDlls.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x1409D6BCC (ExpUpdateProductSuiteTypeInRegistry.c)
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
