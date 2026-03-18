/*
 * XREFs of EditionIsPointerInputRedirected @ 0x1C01BA550
 * Callers:
 *     <none>
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C00E78F0 (INPUTDEST_FROM_PWND.c)
 *     IsPointerInputRedirected @ 0x1C01BA7CC (IsPointerInputRedirected.c)
 */

__int64 __fastcall EditionIsPointerInputRedirected(__int64 a1, unsigned int a2, _OWORD *a3)
{
  unsigned int v4; // ebx
  _OWORD *v5; // rax
  __int128 v6; // xmm1
  __int64 result; // rax
  __int128 v8; // [rsp+40h] [rbp-148h]
  __int128 v9; // [rsp+50h] [rbp-138h]
  __int128 v10; // [rsp+60h] [rbp-128h]
  __int128 v11; // [rsp+70h] [rbp-118h]
  __int128 v12; // [rsp+80h] [rbp-108h]
  __int128 v13; // [rsp+90h] [rbp-F8h]
  __int128 v14; // [rsp+A0h] [rbp-E8h]
  __int128 v15; // [rsp+B0h] [rbp-D8h]
  __int128 v16; // [rsp+C0h] [rbp-C8h]
  _DWORD v17[46]; // [rsp+D0h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+1A0h] [rbp+18h] BYREF

  v18 = 0LL;
  v4 = IsPointerInputRedirected(a1, *(_QWORD *)(grpdeskRitInput + 8LL), a2, &v18);
  v5 = INPUTDEST_FROM_PWND(v17, v18);
  v8 = v5[2];
  v9 = v5[3];
  v10 = v5[4];
  v11 = v5[5];
  v12 = v5[6];
  v13 = v5[7];
  v14 = v5[8];
  v15 = v5[9];
  v16 = v5[10];
  v6 = v5[1];
  *a3 = *v5;
  a3[1] = v6;
  a3[2] = v8;
  a3[3] = v9;
  a3[4] = v10;
  a3[5] = v11;
  a3[6] = v12;
  a3 += 8;
  *(a3 - 1) = v13;
  *a3 = v14;
  result = v4;
  a3[1] = v15;
  a3[2] = v16;
  return result;
}
