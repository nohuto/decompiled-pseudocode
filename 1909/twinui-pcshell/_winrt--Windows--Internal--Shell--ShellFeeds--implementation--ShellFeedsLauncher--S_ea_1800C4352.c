/*
 * XREFs of _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::SetPositioningAnchorRect_::_1_::catch$1 @ 0x1800C4352
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801361BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::SetPositioningAnchorRect_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x62,
                           (unsigned int)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedslauncher.cpp",
                           a4);
  return &loc_1800C4321;
}
