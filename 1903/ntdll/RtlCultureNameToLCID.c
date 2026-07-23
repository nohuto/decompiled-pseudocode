/*
 * XREFs of RtlCultureNameToLCID @ 0x1800168B0
 * Callers:
 *     sub_180007C9C @ 0x180007C9C (sub_180007C9C.c)
 *     sub_1800095D4 @ 0x1800095D4 (sub_1800095D4.c)
 *     sub_180013008 @ 0x180013008 (sub_180013008.c)
 *     sub_1800136CC @ 0x1800136CC (sub_1800136CC.c)
 *     sub_180014518 @ 0x180014518 (sub_180014518.c)
 *     sub_18001583C @ 0x18001583C (sub_18001583C.c)
 *     sub_180015FD0 @ 0x180015FD0 (sub_180015FD0.c)
 *     sub_1800162BC @ 0x1800162BC (sub_1800162BC.c)
 *     sub_180016690 @ 0x180016690 (sub_180016690.c)
 *     sub_1800173F0 @ 0x1800173F0 (sub_1800173F0.c)
 *     sub_180018D8C @ 0x180018D8C (sub_180018D8C.c)
 *     LdrResSearchResource @ 0x180056760 (LdrResSearchResource.c)
 *     sub_180058950 @ 0x180058950 (sub_180058950.c)
 *     RtlGetFileMUIPath @ 0x180059D90 (RtlGetFileMUIPath.c)
 *     LdrLoadAlternateResourceModule @ 0x18007C990 (LdrLoadAlternateResourceModule.c)
 *     RtlpGetLCIDFromLangInfoNode @ 0x180082F70 (RtlpGetLCIDFromLangInfoNode.c)
 *     RtlGetUILanguageInfo @ 0x180083E70 (RtlGetUILanguageInfo.c)
 *     sub_18008B794 @ 0x18008B794 (sub_18008B794.c)
 *     LdrResRelease @ 0x18008BB60 (LdrResRelease.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800EC7E0 (RtlpConvertCultureNamesToLCIDs.c)
 *     sub_1800ED05C @ 0x1800ED05C (sub_1800ED05C.c)
 *     RtlpSetInstallLanguage @ 0x1800ED520 (RtlpSetInstallLanguage.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDBE0 (RtlpSetUserPreferredUILanguages.c)
 *     sub_1800FD168 @ 0x1800FD168 (sub_1800FD168.c)
 *     sub_1800FD708 @ 0x1800FD708 (sub_1800FD708.c)
 *     sub_1800FDF7C @ 0x1800FDF7C (sub_1800FDF7C.c)
 *     sub_1800FE558 @ 0x1800FE558 (sub_1800FE558.c)
 *     sub_1800FE790 @ 0x1800FE790 (sub_1800FE790.c)
 *     RtlpRefreshCachedUILanguage @ 0x1800FF3C0 (RtlpRefreshCachedUILanguage.c)
 *     sub_1800FF500 @ 0x1800FF500 (sub_1800FF500.c)
 *     sub_1800FFA38 @ 0x1800FFA38 (sub_1800FFA38.c)
 * Callees:
 *     sub_180016A0C @ 0x180016A0C (sub_180016A0C.c)
 *     RtlLocaleNameToLcid @ 0x180016D90 (RtlLocaleNameToLcid.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18008C950 (__report_rangecheckfailure.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

BOOLEAN __cdecl RtlCultureNameToLCID(PUNICODE_STRING String, PLCID Lcid)
{
  BOOLEAN v2; // di
  PWCH Buffer; // rdx
  size_t Length; // rbx
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rbx
  int v9; // eax
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
  v7 = qword_180166098;
  LocaleName[v6] = 0;
  if ( !v7 )
    return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  v8 = v7[3];
  if ( !v8 || !*(_QWORD *)(v8 + 16) || !LocaleName[0] )
    return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  v9 = sub_180016A0C(v7[4], LocaleName);
  v10 = -1;
  if ( v9 >= 0 )
    v10 = v9;
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
