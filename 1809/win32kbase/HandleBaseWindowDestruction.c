/*
 * XREFs of HandleBaseWindowDestruction @ 0x1C0151230
 * Callers:
 *     DestroyBaseWindow @ 0x1C00F3B70 (DestroyBaseWindow.c)
 * Callees:
 *     HandleInputDestDestruction @ 0x1C0032304 (HandleInputDestDestruction.c)
 *     INPUTDEST_FROM_BASEWND @ 0x1C01312E4 (INPUTDEST_FROM_BASEWND.c)
 */

void __fastcall HandleBaseWindowDestruction(__int64 a1)
{
  _OWORD *v1; // rax
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  _OWORD v11[11]; // [rsp+20h] [rbp-168h] BYREF
  _DWORD v12[46]; // [rsp+D0h] [rbp-B8h] BYREF

  v1 = INPUTDEST_FROM_BASEWND(v12, a1);
  v2 = v1[1];
  v11[0] = *v1;
  v3 = v1[2];
  v11[1] = v2;
  v4 = v1[3];
  v11[2] = v3;
  v5 = v1[4];
  v11[3] = v4;
  v6 = v1[5];
  v11[4] = v5;
  v7 = v1[6];
  v11[5] = v6;
  v8 = v1[8];
  v11[6] = v7;
  v11[7] = v1[7];
  v9 = v1[9];
  v11[8] = v8;
  v10 = v1[10];
  v11[9] = v9;
  v11[10] = v10;
  HandleInputDestDestruction((struct tagINPUTDEST *)v11);
}
