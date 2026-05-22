/*
 * XREFs of ?OnPropertyChanged@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@G@Z @ 0x18005A4F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x18005A298 (-FailFastWithHR@@YAXJ_K0@Z.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::OnPropertyChanged(
        MessageProxyReconnectAdapter *this,
        struct IMessageProxy *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, struct IMessageProxy *))(**((_QWORD **)this + 5) + 48LL))(
         *((_QWORD *)this + 5),
         a2);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( v2 == -2147024882 )
      FailFastWithHR(-2147024882, retaddr, 0xA9uLL);
    FailFastWithHR(v3, retaddr, 0xA9uLL);
  }
  return v3;
}
