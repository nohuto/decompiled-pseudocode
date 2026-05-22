/*
 * XREFs of _std::_Callback_once_std::tuple__lambda_c78139b4692b055c43ac45a1104373ed__&&_std::exception_ptr_&__std::integer_sequence_unsigned___int64_0__1__::_1_::catch$7 @ 0x180136BCA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall std::_Callback_once_std::tuple__lambda_c78139b4692b055c43ac45a1104373ed_____std::exception_ptr____std::integer_sequence_unsigned___int64_0__1__::_1_::catch_7(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rbx

  v3 = **(void ***)(a2 + 88);
  __ExceptionPtrCreate((void *)(a2 + 40));
  __ExceptionPtrCurrentException((void *)(a2 + 40));
  __ExceptionPtrAssign(v3, (const void *)(a2 + 40));
  __ExceptionPtrDestroy((void *)(a2 + 40));
  return &loc_180136BC3;
}
