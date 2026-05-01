/*
 * XREFs of _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_ResumeCoro$2_::_1_::dtor$0 @ 0x1800C34A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1resume_after@winrt@@QEAA@XZ @ 0x1800C0824 (--1resume_after@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks__ResumeCoro_2_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 1304) = *(_QWORD *)(a2 + 1344) + 16LL;
  winrt::resume_after::~resume_after(*(winrt::resume_after **)(a2 + 1304));
}
