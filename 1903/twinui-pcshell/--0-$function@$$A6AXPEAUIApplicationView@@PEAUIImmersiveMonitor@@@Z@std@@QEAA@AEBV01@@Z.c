/*
 * XREFs of ??0?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@QEAA@AEBV01@@Z @ 0x1802EC624
 * Callers:
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_f29621112cb61d54fa7d920aa1c0b80f__unsigned_char_Concurrency::task_bool_____lambda_f29621112cb61d54fa7d920aa1c0b80f___ @ 0x1802EBC00 (std--_Global_new_std--_Func_impl_no_alloc__lambda_f29621112cb61d54fa7d920aa1c0b80f__unsigned_cha.c)
 *     ??0?$_ContinuationTaskHandle@_NXV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@U?$integral_constant@_N$00@2@U_TypeSelectorNoAsync@details@Concurrency@@@?$task@_N@Concurrency@@QEAA@AEBV?$shared_ptr@U?$_Task_impl@_N@details@Concurrency@@@std@@AEBV?$shared_ptr@U?$_Task_impl@E@details@Concurrency@@@4@AEBV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@4@AEBVtask_continuation_context@2@W4_TaskInliningMode@details@2@@Z @ 0x1802EC4B8 (--0-$_ContinuationTaskHandle@_NXV-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@U-$integral_co.c)
 *     ?_Continue@?$_ContinuationTaskHandle@_NXV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@U?$integral_constant@_N$00@2@U_TypeSelectorNoAsync@details@Concurrency@@@?$task@_N@Concurrency@@QEBAXU?$integral_constant@_N$00@std@@U_TypeSelectorNoAsync@details@3@@Z @ 0x1802EDF2C (-_Continue@-$_ContinuationTaskHandle@_NXV-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@U-$int.c)
 *     std::_Func_impl_no_alloc__lambda_f29621112cb61d54fa7d920aa1c0b80f__unsigned_char_Concurrency::task_bool___::_Move @ 0x1802EEA40 (std--_Func_impl_no_alloc__lambda_f29621112cb61d54fa7d920aa1c0b80f__unsigned_char_Co_ea_1802EEA40.c)
 *     ?_Perform@?$_Continuation_func_transformer@V?$task@_N@Concurrency@@X@Concurrency@@SA?AV?$function@$$A6AEV?$task@_N@Concurrency@@@Z@std@@V?$function@$$A6AXV?$task@_N@Concurrency@@@Z@4@@Z @ 0x1802EEAA8 (-_Perform@-$_Continuation_func_transformer@V-$task@_N@Concurrency@@X@Concurrency@@SA-AV-$functio.c)
 *     ?HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x18039CFD0 (-HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V-$fun.c)
 *     ?RelayoutAppViews@UwpPrimaryAppProxy@@UEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x18039E120 (-RelayoutAppViews@UwpPrimaryAppProxy@@UEAAXPEAUIImmersiveMonitorManager@@V-$function@$$A6AXPEAUI.c)
 *     ?RemoveView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x18039E400 (-RemoveView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V-$fun.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<void (IApplicationView *,IImmersiveMonitor *)>::function<void (IApplicationView *,IImmersiveMonitor *)>(
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
