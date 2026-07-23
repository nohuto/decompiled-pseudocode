/*
 * XREFs of PpmParkApplyPolicy @ 0x140189FB0
 * Callers:
 *     PpmParkRegisterParking @ 0x1401897F0 (PpmParkRegisterParking.c)
 *     PpmParkSetLpiCap @ 0x1402E81E0 (PpmParkSetLpiCap.c)
 *     PpmRegisterPerfStates @ 0x14074F6AC (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x140750214 (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x14087D794 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14087D868 (PpmParkClearForcedMask.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     PpmEventParkNodeCapChange @ 0x1402E5B1C (PpmEventParkNodeCapChange.c)
 *     PpmEventParkNodeParkHintChanged @ 0x1402E5D24 (PpmEventParkNodeParkHintChanged.c)
 */

void PpmParkApplyPolicy()
{
  unsigned __int16 v0; // bx
  unsigned __int8 v1; // r12
  __int64 v2; // rdx
  unsigned int v3; // r8d
  int v4; // esi
  int v5; // r14d
  unsigned int v6; // ett
  __int64 v7; // r9
  unsigned __int16 v8; // cx
  unsigned int v9; // r10d
  __int64 v10; // rdi
  int v11; // ecx
  __int64 v12; // rdi
  char v13; // r9
  unsigned __int8 v14; // r8
  int v15; // edx
  unsigned __int8 v16; // cl
  __int64 v17; // r8
  unsigned __int16 **v18; // r10
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // r13
  unsigned __int8 v23; // r9
  unsigned int v24; // r11d
  unsigned __int8 v25; // r11
  unsigned int v26; // r15d
  unsigned __int8 v27; // r15
  char v28; // cl
  unsigned __int8 v29; // cl
  __int64 v30; // r12
  __int64 Prcb; // rax
  __int64 v32; // rdi
  __int64 v33; // r8
  char v34; // cl
  unsigned __int8 v35; // cl
  unsigned __int8 v36; // cl
  char v37; // al
  char v38; // cl
  char v39; // al
  char v40; // cl
  char v41; // al
  char v42; // cl
  char v43; // al
  char v44; // cl
  unsigned __int16 v45; // dx
  __int64 v46; // rcx
  unsigned __int8 v47; // r9
  unsigned __int8 v48; // r10
  unsigned __int8 v49; // al
  unsigned __int16 v50; // dx
  __int64 v51; // rcx
  unsigned __int8 v52; // r9
  unsigned __int8 v53; // r10
  unsigned __int8 v54; // al
  char v55; // al
  unsigned __int16 v56; // [rsp+20h] [rbp-49h]
  unsigned int v57; // [rsp+24h] [rbp-45h]
  unsigned __int8 v58; // [rsp+28h] [rbp-41h]
  ULONG v59; // [rsp+2Ch] [rbp-3Dh] BYREF
  unsigned int i; // [rsp+30h] [rbp-39h]
  unsigned int v61; // [rsp+34h] [rbp-35h]
  __int64 v62; // [rsp+38h] [rbp-31h]
  __int64 v63; // [rsp+48h] [rbp-21h]
  _QWORD *v64; // [rsp+50h] [rbp-19h]
  __int64 v65; // [rsp+58h] [rbp-11h]
  unsigned __int16 *v66[2]; // [rsp+60h] [rbp-9h] BYREF
  __int16 v67; // [rsp+70h] [rbp+7h]
  char v68; // [rsp+D0h] [rbp+67h]
  unsigned __int8 v69; // [rsp+D8h] [rbp+6Fh]
  __int16 v70; // [rsp+E0h] [rbp+77h] BYREF
  __int16 v71; // [rsp+E8h] [rbp+7Fh]

  v0 = 0;
  if ( PpmParkNodes )
  {
    v1 = 64;
    v2 = 341LL * dword_14041918C;
    v71 = WORD2(PpmCurrentProfile[v2 + 22]);
    v70 = HIWORD(PpmCurrentProfile[v2 + 22]);
    if ( (((unsigned __int64)qword_1404050A8[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6] >> (KiProcessorIndexToNumberMappingTable[0] & 0x3F)) & 1) == 0 )
    {
      v34 = PpmParkInitialClass1UnParkCount;
      if ( (unsigned int)PpmParkInitialClass1UnParkCount > 0x40 )
        v34 = 64;
      HIBYTE(v71) = 0;
      v1 = v34;
    }
    v3 = PpmParkNumNodes;
    v4 = PpmParkLpiCap;
    v5 = PpmParkThermalCap;
    v58 = v1;
    v56 = 0;
    v6 = PpmParkLpiCap / (unsigned int)PpmParkNumNodes;
    v7 = v6 - v6 % (unsigned __int8)PpmParkGranularity;
    v61 = v6 - v6 % (unsigned __int8)PpmParkGranularity;
    v8 = 0;
    v9 = PpmParkThermalCap / (unsigned int)PpmParkNumNodes
       - PpmParkThermalCap / (unsigned int)PpmParkNumNodes % (unsigned __int8)PpmParkGranularity;
    for ( i = v9; v56 < (unsigned int)PpmParkNumNodes; ++v56 )
    {
      v10 = 264LL * v8;
      v11 = (unsigned __int8)v7;
      v12 = PpmParkNodes + v10;
      v13 = PpmParkGranularity;
      v14 = *(_BYTE *)(v12 + 6);
      v15 = v14 - (unsigned __int8)PpmParkGranularity;
      if ( v11 > v15 )
        LOBYTE(v11) = v14 - PpmParkGranularity;
      *(_BYTE *)(v12 + 126) = v11;
      v4 -= (unsigned __int8)v11;
      v16 = v9;
      if ( (unsigned __int8)v9 > v15 )
        v16 = v14 - v13;
      v5 -= v16;
      *(_BYTE *)(v12 + 128) = v16;
      v68 = 0;
      v17 = v12 - (_QWORD)&v70;
      v62 = 0LL;
      v18 = (unsigned __int16 **)(v12 + 48);
      v65 = v12 - (_QWORD)&v70;
      v19 = 0LL;
      v63 = 0LL;
      v20 = 0LL;
      v57 = 0;
      v21 = 0;
      v64 = (_QWORD *)(v12 + 48);
      v22 = 0LL;
      do
      {
        v23 = *((_BYTE *)&v70 + v22 + v17 + 120);
        if ( v23 )
        {
          v24 = (v23 * (unsigned int)*((unsigned __int8 *)&v70 + v22) + 50) / 0x64;
          v25 = (v23 - (unsigned __int8)v24) % (unsigned __int8)PpmParkGranularity + v24;
          v26 = (v23 * (unsigned int)*((unsigned __int8 *)&v71 + v22) + 50) / 0x64;
          v27 = (v23 - (unsigned __int8)v26) % (unsigned __int8)PpmParkGranularity + v26;
          if ( v57 )
          {
            v35 = v25;
            if ( v25 >= v1 )
              v35 = v1;
            v25 = v35;
          }
          if ( v27 )
          {
            v28 = v27;
            if ( (unsigned __int8)PpmParkGranularity > v27 )
              v28 = PpmParkGranularity;
            v27 = v28;
          }
          v29 = v27;
          v30 = 0LL;
          if ( v25 >= v27 )
            v29 = v25;
          v66[0] = 0LL;
          v67 = *(_WORD *)(v12 + 4);
          v66[1] = *(v18 - 4);
          v69 = v29;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v59, v66) )
          {
            Prcb = KeGetPrcb(v59);
            if ( *(_BYTE *)(Prcb + 24316) )
              v30 |= *(_QWORD *)(Prcb + 200);
          }
          v18 = (unsigned __int16 **)v64;
          v20 = v30 | v63;
          v19 = *v64 | v62;
          v68 += v27;
          v17 = v65;
          *v64 = v30;
          v1 = v58;
          *(_BYTE *)(v12 + v22 + 124) = v69;
          v21 = v57;
          *(_BYTE *)(v12 + v22 + 122) = v27;
          v62 = v19;
          v63 = v20;
        }
        ++v21;
        ++v18;
        ++v22;
        v57 = v21;
        v64 = v18;
      }
      while ( v21 < 2 );
      if ( v19 != v20 )
        PpmEventParkNodeParkHintChanged(*(unsigned __int16 *)(v12 + 4), *(_QWORD *)(v12 + 8), v20);
      if ( !v68 )
      {
        v36 = PpmParkGranularity;
        *(_BYTE *)(v12 + 122) = PpmParkGranularity;
        if ( v36 <= *(_BYTE *)(v12 + 124) )
          v36 = *(_BYTE *)(v12 + 124);
        *(_BYTE *)(v12 + 124) = v36;
      }
      if ( PpmHeteroPolicy == 2 )
      {
        v37 = *(_BYTE *)(v12 + 122);
        v38 = 1;
        *(_BYTE *)(v12 + 131) = 0;
        *(_BYTE *)(v12 + 123) = 0;
        if ( (unsigned __int8)v37 > 1u )
          v38 = v37;
        *(_BYTE *)(v12 + 125) = 0;
        v39 = *(_BYTE *)(v12 + 124);
        *(_BYTE *)(v12 + 122) = v38;
        v40 = 1;
        if ( (unsigned __int8)v39 > 1u )
          v40 = v39;
        *(_BYTE *)(v12 + 124) = v40;
        *(_BYTE *)(v12 + 138) |= 4u;
      }
      else if ( PpmHeteroPolicy == 3 && *(_BYTE *)(v12 + 121) )
      {
        v41 = *(_BYTE *)(v12 + 123);
        v42 = 1;
        *(_BYTE *)(v12 + 130) = 0;
        *(_BYTE *)(v12 + 122) = 0;
        if ( (unsigned __int8)v41 > 1u )
          v42 = v41;
        *(_BYTE *)(v12 + 124) = 0;
        v43 = *(_BYTE *)(v12 + 125);
        *(_BYTE *)(v12 + 123) = v42;
        v44 = 1;
        if ( (unsigned __int8)v43 > 1u )
          v44 = v43;
        *(_BYTE *)(v12 + 125) = v44;
        *(_BYTE *)(v12 + 138) |= 2u;
      }
      v3 = PpmParkNumNodes;
      v8 = v56 + 1;
      LOBYTE(v9) = i;
      v7 = v61;
    }
    do
    {
LABEL_29:
      if ( !v4 )
        goto LABEL_30;
      v45 = 0;
    }
    while ( !v3 );
    while ( v4 )
    {
      v46 = PpmParkNodes + 264LL * v45;
      v47 = *(_BYTE *)(v46 + 6);
      if ( v47 )
      {
        v48 = PpmParkGranularity;
        v49 = *(_BYTE *)(v46 + 126) + PpmParkGranularity;
        if ( v49 < v47 )
        {
          *(_BYTE *)(v46 + 126) = v49;
          v4 -= v48;
        }
      }
      if ( ++v45 >= v3 )
        goto LABEL_29;
    }
