/*
 * XREFs of RtlCompareUnicodeStrings @ 0x1406B9CB0
 * Callers:
 *     ApiSetpSearchForApiSet @ 0x14017D27C (ApiSetpSearchForApiSet.c)
 *     EtwpAvlCompareKeyNames @ 0x1401901C0 (EtwpAvlCompareKeyNames.c)
 *     ApiSetpSearchForApiSetHost @ 0x14034338C (ApiSetpSearchForApiSetHost.c)
 *     AsiSortValueList @ 0x140343C80 (AsiSortValueList.c)
 *     CmpFindNameInListWithStatus @ 0x1405FEA00 (CmpFindNameInListWithStatus.c)
 *     EtwpExpandFileName @ 0x1406B9A58 (EtwpExpandFileName.c)
 *     PnpCheckDeviceIdsChanged @ 0x1407363E8 (PnpCheckDeviceIdsChanged.c)
 *     PiDevCfgResolveVariableExpression @ 0x140869800 (PiDevCfgResolveVariableExpression.c)
 *     PnpCompareMultiSz @ 0x140874D68 (PnpCompareMultiSz.c)
 *     PopDirectedDripsUmTestDeviceCompare @ 0x1408B9090 (PopDirectedDripsUmTestDeviceCompare.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x140946140 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1409463EC (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     NLS_UPCASE @ 0x140092980 (NLS_UPCASE.c)
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
