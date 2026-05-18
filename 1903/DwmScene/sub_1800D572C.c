/*
 * XREFs of sub_1800D572C @ 0x1800D572C
 * Callers:
 *     sub_1800D57C0 @ 0x1800D57C0 (sub_1800D57C0.c)
 * Callees:
 *     sub_1800635DC @ 0x1800635DC (sub_1800635DC.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_1800D4BD8 @ 0x1800D4BD8 (sub_1800D4BD8.c)
 *     sub_1800D58D0 @ 0x1800D58D0 (sub_1800D58D0.c)
 *     sub_180109400 @ 0x180109400 (sub_180109400.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_1800D572C(__int64 a1, __int64 a2)
{
  char v4; // bl
  _BYTE v6[8]; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int64 v7; // [rsp+40h] [rbp-18h]
  unsigned __int64 v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h]

  v9 = a1;
  sub_1800635DC(a1);
  sub_1800D58D0(a1, v6, a2);
  v4 = 0;
  if ( v6[0] )
  {
    v8 = v7;
    sub_1800D4BD8((__int64 **)(a1 + 48), (__int64)v6, 0, &v8, v7);
    sub_180109400(*(_QWORD *)(a1 + 16 * (v8 + 4)));
    v4 = 1;
  }
  sub_180063668(a1);
  return v4;
}
