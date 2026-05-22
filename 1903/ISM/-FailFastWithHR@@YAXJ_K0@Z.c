/*
 * XREFs of ?FailFastWithHR@@YAXJ_K0@Z @ 0x18005A298
 * Callers:
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x180013D34 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     ?s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z @ 0x180013E70 (-s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z.c)
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180013E9C (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180014434 (-StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180014D68 (-StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?OnConnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x18002AD80 (-OnConnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x18005A1D4 (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
 *     ?OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x18005A3D0 (-OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnPropertyChanged@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@G@Z @ 0x18005A4F0 (-OnPropertyChanged@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@G@Z.c)
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KAEA_N@Z @ 0x180145CDC (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KAEA_N@Z.c)
 *     ?FindEnabledHotKey@HotKeyProcessor@@AEAAJIIPEAV?$shared_ptr@UHOTKEY@@@std@@@Z @ 0x18014662C (-FindEnabledHotKey@HotKeyProcessor@@AEAAJIIPEAV-$shared_ptr@UHOTKEY@@@std@@@Z.c)
 *     ?OnProxyCreated@HotKeyProcessor@@UEAAJPEAUIMessageProxy@@@Z @ 0x180146AB0 (-OnProxyCreated@HotKeyProcessor@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJIII_N@Z @ 0x180146BC0 (-RegisterHotKey@HotKeyProcessor@@UEAAJIII_N@Z.c)
 *     ?RuntimeClassInitialize@HotKeyProcessor@@QEAAJPEAUIHotkeyProcessorOwner@@@Z @ 0x180146F00 (-RuntimeClassInitialize@HotKeyProcessor@@QEAAJPEAUIHotkeyProcessorOwner@@@Z.c)
 *     ?OnProxyCreated@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801487A0 (-OnProxyCreated@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?RuntimeClassInitialize@TextInputStateAdapter@@QEAAJPEAUITextInputStateAdapterOwner@@@Z @ 0x1801495CC (-RuntimeClassInitialize@TextInputStateAdapter@@QEAAJPEAUITextInputStateAdapterOwner@@@Z.c)
 *     ?SecurityShim_SharedMessagePortSecurity@@YAJPEAPEAX@Z @ 0x180169B4C (-SecurityShim_SharedMessagePortSecurity@@YAJPEAPEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
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
