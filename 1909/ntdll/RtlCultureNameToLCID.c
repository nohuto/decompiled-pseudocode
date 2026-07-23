/*
 * XREFs of RtlCultureNameToLCID @ 0x1800168B0
 * Callers:
 *     GetLCIDFromLangListNode @ 0x180007C9C (GetLCIDFromLangListNode.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x1800095D4 (RtlpMuiRegGetLanguageSpec.c)
 *     RtlGetNeutralFallback @ 0x180013008 (RtlGetNeutralFallback.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800136CC (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x180014518 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18001583C (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180015FD0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x1800162BC (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     LdrpLangFallbackListFindNode @ 0x180016690 (LdrpLangFallbackListFindNode.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1800173F0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x180018D8C (LdrpSearchResourceSection_U.c)
 *     LdrResSearchResource @ 0x180056800 (LdrResSearchResource.c)
 *     LdrResFallbackLangList @ 0x1800589F0 (LdrResFallbackLangList.c)
 *     RtlGetFileMUIPath @ 0x180059E30 (RtlGetFileMUIPath.c)
 *     LdrLoadAlternateResourceModule @ 0x18007D030 (LdrLoadAlternateResourceModule.c)
 *     RtlpGetLCIDFromLangInfoNode @ 0x180083610 (RtlpGetLCIDFromLangInfoNode.c)
 *     RtlGetUILanguageInfo @ 0x180084510 (RtlGetUILanguageInfo.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008BE34 (RtlpLoadInstallLanguageFallback.c)
 *     LdrResRelease @ 0x18008C200 (LdrResRelease.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800EC8D0 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpMUIEnumerateFolder @ 0x1800ED14C (RtlpMUIEnumerateFolder.c)
 *     RtlpSetInstallLanguage @ 0x1800ED610 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800EDCD0 (RtlpSetPreferredUILanguages.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800FD248 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800FD7E8 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1800FE05C (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800FE638 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800FE870 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpRefreshCachedUILanguage @ 0x1800FF4A0 (RtlpRefreshCachedUILanguage.c)
 *     _RtlMuiRegAddLIPParent @ 0x1800FF5E0 (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x1800FFB18 (_RtlpMuiRegInitAnyLanguage.c)
 * Callees:
 *     RtlpMuiRegGetStringIndexInPool @ 0x180016A0C (RtlpMuiRegGetStringIndexInPool.c)
 *     RtlLocaleNameToLcid @ 0x180016D90 (RtlLocaleNameToLcid.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18008CFF0 (__report_rangecheckfailure.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

BOOLEAN __cdecl RtlCultureNameToLCID(PUNICODE_STRING String, PLCID Lcid)
{
  BOOLEAN v2; // di
  wchar_t *Buffer; // rdx
  size_t Length; // rbx
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rbx
  int StringIndexInPool; // eax
  __int16 v10; // r10
  unsigned __int16 v11; // r9
  unsigned __int16 v12; // cx
  __int64 v13; // r8
  BOOLEAN result; // al
  WCHAR LocaleName[88]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = 0;
  if ( !String )
    return v2;
  if ( !Lcid )
    return v2;
  if ( !String->Length )
    return v2;
  Buffer = String->Buffer;
  if ( !Buffer || (unsigned int)String->Length + 2 > 0x55 )
    return v2;
  Length = String->Length;
  memmove(LocaleName, Buffer, Length);
  v6 = Length >> 1;
  if ( v6 >= 85 )
    _report_rangecheckfailure();
  v7 = g_RegInfo;
  LocaleName[v6] = 0;
  if ( !v7 )
    return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  v8 = v7[3];
  if ( !v8 || !*(_QWORD *)(v8 + 16) || !LocaleName[0] )
    return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  StringIndexInPool = RtlpMuiRegGetStringIndexInPool(v7[4], LocaleName);
  v10 = -1;
  if ( StringIndexInPool >= 0 )
    v10 = StringIndexInPool;
  if ( v10 < 0 )
    return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  v11 = *(_WORD *)(v8 + 6);
  v12 = 0;
  if ( !v11 )
    return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  v13 = *(_QWORD *)(v8 + 16);
  while ( *(_WORD *)(28LL * v12 + v13 + 6) != v10 )
  {
    if ( ++v12 >= v11 )
      return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  }
  result = 1;
  *Lcid = *(unsigned __int16 *)(28LL * v12 + v13 + 4);
  return result;
}
