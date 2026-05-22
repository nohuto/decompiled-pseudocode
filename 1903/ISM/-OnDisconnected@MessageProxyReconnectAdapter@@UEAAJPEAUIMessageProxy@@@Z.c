/*
 * XREFs of ?OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x18005A3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180014D68 (-StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIMessageProxy@@@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005A080 (--$As@UIMessageProxy@@@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIMe.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x18005A298 (-FailFastWithHR@@YAXJ_K0@Z.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::OnDisconnected(unsigned __int64 this, struct IMessageProxy *a2)
{
  __int64 *v2; // rdi
  int started; // ebx
  ULONG_PTR v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v2 = (__int64 *)(this + 56);
  started = Microsoft::WRL::ComPtr<IMessageProxy>::As<IMessageProxy>((_QWORD *)(this + 56), &v11);
  if ( started >= 0 )
  {
    started = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 64LL))(
                v11,
                this & ((unsigned __int128)-(__int128)(this - 8) >> 64));
    if ( started >= 0 )
    {
      v7 = *v2;
      if ( *v2 )
      {
        *v2 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      started = MessageProxyReconnectAdapter::StartConnectionRetryTimer((MessageProxyReconnectAdapter *)(this - 8));
      if ( started >= 0 )
      {
        started = (*(__int64 (__fastcall **)(_QWORD, struct IMessageProxy *))(**(_QWORD **)(this + 40) + 40LL))(
                    *(_QWORD *)(this + 40),
                    a2);
        if ( started >= 0 )
          goto LABEL_14;
        v6 = 148LL;
      }
      else
      {
        v6 = 146LL;
      }
    }
    else
    {
      v6 = 143LL;
    }
  }
  else
  {
    v6 = 141LL;
  }
  if ( started == -2147024882 )
    FailFastWithHR(-2147024882, retaddr, v6);
  FailFastWithHR(started, retaddr, v6);
LABEL_14:
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)started;
}
