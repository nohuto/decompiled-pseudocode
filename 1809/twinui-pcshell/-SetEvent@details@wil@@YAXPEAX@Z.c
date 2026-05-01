/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18018D074
 * Callers:
 *     _wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_____ptr64______ptr64__::_2_::CompletionDelegate::Invoke @ 0x18018C9F0 (_wil--details--WaitForCompletion_Windows--Foundation--IAsyncOperation_Windows--Devices--Lights--.c)
 *     CAsyncCallbackWithLambda__lambda_70db04ee97ce611edc9e35899f670330___::Invoke @ 0x180190990 (CAsyncCallbackWithLambda__lambda_70db04ee97ce611edc9e35899f670330___--Invoke.c)
 *     ?ShutdownServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIProfferService@@@Z @ 0x1801961E0 (-ShutdownServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIProfferService@@@Z.c)
 *     ?Shutdown@WindowGroupManager@@UEAAXXZ @ 0x180205470 (-Shutdown@WindowGroupManager@@UEAAXXZ.c)
 *     ?UnsubscribeFromServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18021BD00 (-UnsubscribeFromServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     _ViewManagerBridge::InitializeAndRunCoreUiMessageLoop_::_1_::catch$3 @ 0x180232127 (_ViewManagerBridge--InitializeAndRunCoreUiMessageLoop_--_1_--catch$3.c)
 *     ?OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z @ 0x180232920 (-OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     _WindowManagerBridge::RuntimeClassInitialize_::_1_::catch$0 @ 0x18024AF96 (_WindowManagerBridge--RuntimeClassInitialize_--_1_--catch$0.c)
 *     ?Uninitialize@WindowManagerBridge@@UEAAXXZ @ 0x18024B5F0 (-Uninitialize@WindowManagerBridge@@UEAAXXZ.c)
 *     ?WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ @ 0x18024BD9C (-WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x18039A5F4 (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 *     ?HandleState@AssistantLightManager@Lighting@TwinUI@@QEAAXW4AssistantState@2Cortana@@@Z @ 0x18039AD1C (-HandleState@AssistantLightManager@Lighting@TwinUI@@QEAAXW4AssistantState@2Cortana@@@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E24D8 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x904,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v2);
    __debugbreak();
  }
}
