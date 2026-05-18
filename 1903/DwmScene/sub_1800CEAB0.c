/*
 * XREFs of sub_1800CEAB0 @ 0x1800CEAB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CE88C @ 0x1800CE88C (sub_1800CE88C.c)
 */

_QWORD *__fastcall sub_1800CEAB0(__int64 a1, _QWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // edx
  _DWORD v9[15]; // [rsp+38h] [rbp-39h]
  __int64 v10; // [rsp+74h] [rbp+3h]
  __int64 v11; // [rsp+7Ch] [rbp+Bh]
  int v12; // [rsp+84h] [rbp+13h]
  int v13; // [rsp+88h] [rbp+17h]
  int v14; // [rsp+8Ch] [rbp+1Bh]
  int v15; // [rsp+90h] [rbp+1Fh]
  int v16; // [rsp+94h] [rbp+23h]
  int v17; // [rsp+98h] [rbp+27h]
  int v18[4]; // [rsp+A8h] [rbp+37h] BYREF
  int v19; // [rsp+D8h] [rbp+67h] BYREF
  int v20; // [rsp+E0h] [rbp+6Fh] BYREF

  v20 = a4;
  v19 = a3;
  *(_QWORD *)v18 = a2;
  v9[0] = 0;
  v9[13] = 1;
  v16 = 1;
  v9[4] = 8;
  v9[5] = 12;
  v9[10] = 12;
  v9[6] = 16;
  v9[11] = 16;
  v9[12] = 2;
  v9[14] = 2;
  v12 = 2;
  v17 = 2;
  v9[9] = 8;
  v14 = 8;
  v10 = 0x400000004LL;
  v11 = 0x400000004LL;
  v9[1] = 4;
  v9[2] = 4;
  v9[3] = 4;
  v9[7] = 4;
  v9[8] = 4;
  v13 = 4;
  v15 = 4;
  if ( (unsigned int)(a6 - 23) > 1 )
    v7 = a3 * v9[a6];
  else
    v7 = ((a3 + 1) & 0xFFFFFFFE) * v9[a6];
  v18[0] = v7;
  sub_1800CE88C(a2, &v19, v18, &v20, &a6, &a5);
  return a2;
}
