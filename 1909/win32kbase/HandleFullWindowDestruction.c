/*
 * XREFs of HandleFullWindowDestruction @ 0x1C002FE50
 * Callers:
 *     <none>
 * Callees:
 *     HandleInputDestDestruction @ 0x1C002FD60 (HandleInputDestDestruction.c)
 *     INPUTDEST_FROM_PWND @ 0x1C002FED0 (INPUTDEST_FROM_PWND.c)
 */

void __fastcall HandleFullWindowDestruction(__int64 a1)
{
  __int64 v1; // rax
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
  _BYTE v12[136]; // [rsp+A0h] [rbp-88h] BYREF

  v1 = INPUTDEST_FROM_PWND(v12, a1);
  v2 = *(_OWORD *)(v1 + 16);
  v10[0] = *(_OWORD *)v1;
  v3 = *(_OWORD *)(v1 + 32);
  v10[1] = v2;
  v4 = *(_OWORD *)(v1 + 48);
  v10[2] = v3;
  v5 = *(_OWORD *)(v1 + 64);
  v10[3] = v4;
  v6 = *(_OWORD *)(v1 + 80);
  v10[4] = v5;
  v7 = *(_OWORD *)(v1 + 96);
  v10[5] = v6;
  *(_QWORD *)&v6 = *(_QWORD *)(v1 + 112);
  v10[6] = v7;
  v11 = v6;
  HandleInputDestDestruction((struct tagINPUTDEST *)v10, v8, v9);
}
