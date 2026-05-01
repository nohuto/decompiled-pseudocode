/*
 * XREFs of _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_ResumeCoro$2_::_1_::dtor$0 @ 0x1800C41E4
 * Callers:
 *     <none>
 * Callees:
 *     ??1resume_after@winrt@@QEAA@XZ @ 0x1800C0824 (--1resume_after@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks__ResumeCoro_2_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 712) = *(_QWORD *)(a2 + 736) + 16LL;
  winrt::resume_after::~resume_after(*(winrt::resume_after **)(a2 + 712));
}
