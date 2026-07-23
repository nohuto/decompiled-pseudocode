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
 *     GetLCIDFromLangListNode @ 0x18007A7E4 (GetLCIDFromLangListNode.c)
 *     LdrLoadAlternateResourceModule @ 0x1800815F0 (LdrLoadAlternateResourceModule.c)
 *     RtlpGetLCIDFromLangInfoNode @ 0x180086960 (RtlpGetLCIDFromLangInfoNode.c)
 *     RtlpMUIEnumerateFolder @ 0x18008A194 (RtlpMUIEnumerateFolder.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008F234 (RtlpLoadInstallLanguageFallback.c)
 *     LdrResRelease @ 0x18008F700 (LdrResRelease.c)
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
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x180090070 (__report_rangecheckfailure.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

BOOLEAN __cdecl RtlCultureNameToLCID(PUNICODE_STRING String, PLCID Lcid)
{
  BOOLEAN v2; // di
  wchar_t *Buffer; // rdx
  size_t Length; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // rbx
  _QWORD *v10; // rcx
  __int64 v11; // rbx
  int StringIndexInPool; // eax
  __int16 v13; // r10
  unsigned __int16 v14; // r9
  unsigned __int16 v15; // cx
  __int64 v16; // r8
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
  v9 = Length >> 1;
  if ( v9 >= 85 )
    _report_rangecheckfailure(v7, v6, v8);
  v10 = g_RegInfo;
  LocaleName[v9] = 0;
  if ( !v10 )
    return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  v11 = v10[3];
  if ( !v11 || !*(_QWORD *)(v11 + 16) || !LocaleName[0] )
    return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  StringIndexInPool = RtlpMuiRegGetStringIndexInPool(v10[4], LocaleName);
  v13 = -1;
  if ( StringIndexInPool >= 0 )
    v13 = StringIndexInPool;
  if ( v13 < 0 )
    return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  v14 = *(_WORD *)(v11 + 6);
  v15 = 0;
  if ( !v14 )
    return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  v16 = *(_QWORD *)(v11 + 16);
  while ( *(_WORD *)(28LL * v15 + v16 + 6) != v13 )
  {
    if ( ++v15 >= v14 )
      return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  }
  result = 1;
  *Lcid = *(unsigned __int16 *)(28LL * v15 + v16 + 4);
  return result;
}
