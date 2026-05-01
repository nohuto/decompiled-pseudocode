/*
 * XREFs of _std::_Callback_once_std::tuple__lambda_0e64988457575224279dcb6d61e61bdd__&&_std::exception_ptr_&__std::integer_sequence_unsigned___int64_0__1__::_1_::catch$8 @ 0x1801E2DD9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall std::_Callback_once_std::tuple__lambda_0e64988457575224279dcb6d61e61bdd_____std::exception_ptr____std::integer_sequence_unsigned___int64_0__1__::_1_::catch_8(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rbx

  v3 = **(void ***)(a2 + 88);
  __ExceptionPtrCreate((void *)(a2 + 40));
  __ExceptionPtrCurrentException((void *)(a2 + 40));
  __ExceptionPtrAssign(v3, (const void *)(a2 + 40));
  __ExceptionPtrDestroy((void *)(a2 + 40));
  return &loc_1801E2DD2;
}
