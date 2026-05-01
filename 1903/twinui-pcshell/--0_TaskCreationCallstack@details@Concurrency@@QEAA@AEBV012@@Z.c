/*
 * XREFs of ??0_TaskCreationCallstack@details@Concurrency@@QEAA@AEBV012@@Z @ 0x1801C4794
 * Callers:
 *     ??$?0AEBVexception_ptr@std@@V_TaskCreationCallstack@details@Concurrency@@@?$_Ref_count_obj@U_ExceptionHolder@details@Concurrency@@@std@@QEAA@AEBVexception_ptr@1@$$QEAV_TaskCreationCallstack@details@Concurrency@@@Z @ 0x1801C13DC (--$-0AEBVexception_ptr@std@@V_TaskCreationCallstack@details@Concurrency@@@-$_Ref_count_obj@U_Exc.c)
 *     Concurrency::task_long_::task_long___lambda_921a5a526b2b3e27a0030faf56813293___ @ 0x1801C146C (Concurrency--task_long_--task_long___lambda_921a5a526b2b3e27a0030faf56813293___.c)
 *     ?_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z @ 0x1801CCAC0 (-_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z.c)
 *     ??$?0PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@?$task@_N@Concurrency@@QEAA@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@AEBVtask_options@1@@Z @ 0x1802EAF80 (--$-0PE$AAU-$IAsyncOperation@_N@Foundation@Windows@@@-$task@_N@Concurrency@@QEAA@PE$AAU-$IAsyncO.c)
 *     ?_CreateOptions@_ThenImplOptions@details@Concurrency@@SA?AU123@AEBVtask_options@3@AEBVtask_continuation_context@3@AEBUscheduler_ptr@3@@Z @ 0x1802EE2F8 (-_CreateOptions@_ThenImplOptions@details@Concurrency@@SA-AU123@AEBVtask_options@3@AEBVtask_conti.c)
 * Callees:
 *     ??0?$vector@PEAXV?$allocator@PEAX@std@@@std@@QEAA@AEBV01@@Z @ 0x1801C470C (--0-$vector@PEAXV-$allocator@PEAX@std@@@std@@QEAA@AEBV01@@Z.c)
 */

Concurrency::details::_TaskCreationCallstack *__fastcall Concurrency::details::_TaskCreationCallstack::_TaskCreationCallstack(
        Concurrency::details::_TaskCreationCallstack *this,
        const struct Concurrency::details::_TaskCreationCallstack *a2)
{
  *(_QWORD *)this = *(_QWORD *)a2;
  std::vector<void *>::vector<void *>((__int64)this + 8, (__int64)a2 + 8);
  return this;
}
