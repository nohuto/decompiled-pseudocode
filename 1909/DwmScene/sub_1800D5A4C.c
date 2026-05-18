/*
 * XREFs of sub_1800D5A4C @ 0x1800D5A4C
 * Callers:
 *     sub_1800D5AB8 @ 0x1800D5AB8 (sub_1800D5AB8.c)
 * Callees:
 *     sub_1800636EC @ 0x1800636EC (sub_1800636EC.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_1800D59E0 @ 0x1800D59E0 (sub_1800D59E0.c)
 *     sub_18010A154 @ 0x18010A154 (sub_18010A154.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_1800D5A4C(__int64 a1, __int64 a2)
{
  char v4; // bl
  _BYTE v6[8]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  sub_1800636EC(a1);
  sub_1800D59E0(a1, (__int64)v6, a2);
  v4 = 0;
  if ( v6[0] )
  {
    sub_18010A154(*(_QWORD *)(a1 + 16 * (v7 + 4)));
    v4 = 1;
  }
  sub_180063778(a1);
  return v4;
}
