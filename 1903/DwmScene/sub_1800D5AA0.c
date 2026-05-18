/*
 * XREFs of sub_1800D5AA0 @ 0x1800D5AA0
 * Callers:
 *     sub_1800793E0 @ 0x1800793E0 (sub_1800793E0.c)
 * Callees:
 *     sub_1800D59D0 @ 0x1800D59D0 (sub_1800D59D0.c)
 */

char __fastcall sub_1800D5AA0(__int64 a1, _QWORD *a2)
{
  char v2; // r8

  v2 = 0;
  if ( *(_BYTE *)(a1 + 184) )
    return sub_1800D59D0(a1, *(_QWORD *)(a1 + 192), (__int64)&Buf2, a2);
  return v2;
}
