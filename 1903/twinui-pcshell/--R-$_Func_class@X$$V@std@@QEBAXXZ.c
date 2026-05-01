/*
 * XREFs of ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1801C5BAC
 * Callers:
 *     ?_Bridge@_TaskProcThunk@details@Concurrency@@SAXPEAX@Z @ 0x1801CC740 (-_Bridge@_TaskProcThunk@details@Concurrency@@SAXPEAX@Z.c)
 *     ?_CancelAndRunContinuations@?$_Task_impl@J@details@Concurrency@@UEAA_N_N00AEBV?$shared_ptr@U_ExceptionHolder@details@Concurrency@@@std@@@Z @ 0x1801CC8B0 (-_CancelAndRunContinuations@-$_Task_impl@J@details@Concurrency@@UEAA_N_N00AEBV-$shared_ptr@U_Exc.c)
 *     _lambda_5685b7785c3a9eb18aecd9c477002c42_::_lambda_invoker_cdecl_ @ 0x18024E020 (_lambda_5685b7785c3a9eb18aecd9c477002c42_--_lambda_invoker_cdecl_.c)
 *     ?_CancelAndRunContinuations@?$_Task_impl@E@details@Concurrency@@UEAA_N_N00AEBV?$shared_ptr@U_ExceptionHolder@details@Concurrency@@@std@@@Z @ 0x1802EDB10 (-_CancelAndRunContinuations@-$_Task_impl@E@details@Concurrency@@UEAA_N_N00AEBV-$shared_ptr@U_Exc.c)
 *     ?_CancelAndRunContinuations@?$_Task_impl@_N@details@Concurrency@@UEAA_N_N00AEBV?$shared_ptr@U_ExceptionHolder@details@Concurrency@@@std@@@Z @ 0x1802EDD20 (-_CancelAndRunContinuations@-$_Task_impl@_N@details@Concurrency@@UEAA_N_N00AEBV-$shared_ptr@U_Ex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_class<void,>::operator()(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  if ( !v1 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
