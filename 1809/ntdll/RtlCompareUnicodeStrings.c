/*
 * XREFs of RtlCompareUnicodeStrings @ 0x1800571D0
 * Callers:
 *     RtlpFindUnicodeStringInSection @ 0x18000BCF4 (RtlpFindUnicodeStringInSection.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180022CBC (LdrpSnapKernelBaseExtensions.c)
 *     ApiSetpSearchForApiSetHost @ 0x180025EF4 (ApiSetpSearchForApiSetHost.c)
 *     ApiSetpSearchForApiSet @ 0x18002661C (ApiSetpSearchForApiSet.c)
 *     LdrpSearchPath @ 0x18002A61C (LdrpSearchPath.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x18004B61C (RtlpCapabilityCheckSystemCapability.c)
 *     LdrpCompareModuleName @ 0x180054144 (LdrpCompareModuleName.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x180056124 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     RtlpQueryEnvironmentCache @ 0x180057038 (RtlpQueryEnvironmentCache.c)
 *     RtlCompareUnicodeString @ 0x180057190 (RtlCompareUnicodeString.c)
 *     LdrpQuerySxSMUIFile @ 0x1800584B4 (LdrpQuerySxSMUIFile.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007949C (RtlpProcessIFEOKeyFilter.c)
 *     LdrpIsModuleUnderSystem32 @ 0x18007FBC4 (LdrpIsModuleUnderSystem32.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D2B8C (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpIsSubstringFound @ 0x1800D68AC (LdrpIsSubstringFound.c)
 *     LdrpCompareRedirectedFunction @ 0x1800D7668 (LdrpCompareRedirectedFunction.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800E4968 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpMatchUILanguage @ 0x1800F94A4 (RtlpMatchUILanguage.c)
 *     RtlpMatchUserLanguage @ 0x1800F9584 (RtlpMatchUserLanguage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x180102444 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180102A28 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     <none>
 */

LONG __cdecl RtlCompareUnicodeStrings(
        PCWCH String1,
        SIZE_T String1Length,
        PCWCH String2,
        SIZE_T String2Length,
        BOOLEAN CaseInSensitive)
{
  SIZE_T v5; // rax
  int v6; // edi
  int v7; // ebx
  const WCHAR *v8; // r10
  signed __int64 v9; // r11
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  signed __int64 v13; // r11
  int v14; // eax
  int v15; // edx

  v5 = String1Length;
  v6 = String2Length;
  if ( String1Length > String2Length )
    v5 = String2Length;
  v7 = String1Length;
  v8 = &String1[v5];
  if ( CaseInSensitive )
  {
    if ( String1 < v8 )
    {
      v9 = (char *)String2 - (char *)String1;
      while ( 1 )
      {
        v10 = *String1;
        v11 = *(PCWCH)((char *)String1 + v9);
        if ( (_DWORD)v10 != (_DWORD)v11 )
        {
          if ( (unsigned int)v10 >= 0x61 )
          {
            if ( (unsigned int)v10 > 0x7A )
              LODWORD(v10) = (unsigned __int16)(v10
                                              + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                         + 2
                                                         * ((v10 & 0xF)
                                                          + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                + 2LL
                                                                                * (((unsigned __int8)v10 >> 4)
                                                                                 + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v10 >> 8)))))));
            else
              LODWORD(v10) = v10 - 32;
          }
          if ( (unsigned int)v11 >= 0x61 )
          {
            if ( (unsigned int)v11 > 0x7A )
              LODWORD(v11) = (unsigned __int16)(v11
                                              + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                         + 2
                                                         * ((v11 & 0xF)
                                                          + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                + 2LL
                                                                                * (((unsigned __int8)v11 >> 4)
                                                                                 + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v11 >> 8)))))));
            else
              LODWORD(v11) = v11 - 32;
          }
          if ( (_DWORD)v10 != (_DWORD)v11 )
            break;
        }
        if ( ++String1 >= v8 )
          return String1Length - v6;
      }
      return v10 - v11;
    }
    return String1Length - v6;
  }
  if ( String1 >= v8 )
    return String1Length - v6;
  v13 = (char *)String2 - (char *)String1;
  while ( 1 )
  {
    v14 = *String1;
    v15 = *(PCWCH)((char *)String1 + v13);
    if ( v14 != v15 )
      break;
    if ( ++String1 >= v8 )
      return v7 - String2Length;
  }
  return v14 - v15;
}
