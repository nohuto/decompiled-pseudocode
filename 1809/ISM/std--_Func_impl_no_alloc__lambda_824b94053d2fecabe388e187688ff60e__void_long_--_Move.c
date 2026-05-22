/*
 * XREFs of std::_Func_impl_no_alloc__lambda_824b94053d2fecabe388e187688ff60e__void_long_::_Move @ 0x1800E2090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_824b94053d2fecabe388e187688ff60e__void_long_::_Move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx

  *a2 = off_180141C98;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = (_QWORD *)(a1 + 16);
  a2[1] = v2;
  a2[2] = 0LL;
  if ( a2 + 2 != v3 )
  {
    a2[2] = *v3;
    *v3 = 0LL;
  }
  return a2;
}
