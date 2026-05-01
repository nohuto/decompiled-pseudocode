/*
 * XREFs of ?_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z @ 0x1802955C0
 * Callers:
 *     __lambda_713ee8bbd6b08550d59c52695cab5ce3_::operator()_::_1_::catch$22 @ 0x18029403E (__lambda_713ee8bbd6b08550d59c52695cab5ce3_--operator()_--_1_--catch$22.c)
 *     _lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::operator() @ 0x180294194 (_lambda_9c267cdafd8e064f323ec4e1c7ae30d4_--operator().c)
 *     __lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::operator()_::_1_::catch$24 @ 0x1802942CE (__lambda_9c267cdafd8e064f323ec4e1c7ae30d4_--operator()_--_1_--catch$24.c)
 *     _Concurrency::details::_Task_impl_base::_ScheduleTask_::_1_::catch$8 @ 0x180296F92 (_Concurrency--details--_Task_impl_base--_ScheduleTask_--_1_--catch$8.c)
 *     _Concurrency::details::_Task_impl_base::_Wait_::_1_::catch$13 @ 0x180297401 (_Concurrency--details--_Task_impl_base--_Wait_--_1_--catch$13.c)
 *     _Concurrency::details::_PPLTaskHandle_unsigned_char_Concurrency::task_bool_::_ContinuationTaskHandle_bool_void_std::function_void___cdecl(Concurrency::task_bool_)__std::integral_constant_bool_1__Concurrency::details::_TypeSelectorNoAsync__Concurrency::details::_ContinuationTaskHandleBase_::invoke_::_1_::catch$19 @ 0x1802979F0 (_Concurrency--details--_PPLTaskHandle_unsigned_char_Concurrency--task_bool_--_Conti_ea_1802979F0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180084C08 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x18013EDA4 (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 *     ??$?0AEBVexception_ptr@std@@V_TaskCreationCallstack@details@Concurrency@@@?$_Ref_count_obj@U_ExceptionHolder@details@Concurrency@@@std@@QEAA@AEBVexception_ptr@1@$$QEAV_TaskCreationCallstack@details@Concurrency@@@Z @ 0x1802917F0 (--$-0AEBVexception_ptr@std@@V_TaskCreationCallstack@details@Concurrency@@@-$_Ref_count_obj@U_Exc.c)
 *     ??0_TaskCreationCallstack@details@Concurrency@@QEAA@AEBV012@@Z @ 0x18029344C (--0_TaskCreationCallstack@details@Concurrency@@QEAA@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall Concurrency::details::_Task_impl_base::_CancelWithException(
        Concurrency::details::_Task_impl_base *this,
        const struct std::exception_ptr *a2)
{
  std::_Ref_count_base *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  char v7; // bl
  char *v9; // [rsp+38h] [rbp-40h] BYREF
  std::_Ref_count_base *v10; // [rsp+40h] [rbp-38h]
  _BYTE v11[8]; // [rsp+48h] [rbp-30h] BYREF
  _BYTE v12[40]; // [rsp+50h] [rbp-28h] BYREF
  void *v13; // [rsp+80h] [rbp+8h]

  Concurrency::details::_TaskCreationCallstack::_TaskCreationCallstack(
    (Concurrency::details::_TaskCreationCallstack *)v11,
    (Concurrency::details::_Task_impl_base *)((char *)this + 320));
  v13 = operator new(0x48uLL);
  v4 = (std::_Ref_count_base *)std::_Ref_count_obj<Concurrency::details::_ExceptionHolder>::_Ref_count_obj<Concurrency::details::_ExceptionHolder>(
                                 (__int64)v13,
                                 a2,
                                 (const struct Concurrency::details::_TaskCreationCallstack *)v11);
  v9 = (char *)v4 + 16;
  v10 = v4;
  LOBYTE(v5) = 1;
  LOBYTE(v6) = 1;
  v7 = (*(__int64 (__fastcall **)(Concurrency::details::_Task_impl_base *, __int64, __int64, _QWORD, char **))(*(_QWORD *)this + 8LL))(
         this,
         v6,
         v5,
         0LL,
         &v9);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  std::vector<void *>::_Tidy((__int64)v12);
  return v7;
}
