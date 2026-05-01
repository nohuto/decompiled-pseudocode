/*
 * XREFs of ??1_TaskWorkItemRAIILogger@details@Concurrency@@QEAA@XZ @ 0x1801C5058
 * Callers:
 *     _Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync_::_Init_::_1_::dtor$15 @ 0x1801CD366 (_Concurrency--task_long_--_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf5_ea_1801CD366.c)
 *     _Concurrency::task_bool_::_ContinuationTaskHandle_bool_void_std::function_void___cdecl(Concurrency::task_bool_)__std::integral_constant_bool_1__Concurrency::details::_TypeSelectorNoAsync_::_LogWorkItemAndInvokeUserLambda_std::function_unsigned_char___cdecl(Concurrency::task_bool_)__Concurrency::task_bool____::_1_::dtor$0 @ 0x1802EBD2D (_Concurrency--task_bool_--_ContinuationTaskHandle_bool_void_std--function_void___cdecl(Concurren.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::_TaskWorkItemRAIILogger::~_TaskWorkItemRAIILogger(
        Concurrency::details::_TaskEventLogger **this)
{
  Concurrency::details::_TaskEventLogger::_LogWorkItemCompleted(*this);
}
