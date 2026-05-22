/*
 * XREFs of std::_Func_impl_no_alloc__lambda_bb99315a2e04bb315428571541c06609__void_::_Move @ 0x18000FD50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_bb99315a2e04bb315428571541c06609__void_::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_18017AEA0;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  return result;
}
