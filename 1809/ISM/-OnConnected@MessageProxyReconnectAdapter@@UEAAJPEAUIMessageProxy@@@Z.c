/*
 * XREFs of ?OnConnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x1800104C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x18000FF3C (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::OnConnected(
        MessageProxyReconnectAdapter *this,
        struct IMessageProxy *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, struct IMessageProxy *))(**((_QWORD **)this + 5) + 32LL))(
         *((_QWORD *)this + 5),
         a2);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( v2 == -2147024882 )
      FailFastWithHR(-2147024882, retaddr, 0x7AuLL);
    FailFastWithHR(v3, retaddr, 0x7AuLL);
  }
  return v3;
}
