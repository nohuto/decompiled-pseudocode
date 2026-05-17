/*
 * XREFs of RtlIsValidLocaleName @ 0x1800F8FC0
 * Callers:
 *     RtlGetSystemPreferredUILanguages @ 0x18007A100 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x180080700 (RtlGetUserPreferredUILanguages.c)
 *     RtlUnicodeStringToLcid @ 0x1800EF198 (RtlUnicodeStringToLcid.c)
 * Callees:
 *     RtlpNlsGetNameIndex @ 0x1800413C0 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x180080B14 (RtlpLoadNlsData.c)
 *     RtlpIsCustomLocale @ 0x18008A4DC (RtlpIsCustomLocale.c)
 *     RtlpGetCustomCultureData @ 0x1800F9110 (RtlpGetCustomCultureData.c)
 */

char __fastcall RtlIsValidLocaleName(unsigned __int16 *SourceString, int a2)
{
  char v2; // di
  int NameIndex; // eax

  v2 = a2;
  if ( !SourceString || (a2 & 0xFFFFFFFD) != 0 || !pTblPtrs && !RtlpLoadNlsData() )
    return 0;
  NameIndex = RtlpNlsGetNameIndex(SourceString);
  if ( NameIndex < 0 )
  {
    if ( !RtlpIsCustomLocale(SourceString)
      || (v2 & 2) == 0 && (int)RtlpGetCustomCultureData(SourceString, 0LL, 0LL, 0LL) < 0 )
    {
      return 0;
    }
  }
  else if ( (v2 & 2) == 0 )
  {
    _mm_lfence();
    if ( (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 56)
                   * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 32) + 8LL * NameIndex + 2)
                   + *(_QWORD *)(pTblPtrs + 16)
                   + 24LL) & 1) == 0 )
      return 0;
  }
  return 1;
}
