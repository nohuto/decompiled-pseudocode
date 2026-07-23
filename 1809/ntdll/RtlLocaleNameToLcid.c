/*
 * XREFs of RtlLocaleNameToLcid @ 0x180041310
 * Callers:
 *     RtlLoadString @ 0x18003B5D0 (RtlLoadString.c)
 *     RtlCultureNameToLCID @ 0x180040460 (RtlCultureNameToLCID.c)
 *     LdrpGetParentLangId @ 0x1800830D4 (LdrpGetParentLangId.c)
 * Callees:
 *     RtlpNlsGetNameIndex @ 0x1800413C0 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x180080B24 (RtlpLoadNlsData.c)
 *     RtlpIsCustomLocale @ 0x18008A4EC (RtlpIsCustomLocale.c)
 *     RtlpGetCustomCultureData @ 0x1800F9110 (RtlpGetCustomCultureData.c)
 *     RtlpMatchUILanguage @ 0x1800F94A4 (RtlpMatchUILanguage.c)
 *     RtlpMatchUserLanguage @ 0x1800F9584 (RtlpMatchUserLanguage.c)
 */

NTSTATUS __cdecl RtlLocaleNameToLcid(PCWSTR LocaleName, PLCID lcid, ULONG Flags)
{
  char v3; // bp
  __int64 v6; // rdi
  int NameIndex; // eax

  v3 = Flags;
  if ( !LocaleName )
    return -1073741585;
  if ( !lcid )
    return -1073741584;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741583;
  v6 = pTblPtrs;
  if ( pTblPtrs )
    goto LABEL_5;
  if ( (unsigned __int8)RtlpLoadNlsData() )
  {
    v6 = pTblPtrs;
LABEL_5:
    NameIndex = RtlpNlsGetNameIndex(LocaleName);
    if ( NameIndex >= 0 )
    {
      if ( (v3 & 2) != 0
        || (_mm_lfence(),
            v6 = pTblPtrs,
            (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 56)
                      * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 32) + 8LL * NameIndex + 2)
                      + *(_QWORD *)(pTblPtrs + 16)
                      + 24LL) & 1) != 0) )
      {
        *lcid = *(_DWORD *)(*(_QWORD *)(v6 + 32) + 8LL * NameIndex + 4) & 0x7FFFFFFF;
        return 0;
      }
      return -1073741585;
    }
    if ( !(unsigned __int8)RtlpIsCustomLocale(LocaleName) )
      return -1073741585;
    if ( (v3 & 1) != 0 && (unsigned __int8)RtlpMatchUILanguage(LocaleName) )
    {
      *lcid = 5120;
      return 0;
    }
    if ( (unsigned __int8)RtlpMatchUserLanguage(LocaleName) )
    {
      *lcid = 3072;
      return 0;
    }
    if ( (v3 & 2) != 0 || (int)RtlpGetCustomCultureData(LocaleName, 0LL, 0LL, 0LL) >= 0 )
    {
      *lcid = 4096;
      return 0;
    }
  }
  return -1073741823;
}
