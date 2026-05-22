/*
 * XREFs of ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x180013CA4
 * Callers:
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVInputServiceProxy@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0BAE@G$$QEAPEAVInputServiceProxy@@@Z @ 0x180011D54 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVInputServiceProx.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0CL@$$CBGPEAVViewHierarchy@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0CL@$$CBG$$QEAPEAVViewHierarchy@@@Z @ 0x180011ED0 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0CL@$$CBGPEAVViewHierarchy.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEBQEBGPEAVHotKeyProcessor@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEBQEBG$$QEAPEAVHotKeyProcessor@@@Z @ 0x18010DEC0 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEBQEBGPEAVHotKeyProcessor@@@D.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVTextInputStateAdapter@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0BAE@G$$QEAPEAVTextInputStateAdapter@@@Z @ 0x180147C74 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVTextInputStateAd.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180013E0C (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x1800143F0 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180014CD8 (-StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x18005A030 (-FailFastWithHR@@YAXJ_K0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MessageProxyReconnectAdapter::RuntimeClassInitialize(
        MessageProxyReconnectAdapter *this,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        struct IMessageProxyReconnectAdapterOwner *a4)
{
  int started; // ebx
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v10; // ecx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdi
  __int64 v13[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  v13[1] = -2LL;
  v13[0] = 0LL;
  if ( !a3 )
  {
    v10 = -2147024809;
    started = -2147024809;
    v11 = 64LL;
LABEL_26:
    FailFastWithHR(v10, retaddr, v11);
    goto LABEL_13;
  }
  if ( !a4 )
  {
    v10 = -2147024809;
    started = -2147024809;
    v11 = 65LL;
    goto LABEL_26;
  }
  *(struct _GUID *)((char *)this + 24) = *a2;
  started = Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>((HSTRING *)this + 11);
  if ( started < 0 )
  {
    v12 = 68LL;
LABEL_23:
    if ( started == -2147024882 )
      FailFastWithHR(-2147024882, retaddr, v12);
    v11 = v12;
    v10 = started;
    goto LABEL_26;
  }
  *((_QWORD *)this + 6) = a4;
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((char *)this + 72);
  started = CoreUICreate((char *)this + 72);
  if ( started < 0 )
  {
    v12 = 71LL;
    goto LABEL_23;
  }
  v7 = *((_QWORD *)this + 9);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v13);
  started = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 40LL))(v7, v13);
  if ( started < 0 )
  {
    v12 = 76LL;
    goto LABEL_23;
  }
  started = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13[0] + 56LL))(v13[0]);
  if ( started < 0 )
  {
    v12 = 77LL;
    goto LABEL_23;
  }
  v8 = *((_QWORD *)this + 7);
  if ( v8 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  started = CoreUIFactoryCreate((char *)this + 56);
  if ( started < 0 )
  {
    v12 = 79LL;
    goto LABEL_23;
  }
  started = MessageProxyReconnectAdapter::AttemptPullProxy(this);
  if ( started < 0 )
  {
    v12 = 81LL;
    goto LABEL_23;
  }
  if ( !*((_QWORD *)this + 8) )
  {
    started = MessageProxyReconnectAdapter::StartConnectionRetryTimer(this);
    if ( started < 0 )
    {
      v12 = 85LL;
      goto LABEL_23;
    }
  }
LABEL_13:
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v13);
  return (unsigned int)started;
}
