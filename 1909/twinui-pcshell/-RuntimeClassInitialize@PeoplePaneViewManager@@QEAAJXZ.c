/*
 * XREFs of ?RuntimeClassInitialize@PeoplePaneViewManager@@QEAAJXZ @ 0x1802424B0
 * Callers:
 *     ??$MakeAndInitialize@VPeoplePaneViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18023D640 (--$MakeAndInitialize@VPeoplePaneViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1801354D4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::RuntimeClassInitialize(PeoplePaneViewManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *((_DWORD *)this + 129) = SHTaskPoolGetUniqueContext(this);
  v6 = 0LL;
  *(GUID *)v5 = GUID_b424c6f2_89a8_4bf1_8946_41454468d78c;
  v7 = 0LL;
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (PeoplePaneViewManager *)((char *)this + 24),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v5,
         1LL);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
