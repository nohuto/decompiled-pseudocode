/*
 * XREFs of ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0CL@$$CBGPEAVViewHierarchy@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0CL@$$CBG$$QEAPEAVViewHierarchy@@@Z @ 0x180011F60
 * Callers:
 *     ?RegisterMessageProxyReconnectAdapter@ViewHierarchy@@AEAAXXZ @ 0x180010BA8 (-RegisterMessageProxyReconnectAdapter@ViewHierarchy@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??0MessageProxyReconnectAdapter@@QEAA@XZ @ 0x180011EB8 (--0MessageProxyReconnectAdapter@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VMessageProxyReconnectAdapter@@@WRL@Microsoft@@QEAAXPEAVMessageProxyReconnectAdapter@@@Z @ 0x180011F30 (-Attach@-$ComPtr@VMessageProxyReconnectAdapter@@@WRL@Microsoft@@QEAAXPEAVMessageProxyReconnectAd.c)
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x180013D34 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C8C8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short const (&)[43],ViewHierarchy *>(
        MessageProxyReconnectAdapter **a1,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        struct IMessageProxyReconnectAdapterOwner **a4)
{
  MessageProxyReconnectAdapter *v8; // rax
  MessageProxyReconnectAdapter *v9; // rax
  struct IMessageProxyReconnectAdapterOwner *v10; // r9
  MessageProxyReconnectAdapter *v11; // rbx
  int v12; // edi
  MessageProxyReconnectAdapter *v14; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (MessageProxyReconnectAdapter *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v9 = MessageProxyReconnectAdapter::MessageProxyReconnectAdapter(v8);
    v14 = 0LL;
    Microsoft::WRL::ComPtr<MessageProxyReconnectAdapter>::Attach((__int64 *)&v14, (__int64)v9);
    v10 = *a4;
    v11 = v14;
    v12 = MessageProxyReconnectAdapter::RuntimeClassInitialize(v14, a2, a3, v10);
    if ( v12 >= 0 )
    {
      if ( v11 )
        (*(void (__fastcall **)(MessageProxyReconnectAdapter *))(*(_QWORD *)v11 + 8LL))(v11);
      *a1 = v11;
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
