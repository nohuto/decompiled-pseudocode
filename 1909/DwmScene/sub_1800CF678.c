/*
 * XREFs of sub_1800CF678 @ 0x1800CF678
 * Callers:
 *     sub_1800CF790 @ 0x1800CF790 (sub_1800CF790.c)
 * Callees:
 *     sub_1800CF450 @ 0x1800CF450 (sub_1800CF450.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

_QWORD *sub_1800CF678(__int64 a1, _QWORD *a2, int a3, int a4, ...)
{
  int v5; // edx
  int v7[4]; // [rsp+40h] [rbp-61h] BYREF
  _DWORD v8[15]; // [rsp+50h] [rbp-51h]
  __int64 v9; // [rsp+8Ch] [rbp-15h]
  __int64 v10; // [rsp+94h] [rbp-Dh]
  int v11; // [rsp+9Ch] [rbp-5h]
  int v12; // [rsp+A0h] [rbp-1h]
  int v13; // [rsp+A4h] [rbp+3h]
  int v14; // [rsp+A8h] [rbp+7h]
  int v15; // [rsp+ACh] [rbp+Bh]
  int v16; // [rsp+B0h] [rbp+Fh]
  int v17; // [rsp+C0h] [rbp+1Fh] BYREF
  int v18[2]; // [rsp+C8h] [rbp+27h] BYREF
  __int64 v19; // [rsp+110h] [rbp+6Fh] BYREF
  va_list va; // [rsp+110h] [rbp+6Fh]
  __int64 v21; // [rsp+118h] [rbp+77h] BYREF
  va_list va1; // [rsp+118h] [rbp+77h]
  va_list va2; // [rsp+120h] [rbp+7Fh] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v19 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  v18[1] = HIDWORD(a2);
  v8[0] = 0;
  v18[0] = a3;
  v17 = a4;
  v8[13] = 1;
  v8[5] = 12;
  v8[10] = 12;
  v8[6] = 16;
  v8[11] = 16;
  v8[12] = 2;
  v8[14] = 2;
  v11 = 2;
  v16 = 2;
  v8[1] = 4;
  v8[2] = 4;
  v8[3] = 4;
  v8[7] = 4;
  v8[8] = 4;
  v12 = 4;
  v14 = 4;
  v15 = 1;
  v8[4] = 8;
  v8[9] = 8;
  v13 = 8;
  v9 = 0x400000004LL;
  v10 = 0x400000004LL;
  if ( (unsigned int)(v21 - 23) > 1 )
    v5 = a3 * v8[(int)v21];
  else
    v5 = ((a3 + 1) & 0xFFFFFFFE) * v8[(int)v21];
  v7[0] = v5;
  sub_1800CF450(a2, v18, v7, &v17, (int *)va1, (int *)va, (int *)va2);
  return a2;
}
