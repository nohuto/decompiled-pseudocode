/*
 * XREFs of ?OnConnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x18002AD80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x18005A298 (-FailFastWithHR@@YAXJ_K0@Z.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::OnConnected(
        MessageProxyReconnectAdapter *this,
        struct IMessageProxy *a2)
{
  int v2; // ebx
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, struct IMessageProxy *))(**((_QWORD **)this + 5) + 32LL))(
         *((_QWORD *)this + 5),
         a2);
  if ( v2 < 0 )
  {
    if ( v2 == -2147024882 )
      FailFastWithHR(-2147024882, retaddr, 0x7AuLL);
    FailFastWithHR(v2, retaddr, 0x7AuLL);
  }
  return (unsigned int)v2;
}
