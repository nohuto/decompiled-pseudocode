/*
 * XREFs of ?close@?$handle_type@Utimer_traits@resume_after@winrt@@@winrt@@QEAAXXZ @ 0x1800C49E4
 * Callers:
 *     ??1resume_after@winrt@@QEAA@XZ @ 0x1800C0824 (--1resume_after@winrt@@QEAA@XZ.c)
 *     ?await_suspend@resume_after@winrt@@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1800C4964 (-await_suspend@resume_after@winrt@@QEAAXU-$coroutine_handle@X@experimental@std@@@Z.c)
 * Callees:
 *     WINRT_CloseThreadpoolTimer @ 0x18008AB26 (WINRT_CloseThreadpoolTimer.c)
 */

void __fastcall winrt::handle_type<winrt::resume_after::timer_traits>::close(struct _TP_TIMER **a1)
{
  struct _TP_TIMER *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    WINRT_CloseThreadpoolTimer(v2);
    *a1 = 0LL;
  }
}
