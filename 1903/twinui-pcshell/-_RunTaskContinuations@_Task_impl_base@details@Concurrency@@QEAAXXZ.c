/*
 * XREFs of ?_RunTaskContinuations@_Task_impl_base@details@Concurrency@@QEAAXXZ @ 0x1801CD8F0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_bb3ea35c7a129712676a4a6472ecdc6a__void_::_Do_call @ 0x1801CD020 (std--_Func_impl_no_alloc__lambda_bb3ea35c7a129712676a4a6472ecdc6a__void_--_Do_call.c)
 *     ?_FinalizeAndRunContinuations@?$_Task_impl@J@details@Concurrency@@QEAAXJ@Z @ 0x1801CD0E0 (-_FinalizeAndRunContinuations@-$_Task_impl@J@details@Concurrency@@QEAAXJ@Z.c)
 *     ?_FinalizeAndRunContinuations@?$_Task_impl@E@details@Concurrency@@QEAAXE@Z @ 0x1802EE8E0 (-_FinalizeAndRunContinuations@-$_Task_impl@E@details@Concurrency@@QEAAXE@Z.c)
 * Callees:
 *     ?_RunContinuation@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase@23@@Z @ 0x1801CD6E4 (-_RunContinuation@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase@23@@.c)
 */

void __fastcall Concurrency::details::_Task_impl_base::_RunTaskContinuations(
        Concurrency::details::_Task_impl_base *this)
{
  struct Concurrency::details::_ContinuationTaskHandleBase *v1; // rdx
  struct Concurrency::details::_ContinuationTaskHandleBase *v3; // rbx

  v1 = (struct Concurrency::details::_ContinuationTaskHandleBase *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v1 )
  {
    do
    {
      v3 = (struct Concurrency::details::_ContinuationTaskHandleBase *)*((_QWORD *)v1 + 1);
      Concurrency::details::_Task_impl_base::_RunContinuation(this, v1);
      v1 = v3;
    }
    while ( v3 );
  }
}
