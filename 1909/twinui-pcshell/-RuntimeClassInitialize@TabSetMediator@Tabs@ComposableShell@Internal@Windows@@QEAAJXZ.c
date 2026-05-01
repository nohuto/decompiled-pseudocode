/*
 * XREFs of ?RuntimeClassInitialize@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@QEAAJXZ @ 0x1802845DC
 * Callers:
 *     ??$MakeAndInitialize@VTabSetMediator@Tabs@ComposableShell@Internal@Windows@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180281E5C (--$MakeAndInitialize@VTabSetMediator@Tabs@ComposableShell@Internal@Windows@@UIUnknown@@$$V@Detai.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1801354D4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabSetMediator::RuntimeClassInitialize(
        Windows::Internal::ComposableShell::Tabs::TabSetMediator *this)
{
  CImmersiveShellComponent *v1; // rcx
  int v2; // eax
  const char *v3; // r9
  __int64 result; // rax
  __int128 v5; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v1 = (Windows::Internal::ComposableShell::Tabs::TabSetMediator *)((char *)this + 48);
  v5 = xmmword_18051B248;
  v6 = 0LL;
  v7 = 0LL;
  try
  {
    v2 = CImmersiveShellComponent::RegisterServiceInformation(
           v1,
           (const struct CImmersiveShellComponent::ISC_SERVICE *)&v5,
           1LL);
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        30LL,
        (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediator.cpp",
        (const char *)(unsigned int)v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x21,
                           (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediator.cpp",
                           v3);
  }
  return result;
}
