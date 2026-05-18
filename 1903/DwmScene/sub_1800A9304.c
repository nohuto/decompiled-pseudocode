/*
 * XREFs of sub_1800A9304 @ 0x1800A9304
 * Callers:
 *     sub_180090A04 @ 0x180090A04 (sub_180090A04.c)
 *     sub_180090B78 @ 0x180090B78 (sub_180090B78.c)
 *     sub_1800A88B0 @ 0x1800A88B0 (sub_1800A88B0.c)
 *     sub_1800A8E14 @ 0x1800A8E14 (sub_1800A8E14.c)
 *     sub_1800F74A8 @ 0x1800F74A8 (sub_1800F74A8.c)
 *     sub_1800F8380 @ 0x1800F8380 (sub_1800F8380.c)
 *     sub_1800F8BC4 @ 0x1800F8BC4 (sub_1800F8BC4.c)
 *     sub_180112680 @ 0x180112680 (sub_180112680.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800A9304(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 448);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 448);
  }
  *a2 = *(_QWORD *)(a1 + 440);
  result = a2;
  a2[1] = v2;
  return result;
}
