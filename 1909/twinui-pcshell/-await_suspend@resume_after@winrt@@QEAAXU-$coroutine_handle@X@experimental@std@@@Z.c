/*
 * XREFs of ?await_suspend@resume_after@winrt@@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1800C4964
 * Callers:
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_ResumeCoro$2 @ 0x1800C2100 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_1800C2100.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_ResumeCoro$2 @ 0x1800C3740 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_1800C3740.c)
 * Callees:
 *     WINRT_SetThreadpoolTimer @ 0x18008AB4A (WINRT_SetThreadpoolTimer.c)
 *     CreateThreadpoolTimer_0 @ 0x18008AB62 (CreateThreadpoolTimer_0.c)
 *     ?close@?$handle_type@Utimer_traits@resume_after@winrt@@@winrt@@QEAAXXZ @ 0x1800C49E4 (-close@-$handle_type@Utimer_traits@resume_after@winrt@@@winrt@@QEAAXXZ.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1800C5130 (-throw_last_error@winrt@@YAXXZ.c)
 */

void __fastcall winrt::resume_after::await_suspend(struct _TP_TIMER **a1, void *a2)
{
  winrt *v3; // rcx
  struct _TP_TIMER *ThreadpoolTimer_0; // rdi
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  ThreadpoolTimer_0 = CreateThreadpoolTimer_0(winrt::resume_after::callback, a2, 0LL);
  if ( !ThreadpoolTimer_0 )
    winrt::throw_last_error(v3);
  winrt::handle_type<winrt::resume_after::timer_traits>::close((winrt::resume_after *)a1);
  *a1 = ThreadpoolTimer_0;
  pftDueTime = (struct _FILETIME)-(__int64)a1[1];
  WINRT_SetThreadpoolTimer(ThreadpoolTimer_0, &pftDueTime, 0, 0);
}
