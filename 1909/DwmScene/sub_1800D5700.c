/*
 * XREFs of sub_1800D5700 @ 0x1800D5700
 * Callers:
 *     sub_18009AB00 @ 0x18009AB00 (sub_18009AB00.c)
 *     sub_1800F975C @ 0x1800F975C (sub_1800F975C.c)
 * Callees:
 *     sub_1800D55A0 @ 0x1800D55A0 (sub_1800D55A0.c)
 */

__int64 *__fastcall sub_1800D5700(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  if ( !*(_BYTE *)(a1 + 184) || *(_BYTE *)(a1 + 185) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_1800D55A0(a1, a2, *(_QWORD *)(a1 + 192), a3, a4);
  }
  return a2;
}
