/*
 * XREFs of PpmParkCalculateCoreParkingMask @ 0x140122380
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x140296710 (KeCpuSetQueryUnparkRecommendation.c)
 *     PpmEventLPICoreParking @ 0x1402E5A5C (PpmEventLPICoreParking.c)
 *     PpmEventTraceCoreParkingSelection @ 0x1402E66A0 (PpmEventTraceCoreParkingSelection.c)
 *     PpmParkChooseCoresToUnpark @ 0x1402E7980 (PpmParkChooseCoresToUnpark.c)
 *     PpmParkComputeDiff @ 0x1402E805C (PpmParkComputeDiff.c)
 */

char PpmParkCalculateCoreParkingMask()
{
  unsigned int v1; // r13d
  unsigned int v2; // edi
  __int64 v3; // rbx
  unsigned int v4; // ecx
  unsigned int v5; // esi
  unsigned __int8 v6; // al
  __int64 v7; // rsi
  __int16 v8; // ax
  __int64 Prcb; // rax
  __int64 *v10; // r13
  _QWORD *v11; // rax
  unsigned int v12; // r15d
  __int64 v13; // r12
  __int64 v14; // r9
  int v15; // r14d
  unsigned int v16; // r8d
  unsigned int v17; // edi
  unsigned int v18; // eax
  int v19; // eax
  unsigned int v20; // r9d
  unsigned int v21; // r9d
  int v22; // esi
  unsigned __int8 v23; // al
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rdx
  __int16 v26; // ax
  unsigned int v27; // r8d
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // r9
  unsigned __int64 v31; // rcx
  unsigned int v32; // ecx
  int v33; // eax
  int v34; // eax
  unsigned int v35; // esi
  int v36; // edx
  __int64 v37; // r9
  int v38; // esi
  int v39; // r9d
  unsigned int v40; // r15d
  BOOL v41; // eax
  __int64 v42; // [rsp+30h] [rbp-79h]
  unsigned __int16 *v43; // [rsp+50h] [rbp-59h] BYREF
  ULONG v44; // [rsp+58h] [rbp-51h] BYREF
  ULONG v45; // [rsp+5Ch] [rbp-4Dh] BYREF
  int v46; // [rsp+60h] [rbp-49h]
  unsigned int v47; // [rsp+64h] [rbp-45h]
  __int64 v48; // [rsp+68h] [rbp-41h]
  __int64 *v49; // [rsp+70h] [rbp-39h]
  __int64 v50; // [rsp+78h] [rbp-31h]
  __int64 *v51; // [rsp+80h] [rbp-29h]
  unsigned __int16 *v52[2]; // [rsp+88h] [rbp-21h] BYREF
  __int16 v53; // [rsp+98h] [rbp-11h]
  unsigned __int16 *v54[2]; // [rsp+A0h] [rbp-9h] BYREF
  __int16 v55; // [rsp+B0h] [rbp+7h]
  int v56; // [rsp+110h] [rbp+67h] BYREF
  unsigned int v57; // [rsp+118h] [rbp+6Fh]
  unsigned int v58; // [rsp+120h] [rbp+77h]
  unsigned int v59; // [rsp+128h] [rbp+7Fh]

  if ( !PpmIsParkingEnabled )
    return 1;
  v1 = 0;
  v59 = 0;
  v51 = &PpmCurrentProfile[341 * dword_14041918C];
  v2 = 100 * *((unsigned __int8 *)v51 + 164);
  v47 = v2;
  if ( !PpmParkNumNodes )
    goto LABEL_47;
  do
  {
    v3 = PpmParkNodes + 264LL * v1;
    if ( (*(_BYTE *)(v3 + 138) & 1) != 0 )
      goto LABEL_46;
    v4 = *(unsigned __int8 *)(v3 + 127);
    *(_QWORD *)(v3 + 40) = *(_QWORD *)(v3 + 32);
    v5 = v4;
    v6 = *(_BYTE *)(v3 + 129);
    if ( (unsigned __int8)v4 >= v6 )
      v5 = *(unsigned __int8 *)(v3 + 129);
    v57 = v5;
    v46 = 2 - ((unsigned __int8)v4 < v6);
    v7 = 0LL;
    v8 = *(_WORD *)(v3 + 4);
    v52[0] = 0LL;
    v53 = v8;
    v52[1] = *(unsigned __int16 **)(v3 + 8);
    while ( !(unsigned int)KeEnumerateNextProcessor(&v44, v52) )
    {
      Prcb = KeGetPrcb(v44);
      if ( *(_DWORD *)(Prcb + 24248) >= v2 )
        v7 |= *(_QWORD *)(Prcb + 200);
    }
    v10 = v51;
    v11 = (_QWORD *)(v3 + 48);
    v12 = 0;
    v49 = (__int64 *)(v3 + 48);
    v58 = 0;
    v13 = 0LL;
    v50 = v7;
    do
    {
      v14 = *(v11 - 4);
      v15 = 0;
      v56 = 0;
      v48 = v14;
      if ( !v14 )
        break;
      v16 = *(unsigned __int8 *)(v3 + v13 + 120);
      v17 = v16;
      if ( !PpmPerfMaxOverrideEnabled )
      {
        v18 = *(unsigned __int8 *)(v13 + v3 + 130);
        if ( v16 <= v18 )
          v18 = *(unsigned __int8 *)(v3 + v13 + 120);
        v17 = v18
            + (unsigned __int8)PpmParkGranularity
            - 1
            - (v18 + (unsigned __int8)PpmParkGranularity - 1) % (unsigned __int8)PpmParkGranularity;
      }
      v19 = 0;
      if ( PpmCheckLatencyBoostActive )
      {
        v20 = (v16 * *((unsigned __int8 *)v10 + v13 + 119) + 50) / 0x64;
        v19 = 0;
        v21 = (v16 - v20) % (unsigned __int8)PpmParkGranularity + v20;
        if ( v17 < v21 )
        {
          v19 = 64;
          v17 = v21;
          v15 = 64;
          v56 = 64;
        }
        v14 = v48;
      }
      v22 = v19;
      if ( !v12 && *(_BYTE *)(v3 + 131) )
      {
        v17 = *(unsigned __int8 *)(v3 + 120);
        v15 = v19 | 0x80;
        v56 = v19 | 0x80;
        v22 = v19 | 0x80;
      }
      *(_BYTE *)(v13 + v3 + 130) = v17;
      v23 = KeCpuSetQueryUnparkRecommendation(*(unsigned __int16 *)(v3 + 4), v14, &v43);
      v24 = (unsigned __int64)v43;
      LODWORD(v25) = v23;
      if ( v23 )
      {
        if ( (unsigned __int8)PpmParkGranularity > 1u )
        {
          v26 = *(_WORD *)(v3 + 4);
          v54[0] = 0LL;
          v55 = v26;
          v54[1] = v43;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v45, v54) )
            v24 |= *(_QWORD *)(KeGetPrcb(v45) + 24920);
          v43 = (unsigned __int16 *)v24;
          v25 = (0x101010101010101LL
               * ((((v24 - ((v24 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v24 - ((v24 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                 + ((((v24 - ((v24 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v24 - ((v24 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
        }
        v27 = *(unsigned __int8 *)(v3 + v13 + 120);
        v28 = v25 + v17;
        v17 = v27;
        v56 = v15 | 0x10;
        v22 = v15 | 0x10;
        if ( v28 < v27 )
          v17 = v28;
      }
      else
      {
        LOBYTE(v27) = *(_BYTE *)(v3 + v13 + 120);
      }
      v29 = *(unsigned __int8 *)(v13 + v3 + 122);
      if ( v17 < v29 )
      {
        v22 |= 4u;
LABEL_38:
        v17 = v29;
        v56 = v22;
        goto LABEL_39;
      }
      v29 = *(unsigned __int8 *)(v13 + v3 + 124);
      if ( v17 > v29 )
      {
        v22 |= 8u;
        goto LABEL_38;
      }
LABEL_39:
      v30 = *v49;
      v31 = *v49 - (((unsigned __int64)*v49 >> 1) & 0x5555555555555555LL);
      v32 = (unsigned __int8)v27
          - ((unsigned int)((0x101010101010101LL
                           * (((v31 & 0x3333333333333333LL)
                             + ((v31 >> 2) & 0x3333333333333333LL)
                             + (((v31 & 0x3333333333333333LL) + ((v31 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24);
      if ( v32 < v17 )
      {
        v22 |= 0x10000u;
        v17 = v32;
        v56 = v22;
      }
      v33 = 0;
      if ( v57 >= v17 )
      {
        v35 = v57;
      }
      else
      {
        v34 = v22 | v46;
        v35 = v57;
        v56 = v34;
        v17 = v57;
        v33 = 1;
      }
      v36 = *(unsigned __int16 *)(v3 + 4);
      v42 = v30;
      v37 = *(_QWORD *)(v3 + 40);
      v57 = v35 - v17;
      v38 = v50;
      *(_BYTE *)(v13 + v3 + 135) = PpmParkChooseCoresToUnpark(
                                     v17,
                                     v36,
                                     v48,
                                     v37,
                                     v50,
                                     v24,
                                     v42,
                                     v3 + 32,
                                     v33,
                                     (__int64)&v56);
      v39 = v24;
      v40 = v58;
      PpmEventTraceCoreParkingSelection(v3, v58, v38, v39, v17, v56);
      v12 = v40 + 1;
      v11 = v49 + 1;
      v58 = v12;
      ++v13;
      ++v49;
    }
    while ( v12 < 2 );
    v1 = v59;
    v2 = v47;
LABEL_46:
    v59 = ++v1;
  }
  while ( v1 < PpmParkNumNodes );
LABEL_47:
  PpmParkComputeDiff();
  v41 = __PAIR64__(PpmParkLpiCapChanged, PpmParkLpiEngaged) != (PpmParkLpiCap != 0);
  PpmParkLpiCapChanged = 0;
  PpmParkLpiEngaged = PpmParkLpiCap != 0;
  if ( v41 )
    PpmEventLPICoreParking();
  return 1;
}
