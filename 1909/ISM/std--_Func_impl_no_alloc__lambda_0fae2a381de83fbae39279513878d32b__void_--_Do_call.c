/*
 * XREFs of std::_Func_impl_no_alloc__lambda_0fae2a381de83fbae39279513878d32b__void_::_Do_call @ 0x180160720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Func_impl_no_alloc__lambda_0fae2a381de83fbae39279513878d32b__void_::_Do_call(__int64 a1)
{
  _BYTE *v1; // rdx

  v1 = *(_BYTE **)(a1 + 8);
  *v1 = 1;
  wil::details::SetEvent(*(wil::details **)(*(_QWORD *)(a1 + 16) + 128LL), v1);
}
