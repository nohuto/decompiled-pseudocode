/*
 * XREFs of sub_1800D593C @ 0x1800D593C
 * Callers:
 *     sub_1800D59A8 @ 0x1800D59A8 (sub_1800D59A8.c)
 * Callees:
 *     sub_1800635DC @ 0x1800635DC (sub_1800635DC.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_1800D58D0 @ 0x1800D58D0 (sub_1800D58D0.c)
 *     sub_18010A044 @ 0x18010A044 (sub_18010A044.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_1800D593C(__int64 a1, __int64 a2)
{
  char v4; // bl
  _BYTE v6[8]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  sub_1800635DC(a1);
  sub_1800D58D0(a1, (__int64)v6, a2);
  v4 = 0;
  if ( v6[0] )
  {
    sub_18010A044(*(_QWORD *)(a1 + 16 * (v7 + 4)));
    v4 = 1;
  }
  sub_180063668(a1);
  return v4;
}
