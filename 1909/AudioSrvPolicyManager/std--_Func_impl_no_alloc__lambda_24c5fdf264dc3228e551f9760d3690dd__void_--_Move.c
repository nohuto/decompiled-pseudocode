/*
 * XREFs of std::_Func_impl_no_alloc__lambda_24c5fdf264dc3228e551f9760d3690dd__void_::_Move @ 0x180007BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_24c5fdf264dc3228e551f9760d3690dd__void_::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax

  *(_QWORD *)a2 = &off_180039090;
  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a2 + 8) = v2;
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(a1 + 16);
  return a2;
}
