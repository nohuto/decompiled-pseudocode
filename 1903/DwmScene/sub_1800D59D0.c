/*
 * XREFs of sub_1800D59D0 @ 0x1800D59D0
 * Callers:
 *     sub_1800D5AA0 @ 0x1800D5AA0 (sub_1800D5AA0.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_1800635DC @ 0x1800635DC (sub_1800635DC.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_1800D58D0 @ 0x1800D58D0 (sub_1800D58D0.c)
 *     sub_18010A120 @ 0x18010A120 (sub_18010A120.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall sub_1800D59D0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v8; // rcx
  char v9; // bl
  __int128 v11; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v12[8]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+48h] [rbp-28h]
  _QWORD v14[4]; // [rsp+50h] [rbp-20h] BYREF

  sub_1800635DC(a1);
  sub_1800D58D0(a1, (__int64)v12, a2);
  if ( v12[0] )
  {
    v11 = 0LL;
    v8 = a4[1];
    v9 = 1;
    if ( v8 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
      v8 = a4[1];
    }
    *(_QWORD *)&v11 = *a4;
    *((_QWORD *)&v11 + 1) = v8;
    v14[2] = 0LL;
    v14[3] = 0LL;
    sub_18000F3F4(v14, a3);
    sub_18010A120(*(_QWORD *)(a1 + 16 * (v13 + 4)), v14, &v11);
  }
  else
  {
    v9 = 0;
  }
  sub_180063668(a1);
  return v9;
}
