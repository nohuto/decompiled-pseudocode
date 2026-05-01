/*
 * XREFs of _std::_Callback_once_std::tuple__lambda_9127ed4c7f0b883365da4a18d16712eb__&&_std::exception_ptr_&__std::integer_sequence_unsigned___int64_0__1__::_1_::catch$7 @ 0x1802B3F32
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall std::_Callback_once_std::tuple__lambda_9127ed4c7f0b883365da4a18d16712eb_____std::exception_ptr____std::integer_sequence_unsigned___int64_0__1__::_1_::catch_7(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rbx

  v3 = **(void ***)(a2 + 104);
  __ExceptionPtrCreate((void *)(a2 + 56));
  __ExceptionPtrCurrentException((void *)(a2 + 56));
  __ExceptionPtrAssign(v3, (const void *)(a2 + 56));
  __ExceptionPtrDestroy((void *)(a2 + 56));
  return &loc_1802B3F2A;
}
