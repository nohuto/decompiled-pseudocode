/*
 * XREFs of ?FailFastWithHR@@YAXJ_K0@Z @ 0x18039EE70
 * Callers:
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x18039EBA0 (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x18039EDC8 (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
 *     ?OnConnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x18039EFB0 (-OnConnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x18039F010 (-OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnPropertyChanged@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@G@Z @ 0x18039F100 (-OnPropertyChanged@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@G@Z.c)
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x18039F1F8 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x18039F38C (-StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x18039F474 (-StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z @ 0x18039F4F0 (-s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z.c)
 *     ?SecurityShim_SharedMessagePortSecurity@@YAJPEAPEAX@Z @ 0x18039F85C (-SecurityShim_SharedMessagePortSecurity@@YAJPEAPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
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
