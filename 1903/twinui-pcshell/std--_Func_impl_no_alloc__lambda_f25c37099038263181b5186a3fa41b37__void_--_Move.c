/*
 * XREFs of std::_Func_impl_no_alloc__lambda_f25c37099038263181b5186a3fa41b37__void_::_Move @ 0x1801CD480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_f25c37099038263181b5186a3fa41b37__void_::_Move(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *result; // rax

  *a2 = off_18042DBF8;
  a2[1] = a1[1];
  a2[2] = 0LL;
  a2[3] = 0LL;
  a2[2] = a1[2];
  a2[3] = a1[3];
  result = a2;
  a1[2] = 0LL;
  a1[3] = 0LL;
  return result;
}
