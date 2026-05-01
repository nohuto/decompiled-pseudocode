/*
 * XREFs of wistd::__function::__func__lambda_548464be655e837fe70a6c635a8d08fa__long___cdecl(unsigned_int_unsigned___int64___int64)_::__move @ 0x180181390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_548464be655e837fe70a6c635a8d08fa__long___cdecl_unsigned_int_unsigned___int64___int64__::__move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdx
  __int64 result; // rax

  v2 = a1 + 8;
  *a2 = &off_18042D158;
  v3 = a2 + 1;
  *v3 = 0LL;
  if ( v3 != (_QWORD *)v2 )
  {
    *v3 = *(_QWORD *)v2;
    *(_QWORD *)v2 = 0LL;
  }
  result = *(_QWORD *)(v2 + 8);
  v3[1] = result;
  *((_OWORD *)v3 + 1) = *(_OWORD *)(v2 + 16);
  return result;
}
