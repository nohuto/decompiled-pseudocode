/*
 * XREFs of std::_Func_impl_no_alloc__lambda_823ab1d729c06df67326f685fa511bbd__void_::_Move @ 0x1800B8050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_823ab1d729c06df67326f685fa511bbd__void_::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_18013E5F8;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  return result;
}