LABEL_30:
    while ( v5 )
    {
      v50 = 0;
      if ( v3 )
      {
        while ( v5 )
        {
          v51 = PpmParkNodes + 264LL * v50;
          v52 = *(_BYTE *)(v51 + 6);
          if ( v52 )
          {
            v53 = PpmParkGranularity;
            v54 = PpmParkGranularity + *(_BYTE *)(v51 + 128);
            if ( v54 < v52 )
            {
              *(_BYTE *)(v51 + 128) = v54;
              v5 -= v53;
            }
          }
          if ( ++v50 >= v3 )
            goto LABEL_30;
        }
        break;
      }
    }
    if ( v3 )
    {
      do
      {
        v32 = PpmParkNodes + 264LL * v0;
        v33 = *(unsigned __int8 *)(v32 + 126);
        if ( *(unsigned __int8 *)(v32 + 127) != *(unsigned __int8 *)(v32 + 6) - (_DWORD)v33
          || *(unsigned __int8 *)(v32 + 129) != *(unsigned __int8 *)(v32 + 6) - *(unsigned __int8 *)(v32 + 128) )
        {
          LOBYTE(v7) = *(_BYTE *)(v32 + 128);
          PpmEventParkNodeCapChange(*(unsigned __int16 *)(v32 + 4), *(_QWORD *)(v32 + 8), v33, v7);
          v55 = *(_BYTE *)(v32 + 6) - *(_BYTE *)(v32 + 126);
          *(_BYTE *)(v32 + 129) = *(_BYTE *)(v32 + 6) - *(_BYTE *)(v32 + 128);
          *(_BYTE *)(v32 + 127) = v55;
        }
        ++v0;
      }
      while ( v0 < (unsigned int)PpmParkNumNodes );
    }
  }
}
