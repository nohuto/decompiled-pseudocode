/*
 * XREFs of std::_Func_impl_no_alloc__lambda_8ea47011c1bd48b0517e50cdbf413d76__void_InputContext___::_Move @ 0x18000EB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_8ea47011c1bd48b0517e50cdbf413d76__void_InputContext___::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_1801756C8;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  return result;
}
