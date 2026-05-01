/*
 * XREFs of std::_Func_impl_no_alloc__lambda_f167818d7963a6aecc3c3c61dfbcf93a__void_::_Move @ 0x180273B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_f167818d7963a6aecc3c3c61dfbcf93a__void_::_Move(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)(a1 + 8);
  *a2 = off_18044DF98;
  a2[1] = 0LL;
  if ( a2 + 1 != v2 )
  {
    a2[1] = *v2;
    *v2 = 0LL;
  }
  a2[2] = v2[1];
  a2[3] = v2[2];
  return a2;
}
