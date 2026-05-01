/*
 * XREFs of ?RuntimeClassInitialize@CPerMonitorDesktopVisibilityService@@QEAAJXZ @ 0x1803AEAF0
 * Callers:
 *     ??$MakeAndInitialize@VCPerMonitorDesktopVisibilityService@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803AE030 (--$MakeAndInitialize@VCPerMonitorDesktopVisibilityService@@UIUnknown@@$$V@Details@WRL@Microsoft@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1801354D4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 */

__int64 __fastcall CPerMonitorDesktopVisibilityService::RuntimeClassInitialize(
        CPerMonitorDesktopVisibilityService *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v4[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+30h] [rbp-28h]
  __int64 v6; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = 0LL;
  *(_OWORD *)v4 = *(_OWORD *)&SID_PerMonitorDesktopVisibilityService.Revision;
  v6 = 0LL;
  v1 = CImmersiveShellComponent::RegisterServiceInformation(
         (CPerMonitorDesktopVisibilityService *)((char *)this + 40),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v4,
         1LL);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (__int64)"pcshell\\twinui\\apppositioner\\lib\\desktopvisibility.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
