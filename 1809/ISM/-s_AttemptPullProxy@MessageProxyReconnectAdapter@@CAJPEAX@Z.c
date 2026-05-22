/*
 * XREFs of ?s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z @ 0x1800106B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x18000FF3C (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x18001070C (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
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
