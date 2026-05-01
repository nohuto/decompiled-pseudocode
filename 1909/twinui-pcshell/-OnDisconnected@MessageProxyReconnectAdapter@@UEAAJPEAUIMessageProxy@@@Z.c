/*
 * XREFs of ?OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x180423C40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIMessageProxy@@@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180423690 (--$As@UIMessageProxy@@@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIMe.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x180423AA0 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180423FBC (-StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::OnDisconnected(unsigned __int64 this, struct IMessageProxy *a2)
{
  int started; // ebx
  ULONG_PTR v5; // rdi
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  started = Microsoft::WRL::ComPtr<IMessageProxy>::As<IMessageProxy>((_QWORD *)(this + 56), &v8);
  if ( started >= 0 )
  {
    started = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 64LL))(
                v8,
                this & ((unsigned __int128)-(__int128)(this - 8) >> 64));
    if ( started >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(this + 56));
      started = MessageProxyReconnectAdapter::StartConnectionRetryTimer((MessageProxyReconnectAdapter *)(this - 8));
      if ( started >= 0 )
      {
        started = (*(__int64 (__fastcall **)(_QWORD, struct IMessageProxy *))(**(_QWORD **)(this + 40) + 40LL))(
                    *(_QWORD *)(this + 40),
                    a2);
        if ( started >= 0 )
          goto LABEL_12;
        v5 = 148LL;
      }
      else
      {
        v5 = 146LL;
      }
    }
    else
    {
      v5 = 143LL;
    }
  }
  else
  {
    v5 = 141LL;
  }
  if ( started == -2147024882 )
    FailFastWithHR(-2147024882, retaddr, v5);
  FailFastWithHR(started, retaddr, v5);
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return (unsigned int)started;
}
