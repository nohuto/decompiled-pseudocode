/*
 * XREFs of ?RuntimeClassInitialize@ViewPresentationMediator@@QEAAJXZ @ 0x1802C9DF0
 * Callers:
 *     ??$MakeAndInitialize@VViewPresentationMediator@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802C8BB0 (--$MakeAndInitialize@VViewPresentationMediator@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800247D0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1801354D4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 */

__int64 __fastcall ViewPresentationMediator::RuntimeClassInitialize(ViewPresentationMediator *this)
{
  int v1; // eax
  __int64 v2; // rcx
  unsigned int v3; // ebx
  int v5[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = 0LL;
  *(GUID *)v5 = GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1;
  v7 = 0LL;
  v1 = CImmersiveShellComponent::RegisterServiceInformation(
         (ViewPresentationMediator *)((char *)this + 40),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v5,
         1LL);
  v3 = v1;
  if ( v1 >= 0 )
  {
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v2, 3u);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62,
      (__int64)"pcshell\\twinui\\viewpresentationmediator\\lib\\viewpresentationmediator.cpp",
      (const char *)(unsigned int)v1);
    return v3;
  }
}
