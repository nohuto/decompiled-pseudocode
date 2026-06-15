/*
 * XREFs of std::_Func_impl_no_alloc__lambda_8fb95896ce858fa14a6982eb9316d878__void_::_Move @ 0x180007C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_8fb95896ce858fa14a6982eb9316d878__void_::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax

  *(_QWORD *)a2 = &off_1800390C0;
  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a2 + 8) = v2;
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(a1 + 16);
  return a2;
}
