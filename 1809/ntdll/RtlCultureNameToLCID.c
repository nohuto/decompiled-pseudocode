/*
 * XREFs of RtlCultureNameToLCID @ 0x180040460
 * Callers:
 *     RtlGetFileMUIPath @ 0x180034DB0 (RtlGetFileMUIPath.c)
 *     LdrResSearchResource @ 0x180037450 (LdrResSearchResource.c)
 *     LdrResFallbackLangList @ 0x180039A78 (LdrResFallbackLangList.c)
 *     RtlGetNeutralFallback @ 0x18003BDDC (RtlGetNeutralFallback.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18003C58C (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     LdrpSearchResourceSection_U @ 0x18003D2E8 (LdrpSearchResourceSection_U.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18003E440 (LdrpLoadResourceFromAlternativeModule.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18003F388 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x18003F998 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18003FB5C (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x18003FE48 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     LdrpLangFallbackListFindNode @ 0x18004023C (LdrpLangFallbackListFindNode.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x18004C824 (RtlpMuiRegGetLanguageSpec.c)
 *     GetLCIDFromLangListNode @ 0x18007A7D4 (GetLCIDFromLangListNode.c)
 *     LdrLoadAlternateResourceModule @ 0x1800815E0 (LdrLoadAlternateResourceModule.c)
 *     RtlpGetLCIDFromLangInfoNode @ 0x180086950 (RtlpGetLCIDFromLangInfoNode.c)
 *     RtlpMUIEnumerateFolder @ 0x18008A184 (RtlpMUIEnumerateFolder.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008F224 (RtlpLoadInstallLanguageFallback.c)
 *     LdrResRelease @ 0x18008F6F0 (LdrResRelease.c)
 *     RtlGetUILanguageInfo @ 0x1800EEC40 (RtlGetUILanguageInfo.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800EFC00 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpSetInstallLanguage @ 0x1800F05E0 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F0D10 (RtlpSetPreferredUILanguages.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800FF964 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800FFF04 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x18010077C (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x180100E8C (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1801010C4 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpRefreshCachedUILanguage @ 0x180101D00 (RtlpRefreshCachedUILanguage.c)
 *     _RtlMuiRegAddLIPParent @ 0x180101E40 (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x180102378 (_RtlpMuiRegInitAnyLanguage.c)
 * Callees:
 *     RtlpMuiRegGetStringIndexInPool @ 0x1800405BC (RtlpMuiRegGetStringIndexInPool.c)
 *     RtlLocaleNameToLcid @ 0x180041310 (RtlLocaleNameToLcid.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x180090060 (__report_rangecheckfailure.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

char __fastcall RtlCultureNameToLCID(unsigned __int16 *a1, _DWORD *a2)
{
  char v2; // di
  const void *v4; // rdx
  size_t v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rbx
  int StringIndexInPool; // eax
  __int16 v13; // r10
  unsigned __int16 v14; // r9
  unsigned __int16 v15; // cx
  __int64 v16; // r8
  char result; // al
  WCHAR SourceString[88]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = 0;
  if ( !a1 )
    return v2;
  if ( !a2 )
    return v2;
  if ( !*a1 )
    return v2;
  v4 = (const void *)*((_QWORD *)a1 + 1);
  if ( !v4 || (unsigned int)*a1 + 2 > 0x55 )
    return v2;
  v5 = *a1;
  memmove(SourceString, v4, v5);
  v9 = v5 >> 1;
  if ( v9 >= 85 )
    _report_rangecheckfailure(v7, v6, v8);
  v10 = g_RegInfo;
  SourceString[v9] = 0;
  if ( !v10 )
    return (int)RtlLocaleNameToLcid(SourceString) >= 0;
  v11 = *(_QWORD *)(v10 + 24);
  if ( !v11 || !*(_QWORD *)(v11 + 16) || !SourceString[0] )
    return (int)RtlLocaleNameToLcid(SourceString) >= 0;
  StringIndexInPool = RtlpMuiRegGetStringIndexInPool(*(_QWORD *)(v10 + 32), SourceString);
  v13 = -1;
  if ( StringIndexInPool >= 0 )
    v13 = StringIndexInPool;
  if ( v13 < 0 )
    return (int)RtlLocaleNameToLcid(SourceString) >= 0;
  v14 = *(_WORD *)(v11 + 6);
  v15 = 0;
  if ( !v14 )
    return (int)RtlLocaleNameToLcid(SourceString) >= 0;
  v16 = *(_QWORD *)(v11 + 16);
  while ( *(_WORD *)(28LL * v15 + v16 + 6) != v13 )
  {
    if ( ++v15 >= v14 )
      return (int)RtlLocaleNameToLcid(SourceString) >= 0;
  }
  result = 1;
  *a2 = *(unsigned __int16 *)(28LL * v15 + v16 + 4);
  return result;
}
