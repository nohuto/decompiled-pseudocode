/*
 * XREFs of itrp_Execute @ 0x1C02C7028
 * Callers:
 *     itrp_ExecuteFontPgm @ 0x1C02C73BC (itrp_ExecuteFontPgm.c)
 *     itrp_ExecuteGlyphPgm @ 0x1C02C7480 (itrp_ExecuteGlyphPgm.c)
 *     itrp_ExecutePrePgm @ 0x1C02C7520 (itrp_ExecutePrePgm.c)
 * Callees:
 *     InvokeGlobalGSScale @ 0x1C02B3B48 (InvokeGlobalGSScale.c)
 *     ExecutePhaseControl @ 0x1C02C5014 (ExecutePhaseControl.c)
 *     InitPhaseControl @ 0x1C02C518C (InitPhaseControl.c)
 *     InvokeInterpreter @ 0x1C02C52B4 (InvokeInterpreter.c)
 */

__int64 __fastcall itrp_Execute(_OWORD *a1, __int128 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int128 v6; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int16 v21; // ax
  bool v22; // zf
  __int16 v23; // ax
  __int64 v24; // rdx
  __int16 v26; // ax
  __int16 v27; // ax
  _OWORD v28[7]; // [rsp+28h] [rbp-A9h] BYREF
  _OWORD v29[7]; // [rsp+98h] [rbp-39h] BYREF

  v6 = a1[1];
  v28[0] = *a1;
  v9 = a1[2];
  v28[1] = v6;
  v10 = a1[3];
  v28[2] = v9;
  v11 = a1[4];
  v28[3] = v10;
  v12 = a1[5];
  v28[4] = v11;
  v13 = a1[6];
  v28[5] = v12;
  v14 = a2[1];
  v28[6] = v13;
  v15 = *a2;
  v29[1] = v14;
  v16 = a2[3];
  v29[0] = v15;
  v17 = a2[2];
  v29[3] = v16;
  v18 = a2[5];
  v29[2] = v17;
  v19 = a2[4];
  v29[5] = v18;
  v29[4] = v19;
  v20 = a2[6];
  qword_1C0327178 = (__int64)v28;
  qword_1C0327180 = a5;
  LocalGS = (__int64)v29;
  qword_1C0327148 = (__int64)v29;
  qword_1C0327150 = (__int64)v29;
  qword_1C0327190 = 0LL;
  dword_1C0327198 = 0;
  dword_1C032715C = 0x4000;
  dword_1C0327158 = 0x4000;
  dword_1C0327160 = 0x4000;
  word_1C03271A8 = 0x4000;
  dword_1C03271AC = 2;
  dword_1C03271B0 = 3;
  dword_1C03271B4 = 3;
  dword_1C03271A0 = 0;
  dword_1C03271E8 = *(_DWORD *)(a5 + 400);
  dword_1C03271EC = *(_DWORD *)(a5 + 404);
  dword_1C03271F0 = *(_DWORD *)(a5 + 408);
  v22 = *(_DWORD *)(a5 + 36) == 0;
  v29[6] = v20;
  word_1C03271CC = v22;
  if ( *(_BYTE *)(a5 + 333) == 1 )
  {
    dword_1C03271BC = 2;
    dword_1C03271C0 = 2;
    dword_1C03271C4 = 4;
    goto LABEL_24;
  }
  *(_WORD *)(a5 + 454) &= 0xFFE4u;
  v21 = *(_WORD *)(qword_1C0327180 + 452);
  if ( (v21 & 1) == 0 )
    goto LABEL_15;
  if ( (v21 & 4) != 0 )
  {
    if ( (_WORD)dword_1C0327158 == 0x4000 )
    {
      v22 = HIWORD(dword_1C0327158) == 0;
LABEL_9:
      v23 = 0;
      if ( v22 )
        goto LABEL_11;
    }
  }
  else if ( HIWORD(dword_1C0327158) == 0x4000 )
  {
    v22 = (_WORD)dword_1C0327158 == 0;
    goto LABEL_9;
  }
  v23 = 1;
LABEL_11:
  if ( !v23 )
  {
LABEL_15:
    word_1C03271F4 = 0;
LABEL_16:
    v24 = 0LL;
    goto LABEL_17;
  }
  word_1C03271F4 = 1;
  if ( (*(_BYTE *)(qword_1C0327180 + 120) & 4) == 0 && !*(_BYTE *)(qword_1C0327180 + 333) )
    goto LABEL_16;
  v24 = 8LL;
LABEL_17:
  *(_DWORD *)(qword_1C0327180 + 128) = itrp_RoundFunctionId[v24 + *(unsigned __int16 *)(qword_1C0327180 + 132)];
  word_1C03271F8 = -1;
  word_1C03271F6 = -1;
  if ( *(_WORD *)(a5 + 24) <= 1u )
    return 0LL;
  if ( *(_BYTE *)(a5 + 340) )
  {
    dword_1C03271BC = 2;
    dword_1C03271C0 = 2;
    dword_1C03271C4 = 4;
  }
  else
  {
    dword_1C03271BC = 3;
    dword_1C03271C0 = 3;
    dword_1C03271C4 = 5;
    word_1C03271CC = 0;
  }
  v26 = *(_WORD *)(a5 + 154);
  if ( v26 )
  {
    *(_DWORD *)(a5 + 112) = InvokeGlobalGSScale(*(_DWORD *)(a5 + 192), (int *)(a5 + 296), v26);
    word_1C03271CC = 0;
  }
LABEL_24:
  qword_1C0327168 = *(_QWORD *)a5;
  qword_1C0327188 = a6;
  dword_1C03271D0 = 0;
  dword_1C03271B8 = 2 - (a6 != 0);
  if ( *(_BYTE *)(a5 + 333) == 2 && (*(_BYTE *)(a5 + 452) & 3) == 3 )
    InitPhaseControl(qword_1C0327178 + 112);
  InvokeInterpreter(dword_1C03271B8, a3, a4);
  if ( *(_BYTE *)(qword_1C0327180 + 333) == 2 )
  {
    v27 = *(_WORD *)(qword_1C0327180 + 452);
    if ( (v27 & 1) != 0 && (v27 & 2) != 0 && !*(_DWORD *)(qword_1C0327178 + 208) )
      ExecutePhaseControl((__int64)&LocalGS, qword_1C0327178 + 112);
  }
  *(_DWORD *)(a5 + 408) = dword_1C03271F0;
  return (unsigned int)dword_1C03271D0;
}
