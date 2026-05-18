/*
 * XREFs of sub_1800E136C @ 0x1800E136C
 * Callers:
 *     sub_1801095E0 @ 0x1801095E0 (sub_1801095E0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800E136C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 168);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 168);
  }
  *a2 = *(_QWORD *)(a1 + 160);
  result = a2;
  a2[1] = v2;
  return result;
}
