/*
 * XREFs of ?s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z @ 0x180424120
 * Callers:
 *     <none>
 * Callees:
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1804237D0 (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x180423AA0 (-FailFastWithHR@@YAXJ_K0@Z.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::s_AttemptPullProxy(MessageProxyReconnectAdapter *a1)
{
  unsigned int v1; // ebx
  ULONG_PTR v2; // r8
  int v3; // eax
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1 )
  {
    v1 = -2147418113;
    v2 = 187LL;
LABEL_7:
    FailFastWithHR(v1, retaddr, v2);
    return v1;
  }
  v3 = MessageProxyReconnectAdapter::AttemptPullProxy(a1);
  v1 = v3;
  if ( v3 < 0 )
  {
    if ( v3 == -2147024882 )
      FailFastWithHR(-2147024882, retaddr, 0xBCuLL);
    v2 = 188LL;
    goto LABEL_7;
  }
  return v1;
}
