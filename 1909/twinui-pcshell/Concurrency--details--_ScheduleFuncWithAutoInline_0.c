/*
 * XREFs of Concurrency::details::_ScheduleFuncWithAutoInline_0 @ 0x18030E21C
 * Callers:
 *     ?_CancelAndRunContinuations@?$_Task_impl@E@details@Concurrency@@UEAA_N_N00AEBV?$shared_ptr@U_ExceptionHolder@details@Concurrency@@@std@@@Z @ 0x18030CFD0 (-_CancelAndRunContinuations@-$_Task_impl@E@details@Concurrency@@UEAA_N_N00AEBV-$shared_ptr@U_Exc.c)
 *     ?_CancelAndRunContinuations@?$_Task_impl@_N@details@Concurrency@@UEAA_N_N00AEBV?$shared_ptr@U_ExceptionHolder@details@Concurrency@@@std@@@Z @ 0x18030D1E0 (-_CancelAndRunContinuations@-$_Task_impl@_N@details@Concurrency@@UEAA_N_N00AEBV-$shared_ptr@U_Ex.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18008A3D8 (--2@YAPEAX_K@Z.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x1801E36A0 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Concurrency::details::_ScheduleFuncWithAutoInline_0(__int64 a1)
{
  void *v2; // rdi
  void **v3; // rcx

  v2 = operator new(0x40uLL);
  std::function<void (void)>::function<void (void)>((__int64)v2, a1);
  Concurrency::details::_TaskCollectionBaseImpl::_RunTask(v3, v2, 16);
}
