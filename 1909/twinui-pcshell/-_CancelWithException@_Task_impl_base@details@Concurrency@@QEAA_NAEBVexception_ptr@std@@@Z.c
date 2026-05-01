/*
 * XREFs of ?_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z @ 0x1801EBB40
 * Callers:
 *     __lambda_713ee8bbd6b08550d59c52695cab5ce3_::operator()_::_1_::catch$18 @ 0x1801E4774 (__lambda_713ee8bbd6b08550d59c52695cab5ce3_--operator()_--_1_--catch$18.c)
 *     _Concurrency::details::_Task_impl_base::_ScheduleTask_::_1_::catch$8 @ 0x1801ECBDE (_Concurrency--details--_Task_impl_base--_ScheduleTask_--_1_--catch$8.c)
 *     _Concurrency::details::_PPLTaskHandle_long_Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync__Concurrency::details::_TaskProcHandle_::invoke_::_1_::catch$16 @ 0x1801ECDB2 (_Concurrency--details--_PPLTaskHandle_long_Concurrency--task_long_--_InitialTaskHan_ea_1801ECDB2.c)
 *     _lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::operator() @ 0x18030C220 (_lambda_9c267cdafd8e064f323ec4e1c7ae30d4_--operator().c)
 *     __lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::operator()_::_1_::catch$24 @ 0x18030C35A (__lambda_9c267cdafd8e064f323ec4e1c7ae30d4_--operator()_--_1_--catch$24.c)
 *     _Concurrency::details::_Task_impl_base::_Wait_::_1_::catch$13 @ 0x18030E698 (_Concurrency--details--_Task_impl_base--_Wait_--_1_--catch$13.c)
 *     _Concurrency::details::_PPLTaskHandle_unsigned_char_Concurrency::task_bool_::_ContinuationTaskHandle_bool_void_std::function_void___cdecl(Concurrency::task_bool_)__std::integral_constant_bool_1__Concurrency::details::_TypeSelectorNoAsync__Concurrency::details::_ContinuationTaskHandleBase_::invoke_::_1_::catch$19 @ 0x18030EC90 (_Concurrency--details--_PPLTaskHandle_unsigned_char_Concurrency--task_bool_--_Conti_ea_18030EC90.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18008A3D8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x1801896A4 (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 *     ??$?0AEBVexception_ptr@std@@V_TaskCreationCallstack@details@Concurrency@@@?$_Ref_count_obj@U_ExceptionHolder@details@Concurrency@@@std@@QEAA@AEBVexception_ptr@1@$$QEAV_TaskCreationCallstack@details@Concurrency@@@Z @ 0x1801E03FC (--$-0AEBVexception_ptr@std@@V_TaskCreationCallstack@details@Concurrency@@@-$_Ref_count_obj@U_Exc.c)
 *     ??0_TaskCreationCallstack@details@Concurrency@@QEAA@AEBV012@@Z @ 0x1801E37B4 (--0_TaskCreationCallstack@details@Concurrency@@QEAA@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall Concurrency::details::_Task_impl_base::_CancelWithException(
        Concurrency::details::_Task_impl_base *this,
        const struct std::exception_ptr *a2)
{
  __int64 (__fastcall *v4)(Concurrency::details::_Task_impl_base *, __int64, __int64, _QWORD, char **); // rdi
  std::_Ref_count_base *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  char v8; // bl
  char *v10; // [rsp+38h] [rbp-40h] BYREF
  std::_Ref_count_base *v11; // [rsp+40h] [rbp-38h]
  _BYTE v12[8]; // [rsp+48h] [rbp-30h] BYREF
  _BYTE v13[32]; // [rsp+50h] [rbp-28h] BYREF
  void *v14; // [rsp+80h] [rbp+8h]

  v4 = *(__int64 (__fastcall **)(Concurrency::details::_Task_impl_base *, __int64, __int64, _QWORD, char **))(*(_QWORD *)this + 8LL);
  Concurrency::details::_TaskCreationCallstack::_TaskCreationCallstack(
    (Concurrency::details::_TaskCreationCallstack *)v12,
    (Concurrency::details::_Task_impl_base *)((char *)this + 320));
  v14 = operator new(0x48uLL);
  v5 = (std::_Ref_count_base *)std::_Ref_count_obj<Concurrency::details::_ExceptionHolder>::_Ref_count_obj<Concurrency::details::_ExceptionHolder>(
                                 (__int64)v14,
                                 a2,
                                 (const struct Concurrency::details::_TaskCreationCallstack *)v12);
  v10 = (char *)v5 + 16;
  v11 = v5;
  LOBYTE(v6) = 1;
  LOBYTE(v7) = 1;
  v8 = v4(this, v7, v6, 0LL, &v10);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  std::vector<void *>::_Tidy((__int64)v13);
  return v8;
}
