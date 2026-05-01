/*
 * XREFs of _lambda_d6345a2b433034ec221583a2ac3cef15_::operator() @ 0x180138638
 * Callers:
 *     wil::details::functor_wrapper_other__lambda_d6345a2b433034ec221583a2ac3cef15__&___ptr64_int_::Run @ 0x18013B590 (wil--details--functor_wrapper_other__lambda_d6345a2b433034ec221583a2ac3cef15__-___ptr64_int_--Ru.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMDMPolicyLayoutTimestamp@TaskbarLayoutPolicyManager@@AEAAJPEAK@Z @ 0x180139BAC (-GetMDMPolicyLayoutTimestamp@TaskbarLayoutPolicyManager@@AEAAJPEAK@Z.c)
 *     ?GetMDMStartLayoutPolicy@TaskbarLayoutPolicyManager@@AEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x180139C0C (-GetMDMStartLayoutPolicy@TaskbarLayoutPolicyManager@@AEAAJAEAV-$NativeString@V-$CoTaskMemPolicy@.c)
 *     ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x18013C7FC (-wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z.c)
 */

__int64 __fastcall lambda_d6345a2b433034ec221583a2ac3cef15_::operator()(_WNF_STATE_NAME a1)
{
  unsigned int v1; // ebx
  int v2; // eax
  wil *v3; // rcx
  struct wil::WNF_CHANGE_STAMP_STRUCT *v4; // r9
  int v5; // eax
  TaskbarLayoutPolicyManager *v6; // rcx
  int MDMPolicyLayoutTimestamp; // eax
  _QWORD v9[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  _WNF_STATE_NAME v11; // [rsp+50h] [rbp+10h] BYREF
  int v12; // [rsp+58h] [rbp+18h] BYREF
  unsigned int v13; // [rsp+60h] [rbp+20h] BYREF

  v11 = a1;
  v1 = 0;
  memset(v9, 0, 24);
  v2 = ((__int64 (__fastcall *)(_QWORD, _QWORD))TaskbarLayoutPolicyManager::GetMDMStartLayoutPolicy)(a1, v9);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      288LL,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)v2);
  if ( v9[0] && *(_WORD *)v9[0] )
  {
    v12 = 0;
    v5 = wil::wnf_query_nothrow(v3, &v11, (bool *)&v12, v4);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        299LL,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v5);
    MDMPolicyLayoutTimestamp = TaskbarLayoutPolicyManager::GetMDMPolicyLayoutTimestamp(v6, &v13);
    if ( MDMPolicyLayoutTimestamp < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        305LL,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)MDMPolicyLayoutTimestamp);
    LOBYTE(v1) = v13 != v12;
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v9);
  return v1;
}
