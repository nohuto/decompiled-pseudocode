/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1801F30C4
 * Callers:
 *     _wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_______::_2_::CompletionDelegate::Invoke @ 0x1801F2A50 (_wil--details--WaitForCompletion_Windows--Foundation--IAsyncOperation_Windows--Devi_ea_1801F2A50.c)
 *     CAsyncCallbackWithLambda__lambda_70db04ee97ce611edc9e35899f670330___::Invoke @ 0x1801F6860 (CAsyncCallbackWithLambda__lambda_70db04ee97ce611edc9e35899f670330___--Invoke.c)
 *     ?ShutdownServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIProfferService@@@Z @ 0x1801FC240 (-ShutdownServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIProfferService@@@Z.c)
 *     ?Shutdown@WindowGroupManager@@UEAAXXZ @ 0x18027D140 (-Shutdown@WindowGroupManager@@UEAAXXZ.c)
 *     ?UnsubscribeFromServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180290C60 (-UnsubscribeFromServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     _ViewManagerBridge::InitializeAndRunCoreUiMessageLoop_::_1_::catch$3 @ 0x1802A6971 (_ViewManagerBridge--InitializeAndRunCoreUiMessageLoop_--_1_--catch$3.c)
 *     ?OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z @ 0x1802A7180 (-OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     _WindowManagerBridge::RuntimeClassInitialize_::_1_::catch$0 @ 0x1802C0AB8 (_WindowManagerBridge--RuntimeClassInitialize_--_1_--catch$0.c)
 *     ?Uninitialize@WindowManagerBridge@@UEAAXXZ @ 0x1802C1170 (-Uninitialize@WindowManagerBridge@@UEAAXXZ.c)
 *     ?WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ @ 0x1802C18F0 (-WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x18041F4C4 (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 *     ?HandleState@AssistantLightManager@Lighting@TwinUI@@QEAAXW4AssistantState@2Cortana@@@Z @ 0x18041FD04 (-HandleState@AssistantLightManager@Lighting@TwinUI@@QEAAXW4AssistantState@2Cortana@@@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180123B9C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x8E6,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v2);
    __debugbreak();
  }
}
