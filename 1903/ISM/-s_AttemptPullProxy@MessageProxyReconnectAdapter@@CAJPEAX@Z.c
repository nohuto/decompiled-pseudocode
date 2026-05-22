/*
 * XREFs of ?s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z @ 0x180013E70
 * Callers:
 *     <none>
 * Callees:
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180013E9C (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x18005A298 (-FailFastWithHR@@YAXJ_K0@Z.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::s_AttemptPullProxy(MessageProxyReconnectAdapter *a1)
{
  int v1; // ebx
  unsigned __int64 v3; // r8
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1 )
  {
    v1 = -2147418113;
    v3 = 187LL;
LABEL_8:
    FailFastWithHR(v1, retaddr, v3);
    return (unsigned int)v1;
  }
  v1 = MessageProxyReconnectAdapter::AttemptPullProxy(a1);
  if ( v1 < 0 )
  {
    if ( v1 == -2147024882 )
      FailFastWithHR(-2147024882, retaddr, 0xBCuLL);
    v3 = 188LL;
    goto LABEL_8;
  }
  return (unsigned int)v1;
}
