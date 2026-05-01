/*
 * XREFs of ??$?0AEBVexception_ptr@std@@V_TaskCreationCallstack@details@Concurrency@@@?$_Ref_count_obj@U_ExceptionHolder@details@Concurrency@@@std@@QEAA@AEBVexception_ptr@1@$$QEAV_TaskCreationCallstack@details@Concurrency@@@Z @ 0x1802917F0
 * Callers:
 *     ?_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z @ 0x1802955C0 (-_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z.c)
 * Callees:
 *     ??0_TaskCreationCallstack@details@Concurrency@@QEAA@AEBV012@@Z @ 0x18029344C (--0_TaskCreationCallstack@details@Concurrency@@QEAA@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::_Ref_count_obj<Concurrency::details::_ExceptionHolder>::_Ref_count_obj<Concurrency::details::_ExceptionHolder>(
        __int64 a1,
        const void *a2,
        const struct Concurrency::details::_TaskCreationCallstack *a3)
{
  __int64 v5; // rbx

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<Concurrency::details::_ExceptionHolder>::`vftable';
  v5 = a1 + 16;
  *(_DWORD *)(a1 + 16) = 0;
  __ExceptionPtrCopy((void *)(a1 + 24), a2);
  Concurrency::details::_TaskCreationCallstack::_TaskCreationCallstack(
    (Concurrency::details::_TaskCreationCallstack *)(v5 + 24),
    a3);
  return a1;
}
