/*
 * XREFs of sub_1800906CC @ 0x1800906CC
 * Callers:
 *     sub_1800905F4 @ 0x1800905F4 (sub_1800905F4.c)
 *     sub_1800906FC @ 0x1800906FC (sub_1800906FC.c)
 *     sub_1800C3744 @ 0x1800C3744 (sub_1800C3744.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800906CC(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 128);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 128);
  }
  *a2 = *(_QWORD *)(a1 + 120);
  result = a2;
  a2[1] = v2;
  return result;
}
