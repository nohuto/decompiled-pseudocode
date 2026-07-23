/*
 * XREFs of RtlIsValidLocaleName @ 0x1800F6C10
 * Callers:
 *     RtlGetSystemPreferredUILanguages @ 0x1800746F0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18007B7B0 (RtlGetUserPreferredUILanguages.c)
 *     RtlUnicodeStringToLcid @ 0x1800EBE80 (RtlUnicodeStringToLcid.c)
 * Callees:
 *     RtlpNlsGetNameIndex @ 0x180016E30 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x18007BA38 (RtlpLoadNlsData.c)
 *     RtlpGetCustomCultureData @ 0x1800F6D60 (RtlpGetCustomCultureData.c)
 *     RtlpIsCustomLocale @ 0x1800F70D4 (RtlpIsCustomLocale.c)
 */

BOOLEAN __cdecl RtlIsValidLocaleName(PCWSTR LocaleName, ULONG Flags)
{
  char v2; // di
  int NameIndex; // eax

  v2 = Flags;
  if ( !LocaleName || (Flags & 0xFFFFFFFD) != 0 || !pTblPtrs && !RtlpLoadNlsData() )
    return 0;
  NameIndex = RtlpNlsGetNameIndex((__int64)LocaleName);
  if ( NameIndex < 0 )
  {
    if ( !(unsigned __int8)RtlpIsCustomLocale(LocaleName)
      || (v2 & 2) == 0 && (int)RtlpGetCustomCultureData(LocaleName, 0LL, 0LL, 0LL) < 0 )
    {
      return 0;
    }
  }
  else if ( (v2 & 2) == 0 )
  {
    _mm_lfence();
    if ( (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 48)
                   * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * NameIndex + 2)
                   + *(_QWORD *)(pTblPtrs + 8)
                   + 24LL) & 1) == 0 )
      return 0;
  }
  return 1;
}
