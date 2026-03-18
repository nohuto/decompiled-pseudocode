/*
 * XREFs of PpmParkApplyPolicy @ 0x140194948
 * Callers:
 *     PpmParkRegisterParking @ 0x14019415C (PpmParkRegisterParking.c)
 *     PpmParkSetLpiCap @ 0x1402F8664 (PpmParkSetLpiCap.c)
 *     PpmRegisterPerfStates @ 0x140776250 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x140776D6C (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x1408A8A58 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408A8B6C (PpmParkClearForcedMask.c)
 * Callees:
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14009E0E0 (KeEnumerateNextProcessor.c)
 *     PpmEventParkNodeCapChange @ 0x140302068 (PpmEventParkNodeCapChange.c)
 *     PpmEventParkNodeParkHintChanged @ 0x140302270 (PpmEventParkNodeParkHintChanged.c)
 */

__int64 PpmParkApplyPolicy()
{
  __int64 result; // rax
  unsigned __int16 v1; // bx
  unsigned __int8 v2; // r12
  __int64 v3; // rdx
  unsigned int v4; // r8d
  int v5; // esi
  int v6; // r14d
  unsigned int v7; // ett
  __int64 v8; // r9
  unsigned __int16 v9; // cx
  unsigned int v10; // r10d
  __int64 v11; // rdi
  int v12; // ecx
  __int64 v13; // rdi
  char v14; // r9
  unsigned __int8 v15; // r8
  int v16; // edx
  unsigned __int8 v17; // cl
  __int64 v18; // r8
  _QWORD *v19; // r10
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // r13
  unsigned __int8 v24; // r9
  unsigned int v25; // r11d
  unsigned __int8 v26; // r11
  unsigned int v27; // r15d
  unsigned __int8 v28; // r15
  char v29; // cl
  unsigned __int8 v30; // cl
  __int64 v31; // r12
  __int64 Prcb; // rax
  __int64 v33; // rdi
  __int64 v34; // r8
  char v35; // cl
  unsigned __int8 v36; // cl
  unsigned __int8 v37; // cl
  char v38; // al
  char v39; // cl
  char v40; // al
  char v41; // cl
  char v42; // al
  char v43; // cl
  char v44; // al
  char v45; // cl
  unsigned __int16 v46; // dx
  __int64 v47; // rcx
  unsigned __int8 v48; // r9
  unsigned __int8 v49; // r10
  unsigned __int8 v50; // al
  unsigned __int16 v51; // dx
  __int64 v52; // rcx
  unsigned __int8 v53; // r9
  unsigned __int8 v54; // r10
  unsigned __int8 v55; // al
  char v56; // al
  unsigned __int16 v57; // [rsp+20h] [rbp-49h]
  unsigned int v58; // [rsp+24h] [rbp-45h]
  unsigned __int8 v59; // [rsp+28h] [rbp-41h]
  ULONG v60; // [rsp+2Ch] [rbp-3Dh] BYREF
  unsigned int i; // [rsp+30h] [rbp-39h]
  unsigned int v62; // [rsp+34h] [rbp-35h]
  __int64 v63; // [rsp+38h] [rbp-31h]
  __int64 v64; // [rsp+48h] [rbp-21h]
  _QWORD *v65; // [rsp+50h] [rbp-19h]
  unsigned __int16 *v66; // [rsp+58h] [rbp-11h] BYREF
  __int64 v67; // [rsp+60h] [rbp-9h]
  __int64 v68; // [rsp+68h] [rbp-1h]
  __int64 v69; // [rsp+70h] [rbp+7h]
  char v70; // [rsp+D0h] [rbp+67h]
  unsigned __int8 v71; // [rsp+D8h] [rbp+6Fh]
  __int16 v72; // [rsp+E0h] [rbp+77h] BYREF
  __int16 v73; // [rsp+E8h] [rbp+7Fh]

  result = 0LL;
  v1 = 0;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  if ( PpmParkNodes )
  {
    v2 = 64;
    v3 = 341LL * dword_140443A2C;
    v73 = WORD2(PpmCurrentProfile[v3 + 22]);
    v72 = HIWORD(PpmCurrentProfile[v3 + 22]);
    if ( (((unsigned __int64)qword_14042A6A8[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6] >> (KiProcessorIndexToNumberMappingTable[0] & 0x3F)) & 1) == 0 )
    {
      v35 = PpmParkInitialClass1UnParkCount;
      if ( (unsigned int)PpmParkInitialClass1UnParkCount > 0x40 )
        v35 = 64;
      HIBYTE(v73) = 0;
      v2 = v35;
    }
    v4 = PpmParkNumNodes;
    v5 = PpmParkLpiCap;
    v6 = PpmParkThermalCap;
    v59 = v2;
    v57 = 0;
    v7 = PpmParkLpiCap / (unsigned int)PpmParkNumNodes;
    v8 = v7 - v7 % (unsigned __int8)PpmParkGranularity;
    v62 = v7 - v7 % (unsigned __int8)PpmParkGranularity;
    result = PpmParkThermalCap / (unsigned int)PpmParkNumNodes / (unsigned __int8)PpmParkGranularity;
    v9 = 0;
    v10 = PpmParkThermalCap / (unsigned int)PpmParkNumNodes
        - PpmParkThermalCap / (unsigned int)PpmParkNumNodes % (unsigned __int8)PpmParkGranularity;
    for ( i = v10; v57 < (unsigned int)PpmParkNumNodes; result = v57 )
    {
      v11 = 272LL * v9;
      v12 = (unsigned __int8)v8;
      v13 = PpmParkNodes + v11;
      v14 = PpmParkGranularity;
      v15 = *(_BYTE *)(v13 + 6);
      v16 = v15 - (unsigned __int8)PpmParkGranularity;
      if ( v12 > v16 )
        LOBYTE(v12) = v15 - PpmParkGranularity;
      *(_BYTE *)(v13 + 134) = v12;
      v5 -= (unsigned __int8)v12;
      v17 = v10;
      if ( (unsigned __int8)v10 > v16 )
        v17 = v15 - v14;
      v6 -= v17;
      *(_BYTE *)(v13 + 136) = v17;
      v70 = 0;
      v18 = v13 - (_QWORD)&v72;
      v63 = 0LL;
      v19 = (_QWORD *)(v13 + 56);
      v69 = v13 - (_QWORD)&v72;
      v20 = 0LL;
      v64 = 0LL;
      v21 = 0LL;
      v58 = 0;
      v22 = 0;
      v65 = (_QWORD *)(v13 + 56);
      v23 = 0LL;
      do
      {
        v24 = *((_BYTE *)&v72 + v23 + v18 + 128);
        if ( v24 )
        {
          v25 = (v24 * (unsigned int)*((unsigned __int8 *)&v72 + v23) + 50) / 0x64;
          v26 = (v24 - (unsigned __int8)v25) % (unsigned __int8)PpmParkGranularity + v25;
          v27 = (v24 * (unsigned int)*((unsigned __int8 *)&v73 + v23) + 50) / 0x64;
          v28 = (v24 - (unsigned __int8)v27) % (unsigned __int8)PpmParkGranularity + v27;
          if ( v58 )
          {
            v36 = v26;
            if ( v26 >= v2 )
              v36 = v2;
            v26 = v36;
          }
          if ( v28 )
          {
            v29 = v28;
            if ( (unsigned __int8)PpmParkGranularity > v28 )
              v29 = PpmParkGranularity;
            v28 = v29;
          }
          v30 = v28;
          v31 = 0LL;
          if ( v26 >= v28 )
            v30 = v26;
          v66 = 0LL;
          LOWORD(v68) = *(_WORD *)(v13 + 4);
          v67 = *(v19 - 5);
          v71 = v30;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v60, &v66) )
          {
            Prcb = KeGetPrcb(v60);
            if ( *(_BYTE *)(Prcb + 24316) )
              v31 |= *(_QWORD *)(Prcb + 200);
          }
          v19 = v65;
          v21 = v31 | v64;
          v20 = *v65 | v63;
          v70 += v28;
          v18 = v69;
          *v65 = v31;
          v2 = v59;
          *(_BYTE *)(v13 + v23 + 132) = v71;
          v22 = v58;
          *(_BYTE *)(v13 + v23 + 130) = v28;
          v63 = v20;
          v64 = v21;
        }
        ++v22;
        ++v19;
        ++v23;
        v58 = v22;
        v65 = v19;
      }
      while ( v22 < 2 );
      if ( v20 != v21 )
        PpmEventParkNodeParkHintChanged(*(unsigned __int16 *)(v13 + 4), *(_QWORD *)(v13 + 8), v21);
      if ( !v70 )
      {
        v37 = PpmParkGranularity;
        *(_BYTE *)(v13 + 130) = PpmParkGranularity;
        if ( v37 <= *(_BYTE *)(v13 + 132) )
          v37 = *(_BYTE *)(v13 + 132);
        *(_BYTE *)(v13 + 132) = v37;
      }
      if ( PpmHeteroPolicy == 2 )
      {
        v38 = *(_BYTE *)(v13 + 130);
        v39 = 1;
        *(_BYTE *)(v13 + 139) = 0;
        *(_BYTE *)(v13 + 131) = 0;
        if ( (unsigned __int8)v38 > 1u )
          v39 = v38;
        *(_BYTE *)(v13 + 133) = 0;
        v40 = *(_BYTE *)(v13 + 132);
        *(_BYTE *)(v13 + 130) = v39;
        v41 = 1;
        if ( (unsigned __int8)v40 > 1u )
          v41 = v40;
        *(_BYTE *)(v13 + 132) = v41;
        *(_BYTE *)(v13 + 146) |= 4u;
      }
      else if ( PpmHeteroPolicy == 3 && *(_BYTE *)(v13 + 129) )
      {
        v42 = *(_BYTE *)(v13 + 131);
        v43 = 1;
        *(_BYTE *)(v13 + 138) = 0;
        *(_BYTE *)(v13 + 130) = 0;
        if ( (unsigned __int8)v42 > 1u )
          v43 = v42;
        *(_BYTE *)(v13 + 132) = 0;
        v44 = *(_BYTE *)(v13 + 133);
        *(_BYTE *)(v13 + 131) = v43;
        v45 = 1;
        if ( (unsigned __int8)v44 > 1u )
          v45 = v44;
        *(_BYTE *)(v13 + 133) = v45;
        *(_BYTE *)(v13 + 146) |= 2u;
      }
      v4 = PpmParkNumNodes;
      v9 = v57 + 1;
      LOBYTE(v10) = i;
      v8 = v62;
      ++v57;
    }
    do
    {
LABEL_29:
      if ( !v5 )
        goto LABEL_30;
      v46 = 0;
    }
    while ( !v4 );
    while ( v5 )
    {
      v47 = PpmParkNodes + 272LL * v46;
      v48 = *(_BYTE *)(v47 + 6);
      if ( v48 )
      {
        v49 = PpmParkGranularity;
        v50 = *(_BYTE *)(v47 + 134) + PpmParkGranularity;
        if ( v50 < v48 )
        {
          *(_BYTE *)(v47 + 134) = v50;
          v5 -= v49;
        }
      }
      result = ++v46;
      if ( v46 >= v4 )
        goto LABEL_29;
    }
