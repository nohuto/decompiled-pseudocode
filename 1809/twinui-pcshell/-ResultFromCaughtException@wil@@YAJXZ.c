/*
 * XREFs of ?ResultFromCaughtException@wil@@YAJXZ @ 0x18013B500
 * Callers:
 *     _wil::ResultFromException__lambda_0b76205be84400ecfc27954a2135cf03____::_1_::catch$1 @ 0x18009242C (_wil--ResultFromException__lambda_0b76205be84400ecfc27954a2135cf03____--_1_--catch$1.c)
 *     _wil::ResultFromException__lambda_bfc3357b9cce858772fcd000f9055967____::_1_::catch$7 @ 0x1800924ED (_wil--ResultFromException__lambda_bfc3357b9cce858772fcd000f9055967____--_1_--catch$7.c)
 *     _wil::ResultFromException__lambda_8f06f521b4af2551e491113924647167____::_1_::catch$1 @ 0x180095620 (_wil--ResultFromException__lambda_8f06f521b4af2551e491113924647167____--_1_--catch$1.c)
 *     _wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab____::_1_::catch$1 @ 0x1800ACD9E (_wil--ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab____--_1_--catch$1.c)
 *     _wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2____::_1_::catch$1 @ 0x1800ACDC7 (_wil--ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2____--_1_--catch$1.c)
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x1801395B8 (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 *     _wil::details::ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___::operator()_::_1_::catch$0 @ 0x18018C915 (_wil--details--ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___--operator()_--_1_--c.c)
 *     _ViewEventDispatcher::SwitchAsync_::_1_::catch$5 @ 0x18021B1FB (_ViewEventDispatcher--SwitchAsync_--_1_--catch$5.c)
 *     _ViewEventDispatcher::TryShowAsStandaloneAsync_::_1_::catch$8 @ 0x18021B67D (_ViewEventDispatcher--TryShowAsStandaloneAsync_--_1_--catch$8.c)
 *     _ViewEventDispatcher::TryShowAsViewModeAsync_::_1_::catch$5 @ 0x18021B91B (_ViewEventDispatcher--TryShowAsViewModeAsync_--_1_--catch$5.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::catch$73 @ 0x180226DC5 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--catch$73.c)
 *     _ViewManagerBridge::InitializeAndRunCoreUiMessageLoop_::_1_::catch$3 @ 0x180232127 (_ViewManagerBridge--InitializeAndRunCoreUiMessageLoop_--_1_--catch$3.c)
 *     _ViewManagerBridge::OnConnected_::_1_::catch$7 @ 0x180232D1B (_ViewManagerBridge--OnConnected_--_1_--catch$7.c)
 *     _wil::ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214____::_1_::catch$1 @ 0x1803315CC (_wil--ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214____--_1_--catch$1.c)
 *     _wil::ResultFromException__lambda_7a5a95f5abfebd946f5aab3bf963af6e____::_1_::catch$1 @ 0x18033A95C (_wil--ResultFromException__lambda_7a5a95f5abfebd946f5aab3bf963af6e____--_1_--catch$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800E62AC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
    wil::details::in1diag3::FailFast_Hr(retaddr, 2750LL, (__int64)"wil", (const char *)0x8007023ELL);
    __debugbreak();
  }
  return result;
}
