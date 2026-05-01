/*
 * XREFs of ?_NoCallOnDefaultTask_ErrorImpl@_DefaultTaskHelper@details@Concurrency@@SAXXZ @ 0x180296650
 * Callers:
 *     Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___ @ 0x180292C94 (Concurrency--task_bool_--then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___.c)
 *     _lambda_d6a11cf3d104b1bd776ba795ae5a1087_::operator() @ 0x180294330 (_lambda_d6a11cf3d104b1bd776ba795ae5a1087_--operator().c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1800850F0 (_CxxThrowException_0.c)
 *     ??0invalid_operation@Concurrency@@QEAA@PEBD@Z @ 0x1802935E0 (--0invalid_operation@Concurrency@@QEAA@PEBD@Z.c)
 */

void __noreturn Concurrency::details::_DefaultTaskHelper::_NoCallOnDefaultTask_ErrorImpl(void)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  Concurrency::invalid_operation::invalid_operation(
    (Concurrency::invalid_operation *)pExceptionObject,
    "This function cannot be called on a default constructed task");
  throw (Concurrency::invalid_operation *)pExceptionObject;
}
