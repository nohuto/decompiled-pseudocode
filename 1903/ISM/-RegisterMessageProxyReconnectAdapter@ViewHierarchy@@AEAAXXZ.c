/*
 * XREFs of ?RegisterMessageProxyReconnectAdapter@ViewHierarchy@@AEAAXXZ @ 0x180010BA8
 * Callers:
 *     ?RegisterMessageProxyReconnectAdapterStatic@ViewHierarchy@@CAJPEAX@Z @ 0x180010B90 (-RegisterMessageProxyReconnectAdapterStatic@ViewHierarchy@@CAJPEAX@Z.c)
 *     ?RuntimeClassInitialize@ViewHierarchy@@UEAAJW4TestMode@1@@Z @ 0x18001F7B0 (-RuntimeClassInitialize@ViewHierarchy@@UEAAJW4TestMode@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0CL@$$CBGPEAVViewHierarchy@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0CL@$$CBG$$QEAPEAVViewHierarchy@@@Z @ 0x180011F60 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0CL@$$CBGPEAVViewHierarchy.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall ViewHierarchy::RegisterMessageProxyReconnectAdapter(ViewHierarchy *this)
{
  char *v1; // rbx
  int v2; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  ViewHierarchy *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)this + 88;
  v5 = this;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 11);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short const (&)[43],ViewHierarchy *>(
         v1,
         &GUID_b2ef2dce_3e3b_4944_9447_e7f2772f3ad3,
         L"System\\NavigationServer_MonitorViewManager",
         &v5);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x64,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v2,
      v3);
    __debugbreak();
  }
}
