/*
 * XREFs of RtlCompareUnicodeStrings @ 0x14069B170
 * Callers:
 *     ApiSetpSearchForApiSet @ 0x140173E98 (ApiSetpSearchForApiSet.c)
 *     EtwpAvlCompareKeyNames @ 0x140186AC0 (EtwpAvlCompareKeyNames.c)
 *     ApiSetpSearchForApiSetHost @ 0x140321C4C (ApiSetpSearchForApiSetHost.c)
 *     AsiSortValueList @ 0x140322148 (AsiSortValueList.c)
 *     CmQueryValueKey @ 0x1406451B0 (CmQueryValueKey.c)
 *     EtwpExpandFileName @ 0x14069AF88 (EtwpExpandFileName.c)
 *     PnpCheckDeviceIdsChanged @ 0x14070B094 (PnpCheckDeviceIdsChanged.c)
 *     PiDevCfgResolveVariableExpression @ 0x14082EF50 (PiDevCfgResolveVariableExpression.c)
 *     PnpCompareMultiSz @ 0x14083A228 (PnpCompareMultiSz.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x140907AB4 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140907D58 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     <none>
 */

LONG __stdcall RtlCompareUnicodeStrings(
        PCWCH String1,
        SIZE_T String1Length,
        PCWCH String2,
        SIZE_T String2Length,
        BOOLEAN CaseInSensitive)
{
  SIZE_T v5; // rax
  int v6; // esi
  PCWCH v7; // r10
  const WCHAR *v8; // rdi
  signed __int64 v10; // r11
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  signed __int64 v13; // r11
  int v14; // eax
  int v15; // ecx

  v5 = String1Length;
  v6 = String2Length;
  if ( String1Length > String2Length )
    v5 = String2Length;
  v7 = String1;
  v8 = &String1[v5];
  if ( CaseInSensitive )
  {
    if ( String1 >= v8 )
      return String1Length - v6;
    v10 = (char *)String2 - (char *)String1;
    while ( 1 )
    {
      v11 = *v7;
      v12 = *(PCWCH)((char *)v7 + v10);
      if ( (_DWORD)v11 != (_DWORD)v12 )
      {
        if ( (unsigned int)v11 >= 0x61 )
        {
          if ( (unsigned int)v11 > 0x7A )
            LODWORD(v11) = (unsigned __int16)(v11
                                            + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v11 & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int8)v11 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v11 >> 8)]]]);
          else
            LODWORD(v11) = v11 - 32;
        }
        if ( (unsigned int)v12 >= 0x61 )
        {
          if ( (unsigned int)v12 > 0x7A )
            LODWORD(v12) = (unsigned __int16)(v12
                                            + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v12 & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int8)v12 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v12 >> 8)]]]);
          else
            LODWORD(v12) = v12 - 32;
        }
        if ( (_DWORD)v11 != (_DWORD)v12 )
          break;
      }
      if ( ++v7 >= v8 )
        return String1Length - v6;
    }
    return v11 - v12;
  }
  else
  {
    if ( String1 >= v8 )
      return String1Length - v6;
    v13 = (char *)String2 - (char *)String1;
    while ( 1 )
    {
      v14 = *v7;
      v15 = *(PCWCH)((char *)v7 + v13);
      if ( v14 != v15 )
        break;
      if ( ++v7 >= v8 )
        return String1Length - v6;
    }
    return v14 - v15;
  }
}