LABEL_30:
    while ( v6 )
    {
      v51 = 0;
      if ( v4 )
      {
        while ( v6 )
        {
          v52 = PpmParkNodes + 272LL * v51;
          v53 = *(_BYTE *)(v52 + 6);
          if ( v53 )
          {
            v54 = PpmParkGranularity;
            v55 = PpmParkGranularity + *(_BYTE *)(v52 + 136);
            if ( v55 < v53 )
            {
              *(_BYTE *)(v52 + 136) = v55;
              v6 -= v54;
            }
          }
          result = ++v51;
          if ( v51 >= v4 )
            goto LABEL_30;
        }
        break;
      }
    }
    if ( v4 )
    {
      do
      {
        v33 = PpmParkNodes + 272LL * v1;
        v34 = *(unsigned __int8 *)(v33 + 134);
        if ( *(unsigned __int8 *)(v33 + 135) != *(unsigned __int8 *)(v33 + 6) - (_DWORD)v34
          || *(unsigned __int8 *)(v33 + 137) != *(unsigned __int8 *)(v33 + 6) - *(unsigned __int8 *)(v33 + 136) )
        {
          LOBYTE(v8) = *(_BYTE *)(v33 + 136);
          PpmEventParkNodeCapChange(*(unsigned __int16 *)(v33 + 4), *(_QWORD *)(v33 + 8), v34, v8);
          v56 = *(_BYTE *)(v33 + 6) - *(_BYTE *)(v33 + 134);
          *(_BYTE *)(v33 + 137) = *(_BYTE *)(v33 + 6) - *(_BYTE *)(v33 + 136);
          *(_BYTE *)(v33 + 135) = v56;
        }
        result = ++v1;
      }
      while ( v1 < (unsigned int)PpmParkNumNodes );
    }
  }
  return result;
}
