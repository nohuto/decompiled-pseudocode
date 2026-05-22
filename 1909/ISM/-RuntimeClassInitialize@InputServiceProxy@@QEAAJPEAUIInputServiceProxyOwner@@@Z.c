/*
 * XREFs of ?RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z @ 0x180010D74
 * Callers:
 *     ??$MakeAndInitialize@VInputServiceProxy@@UIInputServiceProxy@@AEAPEAUIInputServiceProxyOwner@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputServiceProxy@@AEAPEAUIInputServiceProxyOwner@@@Z @ 0x18001916C (--$MakeAndInitialize@VInputServiceProxy@@UIInputServiceProxy@@AEAPEAUIInputServiceProxyOwner@@@D.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVInputServiceProxy@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0BAE@G$$QEAPEAVInputServiceProxy@@@Z @ 0x180011D54 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVInputServiceProx.c)
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x18002819C (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputServiceProxy::RuntimeClassInitialize(
        InputServiceProxy *this,
        struct IInputServiceProxyOwner *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // r8d
  int v5; // eax
  int v7[4]; // [rsp+20h] [rbp-238h] BYREF
  wchar_t v8[264]; // [rsp+30h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+0h]

  *((_QWORD *)this + 3) = a2;
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  memset_0(v8, 0, 0x208uLL);
  GetDesktopUniqueName(L"System\\RemoteTextInputProcessor", v8, v4);
  *(_QWORD *)v7 = this;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 5);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short (&)[260],InputServiceProxy *>(
         (char *)this + 40,
         &GUID_b30e303e_7340_4446_bd7b_c37fdee42abc,
         v8,
         v7);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x30,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
      (const char *)(unsigned int)v5,
      v7[0]);
    JUMPOUT(0x180041D26LL);
  }
  return 0LL;
}
