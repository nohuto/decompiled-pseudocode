/*
 * XREFs of wistd::__function::__func__lambda_d300e846e7c8c1760543b5a30f1e2d9d__long___cdecl(unsigned_long)_::__move @ 0x180120320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_d300e846e7c8c1760543b5a30f1e2d9d__long___cdecl_unsigned_long__::__move(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rdx
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 8);
  *a2 = &off_18042CBA8;
  v3 = a2 + 1;
  *v3 = 0LL;
  if ( v3 != v2 )
  {
    *v3 = *v2;
    *v2 = 0LL;
  }
  result = v2[1];
  v3[1] = result;
  return result;
}
