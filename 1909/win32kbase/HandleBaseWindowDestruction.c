/*
 * XREFs of HandleBaseWindowDestruction @ 0x1C0182190
 * Callers:
 *     DestroyBaseWindow @ 0x1C011D050 (DestroyBaseWindow.c)
 * Callees:
 *     HandleInputDestDestruction @ 0x1C002FD60 (HandleInputDestDestruction.c)
 *     INPUTDEST_FROM_BASEWND @ 0x1C015BBDC (INPUTDEST_FROM_BASEWND.c)
 */

void __fastcall HandleBaseWindowDestruction(__int64 a1)
{
  _DWORD *v1; // rax
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // r8
  _OWORD v10[7]; // [rsp+20h] [rbp-108h] BYREF
  __int64 v11; // [rsp+90h] [rbp-98h]
  _DWORD v12[34]; // [rsp+A0h] [rbp-88h] BYREF

  v1 = INPUTDEST_FROM_BASEWND(v12, a1);
  v2 = *((_OWORD *)v1 + 1);
  v10[0] = *(_OWORD *)v1;
  v3 = *((_OWORD *)v1 + 2);
  v10[1] = v2;
  v4 = *((_OWORD *)v1 + 3);
  v10[2] = v3;
  v5 = *((_OWORD *)v1 + 4);
  v10[3] = v4;
  v6 = *((_OWORD *)v1 + 5);
  v10[4] = v5;
  v7 = *((_OWORD *)v1 + 6);
  v10[5] = v6;
  *(_QWORD *)&v6 = *((_QWORD *)v1 + 14);
  v10[6] = v7;
  v11 = v6;
  HandleInputDestDestruction((struct tagINPUTDEST *)v10, v8, v9);
}
