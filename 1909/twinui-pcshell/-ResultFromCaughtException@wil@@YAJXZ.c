/*
 * XREFs of ?ResultFromCaughtException@wil@@YAJXZ @ 0x180185708
 * Callers:
 *     _wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab____::_1_::catch$1 @ 0x1800E4F88 (_wil--ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab____--_1_--catch$1.c)
 *     _wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2____::_1_::catch$1 @ 0x1800E4FB1 (_wil--ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2____--_1_--catch$1.c)
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x180183718 (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 *     _wil::details::ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___::operator()_::_1_::catch$0 @ 0x1801F2959 (_wil--details--ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___--operator()_--_1_--c.c)
 *     _ViewEventDispatcher::SwitchAsync_::_1_::catch$5 @ 0x1802901CD (_ViewEventDispatcher--SwitchAsync_--_1_--catch$5.c)
 *     _ViewEventDispatcher::TryShowAsStandaloneAsync_::_1_::catch$8 @ 0x180290667 (_ViewEventDispatcher--TryShowAsStandaloneAsync_--_1_--catch$8.c)
 *     _ViewEventDispatcher::TryShowAsViewModeAsync_::_1_::catch$5 @ 0x180290930 (_ViewEventDispatcher--TryShowAsViewModeAsync_--_1_--catch$5.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::catch$77 @ 0x18029C2E4 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--catch$77.c)
 *     _ViewManagerBridge::InitializeAndRunCoreUiMessageLoop_::_1_::catch$3 @ 0x1802A6971 (_ViewManagerBridge--InitializeAndRunCoreUiMessageLoop_--_1_--catch$3.c)
 *     _ViewManagerBridge::OnConnected_::_1_::catch$7 @ 0x1802A758E (_ViewManagerBridge--OnConnected_--_1_--catch$7.c)
 *     _wil::ResultFromException__lambda_77e671bdbb59ac3c8957d1d382607d03____::_1_::catch$7 @ 0x18032BB81 (_wil--ResultFromException__lambda_77e671bdbb59ac3c8957d1d382607d03____--_1_--catch$7.c)
 *     _wil::ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214____::_1_::catch$1 @ 0x1803B0FA0 (_wil--ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214____--_1_--catch$1.c)
 *     _wil::ResultFromException__lambda_aef78f8519886e93f79e2f19914772e2____::_1_::catch$1 @ 0x1803B3728 (_wil--ResultFromException__lambda_aef78f8519886e93f79e2f19914772e2____--_1_--catch$1.c)
 *     _wil::ResultFromException__lambda_7a5a95f5abfebd946f5aab3bf963af6e____::_1_::catch$1 @ 0x1803BEBB0 (_wil--ResultFromException__lambda_7a5a95f5abfebd946f5aab3bf963af6e____--_1_--catch$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801275FC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::ResultFromCaughtException(wil *this)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( !g_pfnResultFromCaughtExceptionInternal
    || (result = g_pfnResultFromCaughtExceptionInternal(0LL, 0LL, &v3), (int)result >= 0) )
  {
    wil::details::in1diag3::FailFast_Hr(retaddr, 2368LL, (__int64)"wil", (const char *)0x8007023ELL);
    __debugbreak();
  }
  return result;
}
