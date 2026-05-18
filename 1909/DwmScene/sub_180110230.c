/*
 * XREFs of sub_180110230 @ 0x180110230
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_180091460 @ 0x180091460 (sub_180091460.c)
 *     sub_18010D948 @ 0x18010D948 (sub_18010D948.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125BD8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=12
_QWORD *__fastcall sub_180110230(__int64 a1, _QWORD *a2)
{
  __int64 v4; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v5; // [rsp+38h] [rbp-D0h]
  __int64 v6; // [rsp+40h] [rbp-C8h]
  __int64 v7; // [rsp+48h] [rbp-C0h]
  __int64 v8; // [rsp+50h] [rbp-B8h]
  _BYTE v9[64]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v10[64]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v11[64]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v12[64]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v13[64]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v14[64]; // [rsp+198h] [rbp+90h] BYREF
  _BYTE v15[64]; // [rsp+1D8h] [rbp+D0h] BYREF
  _BYTE v16[64]; // [rsp+218h] [rbp+110h] BYREF
  _BYTE v17[64]; // [rsp+258h] [rbp+150h] BYREF
  _BYTE v18[64]; // [rsp+298h] [rbp+190h] BYREF
  _BYTE v19[64]; // [rsp+2D8h] [rbp+1D0h] BYREF
  _BYTE v20[16]; // [rsp+318h] [rbp+210h] BYREF

  v8 = -2LL;
  LODWORD(v7) = 0;
  v5 = 0LL;
  v6 = 0LL;
  sub_18000F444(&v4, (__int64)&qword_18025C618);
  sub_180091460((__int64)v9, &v4, 8);
  v5 = 0LL;
  v6 = 0LL;
  sub_18000F444(&v4, (__int64)&qword_18025C558);
  sub_180091460((__int64)v10, &v4, 6);
  v5 = 0LL;
  v6 = 0LL;
  sub_18000F444(&v4, (__int64)&qword_18025C658);
  sub_180091460((__int64)v11, &v4, 8);
  v5 = 0LL;
  v6 = 0LL;
  sub_18000F444(&v4, (__int64)&qword_18025C578);
  sub_180091460((__int64)v12, &v4, 6);
  v5 = 0LL;
  v6 = 0LL;
  sub_18000F444(&v4, (__int64)&qword_18025C638);
  sub_180091460((__int64)v13, &v4, 8);
  v5 = 0LL;
  v6 = 0LL;
  sub_18000F444(&v4, (__int64)&qword_18025C5B8);
  sub_180091460((__int64)v14, &v4, 5);
  v5 = 0LL;
  v6 = 0LL;
  sub_18000F444(&v4, (__int64)&qword_18025C678);
  sub_180091460((__int64)v15, &v4, 8);
  v5 = 0LL;
  v6 = 0LL;
  sub_18000F444(&v4, (__int64)&qword_18025C5F8);
  sub_180091460((__int64)v16, &v4, 6);
  v5 = 0LL;
  v6 = 0LL;
  sub_18000F444(&v4, (__int64)&qword_18025C6B8);
  sub_180091460((__int64)v17, &v4, 8);
  v5 = 0LL;
  v6 = 0LL;
  sub_18000F444(&v4, (__int64)&qword_18025C5D8);
  sub_180091460((__int64)v18, &v4, 2);
  v5 = 0LL;
  v6 = 0LL;
  sub_18000F444(&v4, (__int64)&qword_18025C758);
  sub_180091460((__int64)v19, &v4, 2);
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  sub_18010D948(a2, (__int64)v9, (__int64)v20);
  LODWORD(v7) = 1;
  `eh vector destructor iterator'(v9, 0x40uLL, 0xBuLL, (void (*)(void *))sub_180091A40);
  return a2;
}
