/*
 * XREFs of _std::_Callback_once_std::tuple__lambda_2ab80ba63dcc212dafbb4e4695138308__&&_std::exception_ptr_&__std::integer_sequence_unsigned___int64_0__1__::_1_::catch$13 @ 0x18012E94C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall std::_Callback_once_std::tuple__lambda_2ab80ba63dcc212dafbb4e4695138308_____std::exception_ptr____std::integer_sequence_unsigned___int64_0__1__::_1_::catch_13(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rbx

  v3 = **(void ***)(a2 + 56);
  __ExceptionPtrCreate((void *)(a2 + 56));
  __ExceptionPtrCurrentException((void *)(a2 + 56));
  __ExceptionPtrAssign(v3, (const void *)(a2 + 56));
  __ExceptionPtrDestroy((void *)(a2 + 56));
  return &loc_18012E932;
}
