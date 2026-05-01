/*
 * XREFs of ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x18039F38C
 * Callers:
 *     ?OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x18039F010 (-OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x18039F1F8 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x18039EE70 (-FailFastWithHR@@YAXJ_K0@Z.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::StartConnectionRetryTimer(MessageProxyReconnectAdapter *this)
{
  __int64 v2; // rbx
  int v3; // ebx
  ULONG_PTR v4; // rdi
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_QWORD *)this + 8) )
    FailFastWithHR(-2147467259, retaddr, 0x13BuLL);
  if ( *((_QWORD *)this + 10) )
    FailFastWithHR(-2147467259, retaddr, 0x13CuLL);
  *((_DWORD *)this + 10) = 0;
  v2 = *((_QWORD *)this + 9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), MessageProxyReconnectAdapter *, char *))(*(_QWORD *)v2 + 120LL))(
         v2,
         MessageProxyReconnectAdapter::s_AttemptPullProxy,
         this,
         (char *)this + 80);
  if ( v3 >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 10) + 80LL))(
           *((_QWORD *)this + 10),
           10000000LL,
           10000000LL);
    if ( v3 >= 0 )
      return (unsigned int)v3;
    v4 = 327LL;
  }
  else
  {
    v4 = 323LL;
  }
  if ( v3 == -2147024882 )
    FailFastWithHR(-2147024882, retaddr, v4);
  FailFastWithHR(v3, retaddr, v4);
  return (unsigned int)v3;
}
