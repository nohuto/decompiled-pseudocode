/*
 * XREFs of ??0_TaskCreationCallstack@details@Concurrency@@QEAA@AEBV012@@Z @ 0x18029344C
 * Callers:
 *     ??$?0AEBVexception_ptr@std@@V_TaskCreationCallstack@details@Concurrency@@@?$_Ref_count_obj@U_ExceptionHolder@details@Concurrency@@@std@@QEAA@AEBVexception_ptr@1@$$QEAV_TaskCreationCallstack@details@Concurrency@@@Z @ 0x1802917F0 (--$-0AEBVexception_ptr@std@@V_TaskCreationCallstack@details@Concurrency@@@-$_Ref_count_obj@U_Exc.c)
 *     ??$?0PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@?$task@_N@Concurrency@@QEAA@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@AEBVtask_options@1@@Z @ 0x180291880 (--$-0PE$AAU-$IAsyncOperation@_N@Foundation@Windows@@@-$task@_N@Concurrency@@QEAA@PE$AAU-$IAsyncO.c)
 *     ?_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z @ 0x1802955C0 (-_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z.c)
 *     ?_CreateOptions@_ThenImplOptions@details@Concurrency@@SA?AU123@AEBVtask_options@3@AEBVtask_continuation_context@3@AEBUscheduler_ptr@3@@Z @ 0x180295AB4 (-_CreateOptions@_ThenImplOptions@details@Concurrency@@SA-AU123@AEBVtask_options@3@AEBVtask_conti.c)
 * Callees:
 *     ??0?$vector@PEAXV?$allocator@PEAX@std@@@std@@QEAA@AEBV01@@Z @ 0x18029324C (--0-$vector@PEAXV-$allocator@PEAX@std@@@std@@QEAA@AEBV01@@Z.c)
 */

Concurrency::details::_TaskCreationCallstack *__fastcall Concurrency::details::_TaskCreationCallstack::_TaskCreationCallstack(
        Concurrency::details::_TaskCreationCallstack *this,
        const struct Concurrency::details::_TaskCreationCallstack *a2)
{
  *(_QWORD *)this = *(_QWORD *)a2;
  std::vector<void *>::vector<void *>((__int64 *)this + 1, (__int64)a2 + 8);
  return this;
}
