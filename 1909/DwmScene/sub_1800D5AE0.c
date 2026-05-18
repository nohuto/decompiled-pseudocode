/*
 * XREFs of sub_1800D5AE0 @ 0x1800D5AE0
 * Callers:
 *     sub_1800D5BB0 @ 0x1800D5BB0 (sub_1800D5BB0.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_1800636EC @ 0x1800636EC (sub_1800636EC.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_1800D59E0 @ 0x1800D59E0 (sub_1800D59E0.c)
 *     sub_18010A230 @ 0x18010A230 (sub_18010A230.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall sub_1800D5AE0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v8; // rcx
  char v9; // bl
  __int128 v11; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v12[8]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+48h] [rbp-28h]
  _QWORD v14[4]; // [rsp+50h] [rbp-20h] BYREF

  sub_1800636EC(a1);
  sub_1800D59E0(a1, (__int64)v12, a2);
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
    sub_18000F444(v14, a3);
    sub_18010A230(*(_QWORD *)(a1 + 16 * (v13 + 4)), v14, &v11);
  }
  else
  {
    v9 = 0;
  }
  sub_180063778(a1);
  return v9;
}
