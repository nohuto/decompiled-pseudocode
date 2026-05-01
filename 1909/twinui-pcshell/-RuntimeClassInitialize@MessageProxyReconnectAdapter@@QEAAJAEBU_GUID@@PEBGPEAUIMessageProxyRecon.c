/*
 * XREFs of ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x180423E28
 * Callers:
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0PP@GPEAVTabTipAdapter@KeyboardHosting@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0PP@G$$QEAPEAVTabTipAdapter@KeyboardHosting@@@Z @ 0x18033B518 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0PP@GPEAVTabTipAdapter@Key.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x180079934 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1804237D0 (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x180423AA0 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180423FBC (-StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MessageProxyReconnectAdapter::RuntimeClassInitialize(
        MessageProxyReconnectAdapter *this,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        struct IMessageProxyReconnectAdapterOwner *a4)
{
  int v6; // ecx
  HRESULT started; // ebx
  ULONG_PTR v8; // r8
  ULONG_PTR v9; // rdi
  __int64 v10; // rbx
  __int64 v12[3]; // [rsp+20h] [rbp-18h] BYREF
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]
  const WCHAR *v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = a3;
  v12[1] = -2LL;
  v12[0] = 0LL;
  if ( !a3 )
  {
    v6 = -2147024809;
    started = -2147024809;
    v8 = 64LL;
LABEL_23:
    FailFastWithHR(v6, retaddr, v8);
    goto LABEL_24;
  }
  if ( !a4 )
  {
    v6 = -2147024809;
    started = -2147024809;
    v8 = 65LL;
    goto LABEL_23;
  }
  *(struct _GUID *)((char *)this + 24) = *a2;
  started = Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>((HSTRING *)this + 11, &v14);
  if ( started < 0 )
  {
    v9 = 68LL;
LABEL_20:
    if ( started == -2147024882 )
      FailFastWithHR(-2147024882, retaddr, v9);
    v8 = v9;
    v6 = started;
    goto LABEL_23;
  }
  *((_QWORD *)this + 6) = a4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
  started = CoreUICreate((char *)this + 72);
  if ( started < 0 )
  {
    v9 = 71LL;
    goto LABEL_20;
  }
  v10 = *((_QWORD *)this + 9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  started = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 40LL))(v10, v12);
  if ( started < 0 )
  {
    v9 = 76LL;
    goto LABEL_20;
  }
  started = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12[0] + 56LL))(v12[0]);
  if ( started < 0 )
  {
    v9 = 77LL;
    goto LABEL_20;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
  started = CoreUIFactoryCreate((char *)this + 56);
  if ( started < 0 )
  {
    v9 = 79LL;
    goto LABEL_20;
  }
  started = MessageProxyReconnectAdapter::AttemptPullProxy(this);
  if ( started < 0 )
  {
    v9 = 81LL;
    goto LABEL_20;
  }
  if ( !*((_QWORD *)this + 8) )
  {
    started = MessageProxyReconnectAdapter::StartConnectionRetryTimer(this);
    if ( started < 0 )
    {
      v9 = 85LL;
      goto LABEL_20;
    }
  }
LABEL_24:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  return (unsigned int)started;
}
