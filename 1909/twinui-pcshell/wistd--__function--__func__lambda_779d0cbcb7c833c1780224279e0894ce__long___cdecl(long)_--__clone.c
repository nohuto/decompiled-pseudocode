/*
 * XREFs of wistd::__function::__func__lambda_779d0cbcb7c833c1780224279e0894ce__long___cdecl(long)_::__clone @ 0x1802357A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_779d0cbcb7c833c1780224279e0894ce__long___cdecl_long__::__clone(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  *a2 = &off_18044DD50;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  a2[1] = *(_QWORD *)(a1 + 8);
  result = *(_QWORD *)(a1 + 16);
  a2[2] = result;
  return result;
}
