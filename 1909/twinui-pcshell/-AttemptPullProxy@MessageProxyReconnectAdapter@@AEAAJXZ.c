/*
 * XREFs of ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1804237D0
 * Callers:
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x180423E28 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     ?s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z @ 0x180424120 (-s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1804238C0 (-CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x180423AA0 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ?StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1804240A8 (-StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::AttemptPullProxy(MessageProxyReconnectAdapter *this)
{
  int RemoteProxy; // eax
  int v3; // ebx
  unsigned __int64 v4; // rsi
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 8) )
    FailFastWithHR(-2147467259, retaddr, 0xC7uLL);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 8LL))(*((_QWORD *)this + 6));
  ++*((_DWORD *)this + 10);
  RemoteProxy = MessageProxyReconnectAdapter::CreateRemoteProxy(this);
  v3 = RemoteProxy;
  if ( RemoteProxy )
  {
    if ( ((RemoteProxy + 2018375675) & 0xFFFFFFFB) != 0 )
    {
      if ( RemoteProxy >= 0 )
        goto LABEL_16;
      v4 = 251LL;
    }
    else
    {
      if ( *((_DWORD *)this + 10) < MessageProxyReconnectAdapter::ms_uiProxyConnectionAttemptLimit )
        goto LABEL_16;
      if ( !MessageProxyReconnectAdapter::ms_uiProxyConnectionAttemptLimit )
        goto LABEL_16;
      MessageProxyReconnectAdapter::StopConnectionRetryTimer(this);
      if ( v3 >= 0 )
        goto LABEL_16;
      v4 = 242LL;
    }
  }
  else
  {
    v3 = MessageProxyReconnectAdapter::StopConnectionRetryTimer(this);
    if ( v3 >= 0 )
      goto LABEL_16;
    v4 = 225LL;
  }
  if ( v3 == -2147024882 )
    FailFastWithHR(-2147024882, retaddr, v4);
  FailFastWithHR(v3, retaddr, v4);
LABEL_16:
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 16LL))(*((_QWORD *)this + 6));
  return 0LL;
}
