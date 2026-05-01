/*
 * XREFs of _std::_Callback_once_std::tuple__lambda_e13c9660f56a8071ad8948355737f92d__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::catch$7 @ 0x18025BC4A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall std::_Callback_once_std::tuple__lambda_e13c9660f56a8071ad8948355737f92d_______ptr64_std::exception_ptr_____ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::catch_7(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rbx

  v3 = **(void ***)(a2 + 88);
  __ExceptionPtrCreate((void *)(a2 + 40));
  __ExceptionPtrCurrentException((void *)(a2 + 40));
  __ExceptionPtrAssign(v3, (const void *)(a2 + 40));
  __ExceptionPtrDestroy((void *)(a2 + 40));
  return &loc_18025BC43;
}
