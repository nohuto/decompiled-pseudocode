/*
 * XREFs of sub_1800A8EF0 @ 0x1800A8EF0
 * Callers:
 *     sub_18009020C @ 0x18009020C (sub_18009020C.c)
 *     sub_1800906F4 @ 0x1800906F4 (sub_1800906F4.c)
 *     sub_180098790 @ 0x180098790 (sub_180098790.c)
 *     sub_18009A6B0 @ 0x18009A6B0 (sub_18009A6B0.c)
 *     sub_18009A9F0 @ 0x18009A9F0 (sub_18009A9F0.c)
 *     sub_1800AF450 @ 0x1800AF450 (sub_1800AF450.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800A8EF0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 464);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 464);
  }
  *a2 = *(_QWORD *)(a1 + 456);
  result = a2;
  a2[1] = v2;
  return result;
}
