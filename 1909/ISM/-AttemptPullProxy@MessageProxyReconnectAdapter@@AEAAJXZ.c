/*
 * XREFs of ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180013E0C
 * Callers:
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x180013CA4 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     ?s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z @ 0x180013DE0 (-s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z.c)
 * Callees:
 *     ?CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180013EB0 (-CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1800143A4 (-StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x18005A030 (-FailFastWithHR@@YAXJ_K0@Z.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::AttemptPullProxy(MessageProxyReconnectAdapter *this)
{
  int RemoteProxy; // eax
  int v3; // ebx
  unsigned __int64 v5; // rsi
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
        goto LABEL_7;
      v5 = 251LL;
    }
    else
    {
      if ( *((_DWORD *)this + 10) < MessageProxyReconnectAdapter::ms_uiProxyConnectionAttemptLimit )
        goto LABEL_7;
      if ( !MessageProxyReconnectAdapter::ms_uiProxyConnectionAttemptLimit )
        goto LABEL_7;
      MessageProxyReconnectAdapter::StopConnectionRetryTimer(this);
      if ( v3 >= 0 )
        goto LABEL_7;
      v5 = 242LL;
    }
  }
  else
  {
    v3 = MessageProxyReconnectAdapter::StopConnectionRetryTimer(this);
    if ( v3 >= 0 )
      goto LABEL_7;
    v5 = 225LL;
  }
  if ( v3 == -2147024882 )
    FailFastWithHR(-2147024882, retaddr, v5);
  FailFastWithHR(v3, retaddr, v5);
LABEL_7:
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 16LL))(*((_QWORD *)this + 6));
  return 0LL;
}
