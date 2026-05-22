/*
 * XREFs of ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180014CD8
 * Callers:
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x180013CA4 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     ?OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x18005A170 (-OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x18005A030 (-FailFastWithHR@@YAXJ_K0@Z.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::StartConnectionRetryTimer(MessageProxyReconnectAdapter *this)
{
  __int64 v2; // rbx
  int v3; // ebx
  unsigned __int64 v5; // rdi
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_QWORD *)this + 8) )
    FailFastWithHR(-2147467259, retaddr, 0x13BuLL);
  if ( *((_QWORD *)this + 10) )
    FailFastWithHR(-2147467259, retaddr, 0x13CuLL);
  *((_DWORD *)this + 10) = 0;
  v2 = *((_QWORD *)this + 9);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 10);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(MessageProxyReconnectAdapter *), MessageProxyReconnectAdapter *, char *))(*(_QWORD *)v2 + 128LL))(
         v2,
         MessageProxyReconnectAdapter::s_AttemptPullProxy,
         this,
         (char *)this + 80);
  if ( v3 < 0 )
  {
    v5 = 323LL;
  }
  else
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 10) + 80LL))(
           *((_QWORD *)this + 10),
           10000000LL,
           10000000LL);
    if ( v3 >= 0 )
      return (unsigned int)v3;
    v5 = 327LL;
  }
  if ( v3 == -2147024882 )
    FailFastWithHR(-2147024882, retaddr, v5);
  FailFastWithHR(v3, retaddr, v5);
  return (unsigned int)v3;
}
