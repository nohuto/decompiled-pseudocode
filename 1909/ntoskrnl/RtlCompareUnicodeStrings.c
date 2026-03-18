/*
 * XREFs of RtlCompareUnicodeStrings @ 0x1406AF3A0
 * Callers:
 *     ApiSetpSearchForApiSet @ 0x14017D96C (ApiSetpSearchForApiSet.c)
 *     EtwpAvlCompareKeyNames @ 0x140190360 (EtwpAvlCompareKeyNames.c)
 *     ApiSetpSearchForApiSetHost @ 0x140342DEC (ApiSetpSearchForApiSetHost.c)
 *     AsiSortValueList @ 0x1403436E0 (AsiSortValueList.c)
 *     CmpFindNameInListWithStatus @ 0x140600430 (CmpFindNameInListWithStatus.c)
 *     EtwpExpandFileName @ 0x1406AF148 (EtwpExpandFileName.c)
 *     PnpCheckDeviceIdsChanged @ 0x140738648 (PnpCheckDeviceIdsChanged.c)
 *     PiDevCfgResolveVariableExpression @ 0x140868F00 (PiDevCfgResolveVariableExpression.c)
 *     PnpCompareMultiSz @ 0x140874468 (PnpCompareMultiSz.c)
 *     PopDirectedDripsUmTestDeviceCompare @ 0x1408B8960 (PopDirectedDripsUmTestDeviceCompare.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x140945BB0 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140945E5C (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     NLS_UPCASE @ 0x1400CFCA0 (NLS_UPCASE.c)
 */

LONG __stdcall RtlCompareUnicodeStrings(
        PCWCH String1,
        SIZE_T String1Length,
        PCWCH String2,
        SIZE_T String2Length,
        BOOLEAN CaseInSensitive)
{
  SIZE_T v5; // rax
  int v6; // edi
  unsigned __int16 *v7; // r10
  const WCHAR *v8; // rbx
  signed __int64 v10; // r11
  unsigned __int16 v11; // si
  unsigned __int16 v12; // bp
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // cx

  v5 = String1Length;
  v6 = String1Length;
  if ( String1Length > String2Length )
    v5 = String2Length;
  v7 = (unsigned __int16 *)String1;
  v8 = &String1[v5];
  if ( String1 >= v8 )
    return v6 - String2Length;
  v10 = (char *)String2 - (char *)String1;
  if ( CaseInSensitive )
  {
    while ( 1 )
    {
      v11 = *(unsigned __int16 *)((char *)v7 + v10);
      if ( *v7 != v11 )
      {
        v12 = NLS_UPCASE(*v7);
        v13 = NLS_UPCASE(v11);
        if ( v12 != v13 )
          break;
      }
      if ( ++v7 >= v8 )
        return v6 - String2Length;
    }
    return v12 - v13;
  }
  else
  {
    while ( 1 )
    {
      v14 = *(unsigned __int16 *)((char *)v7 + v10);
      if ( *v7 != v14 )
        break;
      if ( ++v7 >= v8 )
        return v6 - String2Length;
    }
    return *v7 - v14;
  }
}
