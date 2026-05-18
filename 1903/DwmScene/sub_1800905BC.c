/*
 * XREFs of sub_1800905BC @ 0x1800905BC
 * Callers:
 *     sub_1800904E4 @ 0x1800904E4 (sub_1800904E4.c)
 *     sub_1800905EC @ 0x1800905EC (sub_1800905EC.c)
 *     sub_1800C3634 @ 0x1800C3634 (sub_1800C3634.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800905BC(__int64 a1, _QWORD *a2)
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
