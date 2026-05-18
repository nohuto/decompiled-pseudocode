/*
 * XREFs of sub_1800D583C @ 0x1800D583C
 * Callers:
 *     sub_1800D58D0 @ 0x1800D58D0 (sub_1800D58D0.c)
 * Callees:
 *     sub_1800636EC @ 0x1800636EC (sub_1800636EC.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_1800D4CE8 @ 0x1800D4CE8 (sub_1800D4CE8.c)
 *     sub_1800D59E0 @ 0x1800D59E0 (sub_1800D59E0.c)
 *     sub_180109510 @ 0x180109510 (sub_180109510.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_1800D583C(__int64 a1, __int64 a2)
{
  char v4; // bl
  _BYTE v6[8]; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int64 v7; // [rsp+40h] [rbp-18h]
  unsigned __int64 v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h]

  v9 = a1;
  sub_1800636EC(a1);
  sub_1800D59E0(a1, v6, a2);
  v4 = 0;
  if ( v6[0] )
  {
    v8 = v7;
    sub_1800D4CE8((__int64 **)(a1 + 48), (__int64)v6, 0, &v8, v7);
    sub_180109510(*(_QWORD *)(a1 + 16 * (v8 + 4)));
    v4 = 1;
  }
  sub_180063778(a1);
  return v4;
}
