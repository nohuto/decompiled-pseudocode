/*
 * XREFs of _wil::details::CallAndHandleErrorsWithReturnType_void_wistd::function_void___cdecl(long_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64)__long_&___ptr64_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_0__::_1_::catch$0 @ 0x1801F4A78
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007E604 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall wil::details::CallAndHandleErrorsWithReturnType_void_wistd::function_void___cdecl_long_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64___long_____ptr64_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_0__::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x4F7,
                           (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
                           a4);
  return &loc_1801F4A6F;
}
