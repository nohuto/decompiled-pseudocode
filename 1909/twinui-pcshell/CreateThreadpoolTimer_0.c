/*
 * XREFs of CreateThreadpoolTimer_0 @ 0x18008AB62
 * Callers:
 *     ?await_suspend@resume_after@winrt@@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1800C4964 (-await_suspend@resume_after@winrt@@QEAAXU-$coroutine_handle@X@experimental@std@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PTP_TIMER __stdcall CreateThreadpoolTimer_0(PTP_TIMER_CALLBACK pfnti, PVOID pv, PTP_CALLBACK_ENVIRON pcbe)
{
  return CreateThreadpoolTimer(pfnti, pv, pcbe);
}
