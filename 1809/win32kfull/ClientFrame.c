/*
 * XREFs of ClientFrame @ 0x1C02417C0
 * Callers:
 *     ?DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C01304D8 (-DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C007B620 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall ClientFrame(HDC a1, int *a2, __int64 a3)
{
  int v6; // esi
  int v7; // r15d
  unsigned int v8; // r8d
  unsigned int v9; // ecx
  int v10; // r9d
  int v11; // r11d
  int v12; // r10d
  int v13; // edx
  int v15; // [rsp+38h] [rbp-49h] BYREF
  int v16; // [rsp+3Ch] [rbp-45h]
  int v17; // [rsp+40h] [rbp-41h] BYREF
  int v18; // [rsp+44h] [rbp-3Dh]
  _DWORD v19[3]; // [rsp+48h] [rbp-39h] BYREF
  unsigned int v20; // [rsp+54h] [rbp-2Dh]
  __int64 v21; // [rsp+58h] [rbp-29h]
  int v22; // [rsp+60h] [rbp-21h]
  int v23; // [rsp+64h] [rbp-1Dh]
  int v24; // [rsp+68h] [rbp-19h]
  unsigned int v25; // [rsp+6Ch] [rbp-15h]
  __int64 v26; // [rsp+70h] [rbp-11h]
  int v27; // [rsp+78h] [rbp-9h]
  int v28; // [rsp+7Ch] [rbp-5h]
  unsigned int v29; // [rsp+80h] [rbp-1h]
  int v30; // [rsp+84h] [rbp+3h]
  __int64 v31; // [rsp+88h] [rbp+7h]
  int v32; // [rsp+90h] [rbp+Fh]
  int v33; // [rsp+94h] [rbp+13h]
  unsigned int v34; // [rsp+98h] [rbp+17h]
  int v35; // [rsp+9Ch] [rbp+1Bh]
  __int64 v36; // [rsp+A0h] [rbp+1Fh]

  if ( !(unsigned int)GreGetDCPoint(a1, 1LL, &v17) )
    return 0LL;
  if ( !(unsigned int)GreGetDCPoint(a1, 2LL, &v15) )
    return 0LL;
  v6 = a2[3];
  v7 = a2[1];
  v8 = (((v17 ^ v15) >> 31) & 0xFFFFFFFE) + 1;
  v9 = (((v18 ^ v16) >> 31) & 0xFFFFFFFE) + 1;
  v10 = v6 - v7;
  if ( v6 - v7 < 0 )
    return 0LL;
  v11 = a2[2];
  v12 = *a2;
  v13 = v11 - *a2;
  if ( ((v13 ^ v8) & 0x80000000) != 0 || ((v10 ^ v9) & 0x80000000) != 0 )
    return 0LL;
  v19[2] = a2[2] - *a2;
  v24 = v13;
  v20 = (((v18 ^ v16) >> 31) & 0xFFFFFFFE) + 1;
  v25 = v20;
  v28 = v7 + v9;
  v29 = (((v17 ^ v15) >> 31) & 0xFFFFFFFE) + 1;
  v33 = v7 + v9;
  v34 = v29;
  v30 = v10 - 2 * v9;
  v35 = v30;
  v19[0] = v12;
  v19[1] = v7;
  v21 = a3;
  v22 = v12;
  v23 = v6 - v9;
  v26 = a3;
  v27 = v12;
  v31 = a3;
  v32 = v11 - v8;
  v36 = a3;
  return GrePolyPatBlt(a1, 0x5A0049u, (struct _POLYPATBLT *)v19, 4);
}
