/*
 * XREFs of ?RuntimeClassInitialize@EmulatedFullScreenManager@@QEAAJXZ @ 0x180423608
 * Callers:
 *     ??$MakeAndInitialize@VEmulatedFullScreenManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180422ED0 (--$MakeAndInitialize@VEmulatedFullScreenManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1801354D4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 */

__int64 __fastcall EmulatedFullScreenManager::RuntimeClassInitialize(EmulatedFullScreenManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  GUID v4; // [rsp+28h] [rbp-30h] BYREF
  __int64 v5; // [rsp+38h] [rbp-20h]
  __int64 v6; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = GUID_bdd61328_14f8_4dff_8b7b_92be622ae360;
  v5 = 0LL;
  v6 = 0LL;
  v1 = CImmersiveShellComponent::RegisterServiceInformation(
         (EmulatedFullScreenManager *)((char *)this + 40),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)&v4,
         1LL);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D,
    (__int64)"pcshell\\twinui\\emulatedfullscreenmanager\\lib\\emulatedfullscreenmanager.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
