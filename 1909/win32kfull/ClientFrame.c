/*
 * XREFs of ClientFrame @ 0x1C0259EA8
 * Callers:
 *     ?DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C0117EF0 (-DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C012BFB4 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?GetSignFromMappingMode@@YAHPEAUHDC__@@PEAUtagPOINT@@@Z @ 0x1C0259E14 (-GetSignFromMappingMode@@YAHPEAUHDC__@@PEAUtagPOINT@@@Z.c)
 */

__int64 __fastcall ClientFrame(HDC a1, int *a2, __int64 a3)
{
  int v6; // r10d
  int v7; // r11d
  int v8; // edx
  int v9; // edi
  int v10; // ebx
  tagPOINT v12; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v13[4]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v14; // [rsp+50h] [rbp-29h]
  int v15; // [rsp+58h] [rbp-21h]
  int v16; // [rsp+5Ch] [rbp-1Dh]
  int v17; // [rsp+60h] [rbp-19h]
  LONG y; // [rsp+64h] [rbp-15h]
  __int64 v19; // [rsp+68h] [rbp-11h]
  int v20; // [rsp+70h] [rbp-9h]
  int v21; // [rsp+74h] [rbp-5h]
  LONG x; // [rsp+78h] [rbp-1h]
  int v23; // [rsp+7Ch] [rbp+3h]
  __int64 v24; // [rsp+80h] [rbp+7h]
  int v25; // [rsp+88h] [rbp+Fh]
  int v26; // [rsp+8Ch] [rbp+13h]
  LONG v27; // [rsp+90h] [rbp+17h]
  int v28; // [rsp+94h] [rbp+1Bh]
  __int64 v29; // [rsp+98h] [rbp+1Fh]

  v12 = 0LL;
  if ( !(unsigned int)GetSignFromMappingMode(a1, &v12) )
    return 0LL;
  v6 = a2[3];
  v7 = a2[1];
  v8 = v6 - v7;
  if ( v6 - v7 < 0 )
    return 0LL;
  v9 = *a2;
  v10 = a2[2];
  if ( ((v10 - v9) ^ v12.x) < 0 || (v8 ^ v12.y) < 0 )
    return 0LL;
  v13[2] = v10 - v9;
  v17 = v10 - v9;
  v13[3] = v12.y;
  y = v12.y;
  v21 = v7 + v12.y;
  v26 = v7 + v12.y;
  v13[0] = v9;
  v13[1] = v7;
  v14 = a3;
  v23 = v8 - 2 * v12.y;
  v28 = v23;
  v15 = v9;
  v16 = v6 - v12.y;
  v19 = a3;
  v20 = v9;
  x = v12.x;
  v24 = a3;
  v25 = v10 - v12.x;
  v27 = v12.x;
  v29 = a3;
  return GrePolyPatBlt(a1, 5898313, (struct _POLYPATBLT *)v13, 4);
}
