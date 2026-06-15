/*
 * XREFs of std::_Func_impl_no_alloc__lambda_c4f40eb4128b796d78dc595c2797cc70__void_::_Move @ 0x18004A3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_c4f40eb4128b796d78dc595c2797cc70__void_::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_18015D370;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  return result;
}
