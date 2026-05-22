/*
 * XREFs of _std::_Callback_once_std::tuple__lambda_f8d27b8d936a7adc219ade59e2fa9c02__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::catch$12 @ 0x1801354F7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall std::_Callback_once_std::tuple__lambda_f8d27b8d936a7adc219ade59e2fa9c02_______ptr64_std::exception_ptr_____ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::catch_12(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rbx

  v3 = **(void ***)(a2 + 88);
  __ExceptionPtrCreate((void *)(a2 + 48));
  __ExceptionPtrCurrentException((void *)(a2 + 48));
  __ExceptionPtrAssign(v3, (const void *)(a2 + 48));
  __ExceptionPtrDestroy((void *)(a2 + 48));
  return &loc_1800FF1C5;
}
