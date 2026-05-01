/*
 * XREFs of Concurrency::details::_PPLTaskHandle_long_Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync__Concurrency::details::_TaskProcHandle_::__PPLTaskHandle_long_Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync__Concurrency::details::_TaskProcHandle_ @ 0x1801E3B70
 * Callers:
 *     Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync_::__InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync_ @ 0x1801E3B40 (Concurrency--task_long_--_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56_ea_1801E3B40.c)
 *     Concurrency::details::_PPLTaskHandle_long_Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync__Concurrency::details::_TaskProcHandle_::_scalar_deleting_destructor_ @ 0x1801E4CE0 (Concurrency--details--_PPLTaskHandle_long_Concurrency--task_long_--_InitialTaskHand_ea_1801E4CE0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void **__fastcall Concurrency::details::_PPLTaskHandle_long_Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync__Concurrency::details::_TaskProcHandle_::__PPLTaskHandle_long_Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync__Concurrency::details::_TaskProcHandle_(
        _QWORD *a1)
{
  std::_Ref_count_base *v2; // rcx
  void **result; // rax

  *a1 = &off_18044D278;
  Concurrency::details::_TaskEventLogger::_LogTaskCompleted((Concurrency::details::_TaskEventLogger *)(a1[1] + 352LL));
  v2 = (std::_Ref_count_base *)a1[2];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  result = &CCrashDetector::CHandler::`vftable';
  *a1 = &CCrashDetector::CHandler::`vftable';
  return result;
}
