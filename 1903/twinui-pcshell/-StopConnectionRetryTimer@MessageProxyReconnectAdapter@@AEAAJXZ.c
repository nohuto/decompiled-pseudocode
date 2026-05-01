/*
 * XREFs of ?StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180404A78
 * Callers:
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1804041A0 (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x1804043C8 (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x180404470 (-FailFastWithHR@@YAXJ_K0@Z.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::StopConnectionRetryTimer(MessageProxyReconnectAdapter *this)
{
  __int64 *v1; // rdi
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v4; // eax
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 *)((char *)this + 80);
  v2 = 0;
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 96LL))(v3);
    v2 = v4;
    if ( v4 >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v1);
    }
    else
    {
      if ( v4 == -2147024882 )
        FailFastWithHR(-2147024882, retaddr, 0x159uLL);
      FailFastWithHR(v2, retaddr, 0x159uLL);
    }
  }
  return v2;
}
