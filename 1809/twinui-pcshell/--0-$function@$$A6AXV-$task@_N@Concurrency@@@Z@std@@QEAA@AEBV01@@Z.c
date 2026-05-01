/*
 * XREFs of ??0?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@QEAA@AEBV01@@Z @ 0x1802931C0
 * Callers:
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_5a1c437f17fa466aabaf7b0153a0ecc3__unsigned_char_Concurrency::task_bool_____lambda_5a1c437f17fa466aabaf7b0153a0ecc3___ @ 0x180292714 (std--_Global_new_std--_Func_impl_no_alloc__lambda_5a1c437f17fa466aabaf7b0153a0ecc3__unsigned_cha.c)
 *     ??0?$_ContinuationTaskHandle@_NXV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@U?$integral_constant@_N$00@2@U_TypeSelectorNoAsync@details@Concurrency@@@?$task@_N@Concurrency@@QEAA@AEBV?$shared_ptr@U?$_Task_impl@_N@details@Concurrency@@@std@@AEBV?$shared_ptr@U?$_Task_impl@E@details@Concurrency@@@4@AEBV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@4@AEBVtask_continuation_context@2@W4_TaskInliningMode@details@2@@Z @ 0x18029306C (--0-$_ContinuationTaskHandle@_NXV-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@U-$integral_co.c)
 *     ?_Continue@?$_ContinuationTaskHandle@_NXV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@U?$integral_constant@_N$00@2@U_TypeSelectorNoAsync@details@Concurrency@@@?$task@_N@Concurrency@@QEBAXU?$integral_constant@_N$00@std@@U_TypeSelectorNoAsync@details@3@@Z @ 0x1802956AC (-_Continue@-$_ContinuationTaskHandle@_NXV-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@U-$int.c)
 *     std::_Func_impl_no_alloc__lambda_5a1c437f17fa466aabaf7b0153a0ecc3__unsigned_char_Concurrency::task_bool___::_Move @ 0x1802965A0 (std--_Func_impl_no_alloc__lambda_5a1c437f17fa466aabaf7b0153a0ecc3__unsigned_char_Co_ea_1802965A0.c)
 *     ?_Perform@?$_Continuation_func_transformer@V?$task@_N@Concurrency@@X@Concurrency@@SA?AV?$function@$$A6AEV?$task@_N@Concurrency@@@Z@std@@V?$function@$$A6AXV?$task@_N@Concurrency@@@Z@4@@Z @ 0x180296680 (-_Perform@-$_Continuation_func_transformer@V-$task@_N@Concurrency@@X@Concurrency@@SA-AV-$functio.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<void (Concurrency::task<bool>)>::function<void (Concurrency::task<bool>)>(
        __int64 a1,
        __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)(a1 + 56) = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v3 )
    *(_QWORD *)(a1 + 56) = (**v3)(v3, a1);
  return a1;
}
