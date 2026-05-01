/*
 * XREFs of ?OnSetForegroundFailed@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801A2700
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?OnDismiss@CQuickConnectExperienceManager@@UEAAJXZ @ 0x1801A2520 (-OnDismiss@CQuickConnectExperienceManager@@UEAAJXZ.c)
 *     ?get@?$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvider@@P6AXXZ@Z @ 0x1801A6190 (-get@-$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvid.c)
 */

__int64 __fastcall CQuickConnectExperienceManager::OnSetForegroundFailed(
        CQuickConnectExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<QuickConnectLoggingProvider>::get(
                                           this,
                                           lambda_f050a8947b8d1270f7eda0e498aa88e8_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v3 > 5u && TlgKeywordOn(v3, 0x200000000000uLL) )
    TlgWrite(v4, &unk_1804C1567, 0LL, 0LL, 2u, &pData);
  v5 = CQuickConnectExperienceManager::OnDismiss((CQuickConnectExperienceManager *)((char *)this - 40));
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x307,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
