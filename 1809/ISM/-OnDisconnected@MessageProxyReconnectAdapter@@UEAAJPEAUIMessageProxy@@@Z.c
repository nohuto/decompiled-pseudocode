/*
 * XREFs of ?OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x180010520
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x18000FF3C (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x18001093C (-StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::OnDisconnected(unsigned __int64 this, struct IMessageProxy *a2)
{
  int started; // ebx
  ULONG_PTR v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  started = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(this + 56))(
              *(_QWORD *)(this + 56),
              &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08,
              &v10);
  if ( started >= 0 )
  {
    started = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 64LL))(
                v10,
                this & ((unsigned __int128)-(__int128)(this - 8) >> 64));
    if ( started >= 0 )
    {
      v6 = *(_QWORD *)(this + 56);
      if ( v6 )
      {
        *(_QWORD *)(this + 56) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      started = MessageProxyReconnectAdapter::StartConnectionRetryTimer((MessageProxyReconnectAdapter *)(this - 8));
      if ( started >= 0 )
      {
        started = (*(__int64 (__fastcall **)(_QWORD, struct IMessageProxy *))(**(_QWORD **)(this + 40) + 40LL))(
                    *(_QWORD *)(this + 40),
                    a2);
        if ( started >= 0 )
          goto LABEL_14;
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
LABEL_14:
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)started;
}
