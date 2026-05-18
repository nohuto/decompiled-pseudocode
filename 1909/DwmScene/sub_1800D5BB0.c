/*
 * XREFs of sub_1800D5BB0 @ 0x1800D5BB0
 * Callers:
 *     sub_1800794F0 @ 0x1800794F0 (sub_1800794F0.c)
 * Callees:
 *     sub_1800D5AE0 @ 0x1800D5AE0 (sub_1800D5AE0.c)
 */

char __fastcall sub_1800D5BB0(__int64 a1, _QWORD *a2)
{
  char v2; // r8

  v2 = 0;
  if ( *(_BYTE *)(a1 + 184) )
    return sub_1800D5AE0(a1, *(_QWORD *)(a1 + 192), (__int64)&Buf2, a2);
  return v2;
}
