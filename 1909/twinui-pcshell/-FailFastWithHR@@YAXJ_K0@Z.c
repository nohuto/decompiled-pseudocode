/*
 * XREFs of ?FailFastWithHR@@YAXJ_K0@Z @ 0x180423AA0
 * Callers:
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1804237D0 (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x1804239F8 (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
 *     ?OnConnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x180423BE0 (-OnConnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x180423C40 (-OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnPropertyChanged@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@G@Z @ 0x180423D30 (-OnPropertyChanged@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@G@Z.c)
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x180423E28 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180423FBC (-StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1804240A8 (-StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z @ 0x180424120 (-s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z.c)
 *     ?SecurityShim_SharedMessagePortSecurity@@YAJPEAPEAX@Z @ 0x180424488 (-SecurityShim_SharedMessagePortSecurity@@YAJPEAPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 */

void __fastcall FailFastWithHR(int a1, ULONG_PTR a2, ULONG_PTR a3)
{
  ULONG_PTR v4; // rbx
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+0h]

  v4 = a1;
  memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
  pExceptionRecord.ExceptionAddress = retaddr;
  pExceptionRecord.ExceptionCode = 1653;
  pExceptionRecord.ExceptionFlags = 1;
  pExceptionRecord.NumberParameters = 3;
  pExceptionRecord.ExceptionInformation[0] = v4;
  pExceptionRecord.ExceptionInformation[1] = a2;
  pExceptionRecord.ExceptionInformation[2] = a3;
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(&pExceptionRecord, 0LL, 0);
}
