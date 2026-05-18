/*
 * XREFs of sub_1800D55F0 @ 0x1800D55F0
 * Callers:
 *     sub_18009A9F0 @ 0x18009A9F0 (sub_18009A9F0.c)
 *     sub_1800F964C @ 0x1800F964C (sub_1800F964C.c)
 * Callees:
 *     sub_1800D5490 @ 0x1800D5490 (sub_1800D5490.c)
 */

__int64 *__fastcall sub_1800D55F0(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  if ( !*(_BYTE *)(a1 + 184) || *(_BYTE *)(a1 + 185) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_1800D5490(a1, a2, *(_QWORD *)(a1 + 192), a3, a4);
  }
  return a2;
}
