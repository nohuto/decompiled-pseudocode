/*
 * XREFs of PpmParkCalculateCoreParkingMask @ 0x14011F5C0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400BE260 (KeEnumerateNextProcessor.c)
 *     KeGetClockOwner @ 0x14011F280 (KeGetClockOwner.c)
 *     PpmParkComputeUnparkMask @ 0x1401BECE4 (PpmParkComputeUnparkMask.c)
 *     PpmEventTraceSoftCoreParkingSelection @ 0x1401BF764 (PpmEventTraceSoftCoreParkingSelection.c)
 *     KeInitializeEnumerationContextFromAffinity @ 0x1402A9C30 (KeInitializeEnumerationContextFromAffinity.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x1402ACCF8 (KeCpuSetQueryUnparkRecommendation.c)
 *     PpmParkChooseCoresToUnpark @ 0x1402F8278 (PpmParkChooseCoresToUnpark.c)
 *     PpmParkComputeDiff @ 0x1402F89BC (PpmParkComputeDiff.c)
 *     PpmEventLPICoreParking @ 0x1403024F8 (PpmEventLPICoreParking.c)
 *     PpmEventTraceCoreParkingSelection @ 0x140303140 (PpmEventTraceCoreParkingSelection.c)
 */

char PpmParkCalculateCoreParkingMask()
{
  unsigned int v0; // r15d
  __int64 *v1; // rbx
  unsigned int v2; // r12d
  __int64 v3; // rdi
  unsigned int v4; // ecx
  __int64 v5; // r14
  unsigned int v6; // esi
  unsigned int v7; // eax
  __int64 Prcb; // rax
  __int64 *v9; // rax
  unsigned int v10; // r10d
  __int64 v11; // r12
  __int64 v12; // r13
  int v13; // r14d
  int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // r14
  unsigned __int64 v17; // r14
  unsigned int v18; // r15d
  bool v19; // cc
  unsigned __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int8 v27; // al
  unsigned __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // r14d
  unsigned int v37; // r8d
  unsigned int v38; // r9d
  int v39; // eax
  unsigned int v40; // r15d
  unsigned int v41; // eax
  bool v42; // zf
  __int64 v43; // rbx
  int v44; // r9d
  unsigned int v45; // edx
  int v46; // r8d
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned int v49; // r9d
  unsigned int v50; // esi
  unsigned int v51; // eax
  int v52; // eax
  unsigned int v53; // r8d
  unsigned int v54; // r8d
  int v55; // ebx
  unsigned __int8 v56; // al
  unsigned __int64 v57; // r15
  unsigned __int64 v58; // rdx
  unsigned int v59; // r8d
  unsigned int v60; // eax
  unsigned int v61; // eax
  __int64 v62; // r9
  unsigned __int64 v63; // rcx
  unsigned int v64; // ecx
  int v65; // eax
  int v66; // ebx
  int v67; // edx
  __int64 v68; // r9
  char v69; // al
  unsigned int v70; // edx
  int v71; // eax
  char v73; // [rsp+30h] [rbp-D0h]
  __int64 v74; // [rsp+30h] [rbp-D0h]
  char v75; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v76; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v77; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v78[3]; // [rsp+70h] [rbp-90h] BYREF
  ULONG v79; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v80; // [rsp+8Ch] [rbp-74h]
  __int64 v81; // [rsp+90h] [rbp-70h]
  __int64 v82; // [rsp+98h] [rbp-68h]
  int v83; // [rsp+A0h] [rbp-60h]
  unsigned int v84; // [rsp+A4h] [rbp-5Ch]
  unsigned __int64 v85; // [rsp+A8h] [rbp-58h]
  __int64 v86; // [rsp+B0h] [rbp-50h]
  __int64 *v87; // [rsp+B8h] [rbp-48h]
  __int64 *v88; // [rsp+C0h] [rbp-40h]
  __int64 v89; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v90; // [rsp+D0h] [rbp-30h]
  __int64 v91; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int16 *v92[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v93; // [rsp+F0h] [rbp-10h]
  int v94; // [rsp+F2h] [rbp-Eh]
  __int16 v95; // [rsp+F6h] [rbp-Ah]
  __int64 v96[9]; // [rsp+F8h] [rbp-8h] BYREF
  int v97; // [rsp+150h] [rbp+50h] BYREF
  ULONG ClockOwner; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v99; // [rsp+160h] [rbp+60h]
  unsigned int v100; // [rsp+168h] [rbp+68h]

  memset(v78, 0, sizeof(v78));
  if ( !PpmIsParkingEnabled )
    return 1;
  v0 = 0;
  v80 = 0;
  v1 = &PpmCurrentProfile[341 * dword_140443ACC];
  v88 = v1;
  v2 = 100 * *((unsigned __int8 *)v1 + 164);
  v84 = v2;
  if ( !PpmParkNumNodes )
    goto LABEL_119;
  do
  {
    v3 = PpmParkNodes + 272LL * v0;
    v89 = v3;
    if ( (*(_BYTE *)(v3 + 146) & 1) != 0 )
      goto LABEL_118;
    v4 = *(unsigned __int8 *)(v3 + 135);
    v5 = 0LL;
    *(_QWORD *)(v3 + 40) = *(_QWORD *)(v3 + 32);
    v6 = v4;
    v7 = *(unsigned __int8 *)(v3 + 137);
    v94 = 0;
    v95 = 0;
    if ( (unsigned __int8)v4 >= (unsigned __int8)v7 )
      v6 = v7;
    v82 = 0LL;
    v99 = v6;
    v92[0] = 0LL;
    v83 = 2 - ((unsigned __int8)v4 < (unsigned __int8)v7);
    v93 = *(_WORD *)(v3 + 4);
    v92[1] = *(unsigned __int16 **)(v3 + 8);
    if ( !(unsigned int)KeEnumerateNextProcessor(&v79, v92) )
    {
      do
      {
        Prcb = KeGetPrcb(v79);
        if ( *(_DWORD *)(Prcb + 24248) >= v2 )
          v5 |= *(_QWORD *)(Prcb + 200);
      }
      while ( !(unsigned int)KeEnumerateNextProcessor(&v79, v92) );
      v1 = v88;
      v82 = v5;
    }
    v9 = (__int64 *)(v3 + 56);
    v100 = 0;
    v87 = (__int64 *)(v3 + 56);
    v10 = 0;
    v11 = 0LL;
    v86 = 0LL;
    do
    {
      v12 = *(v9 - 5);
      v13 = 0;
      v97 = 0;
      v81 = v12;
      if ( !v12 )
        break;
      if ( !PoSoftParkingAllowed )
      {
        v49 = *(unsigned __int8 *)(v11 + v3 + 128);
        v50 = v49;
        if ( !PpmPerfMaxOverrideEnabled )
        {
          v51 = *(unsigned __int8 *)(v11 + v3 + 138);
          if ( v49 <= v51 )
            v51 = *(unsigned __int8 *)(v11 + v3 + 128);
          v50 = v51
              + (unsigned __int8)PpmParkGranularity
              - 1
              - (v51 + (unsigned __int8)PpmParkGranularity - 1) % (unsigned __int8)PpmParkGranularity;
        }
        v52 = 0;
        if ( PpmCheckLatencyBoostActive )
        {
          v53 = (v49 * *((unsigned __int8 *)v1 + v11 + 119) + 50) / 0x64;
          v52 = 0;
          v54 = (v49 - v53) % (unsigned __int8)PpmParkGranularity + v53;
          if ( v50 < v54 )
          {
            v52 = 64;
            v50 = v54;
            v13 = 64;
            v97 = 64;
          }
        }
        v55 = v52;
        if ( !v10 && *(_BYTE *)(v3 + 139) )
        {
          v50 = *(unsigned __int8 *)(v3 + 128);
          v13 = v52 | 0x80;
          v97 = v52 | 0x80;
          v55 = v52 | 0x80;
        }
        *(_BYTE *)(v11 + v3 + 138) = v50;
        v56 = KeCpuSetQueryUnparkRecommendation(*(unsigned __int16 *)(v3 + 4), v12, &v76);
        v57 = v76;
        LODWORD(v58) = v56;
        if ( v56 )
        {
          if ( (unsigned __int8)PpmParkGranularity > 1u )
          {
            KeInitializeEnumerationContextFromAffinity(v78, *(unsigned __int16 *)(v3 + 4), v76);
            if ( !(unsigned int)KeEnumerateNextProcessor(&ClockOwner, v78) )
            {
              do
                v57 |= *(_QWORD *)(KeGetPrcb(ClockOwner) + 24920);
              while ( !(unsigned int)KeEnumerateNextProcessor(&ClockOwner, v78) );
              v76 = v57;
            }
            v58 = (0x101010101010101LL
                 * ((((v57 - ((v57 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v57 - ((v57 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                   + ((((v57 - ((v57 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                     + (((v57 - ((v57 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
          }
          v59 = *(unsigned __int8 *)(v11 + v3 + 128);
          v60 = v50 + v58;
          v50 = v59;
          v97 = v13 | 0x10;
          v55 = v13 | 0x10;
          if ( v60 < v59 )
            v50 = v60;
        }
        else
        {
          LOBYTE(v59) = *(_BYTE *)(v11 + v3 + 128);
        }
        v61 = *(unsigned __int8 *)(v11 + v3 + 130);
        if ( v50 < v61 )
        {
          v55 |= 4u;
          goto LABEL_110;
        }
        v61 = *(unsigned __int8 *)(v11 + v3 + 132);
        if ( v50 > v61 )
        {
          v55 |= 8u;
LABEL_110:
          v50 = v61;
          v97 = v55;
        }
        v62 = *v87;
        v63 = *v87 - (((unsigned __int64)*v87 >> 1) & 0x5555555555555555LL);
        v64 = (unsigned __int8)v59
            - ((unsigned int)((0x101010101010101LL
                             * (((v63 & 0x3333333333333333LL)
                               + ((v63 >> 2) & 0x3333333333333333LL)
                               + (((v63 & 0x3333333333333333LL) + ((v63 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24);
        if ( v64 < v50 )
        {
          v55 |= 0x10000u;
          v50 = v64;
          v97 = v55;
        }
        v65 = 0;
        if ( v99 < v50 )
        {
          v50 = v99;
          v97 = v83 | v55;
          v65 = 1;
        }
        v66 = v82;
        v67 = *(unsigned __int16 *)(v3 + 4);
        v74 = v62;
        v68 = *(_QWORD *)(v3 + 40);
        v99 -= v50;
        v69 = PpmParkChooseCoresToUnpark(v50, v67, v12, v68, v82, v57, v74, v3 + 32, v65, (__int64)&v97);
        v70 = v100;
        *(_BYTE *)(v11 + v3 + 143) = v69;
        PpmEventTraceCoreParkingSelection(v3, v70, v66, v57, v50, v97);
        goto LABEL_116;
      }
      v14 = 0x100000;
      v15 = *v9;
      if ( (unsigned __int8)PpmParkGranularity <= 1u )
      {
        v16 = v15;
      }
      else
      {
        v16 = 0LL;
        KeInitializeEnumerationContextFromAffinity(v78, *(unsigned __int16 *)(v3 + 4), v15);
        if ( !(unsigned int)KeEnumerateNextProcessor(&ClockOwner, v78) )
        {
          do
            v16 |= *(_QWORD *)(KeGetPrcb(ClockOwner) + 24920);
          while ( !(unsigned int)KeEnumerateNextProcessor(&ClockOwner, v78) );
          v6 = v99;
        }
      }
      v17 = v12 & v16;
      v77 = 0LL;
      v85 = v17;
      if ( v17 )
        v14 = 1114112;
      v97 = v14;
      v18 = v6;
      v19 = *(unsigned __int8 *)(v11 + v3 + 128)
          - ((unsigned int)((0x101010101010101LL
                           * ((((v17 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v17 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                             + ((((v17 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v17 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24) <= v6;
      LODWORD(v20) = 0;
      if ( v19 )
        v18 = *(unsigned __int8 *)(v11 + v3 + 128)
            - ((unsigned int)((0x101010101010101LL
                             * ((((v17 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v17 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                               + ((((v17 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                 + (((v17 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24);
      if ( !KiClockTimerPerCpu )
      {
        ClockOwner = KeGetClockOwner();
        v21 = KeGetPrcb(ClockOwner);
        v22 = *(unsigned __int16 *)(v3 + 4);
        if ( *(unsigned __int8 *)(v21 + 208) == (_WORD)v22 )
        {
          v23 = *(_QWORD *)(v21 + 200);
          if ( (v23 & v12) != 0 )
          {
            KeInitializeEnumerationContextFromAffinity(v78, v22, v23);
            if ( !(unsigned int)KeEnumerateNextProcessor(&ClockOwner, v78) )
            {
              v24 = v77;
              do
              {
                if ( (unsigned int)v20 >= v18 )
                  break;
                v25 = KeGetPrcb(ClockOwner);
                v26 = *(_QWORD *)(v25 + 200);
                if ( (v26 & v17) == 0 )
                {
                  if ( (unsigned __int8)PpmParkGranularity > 1u )
                    v26 = *(_QWORD *)(v25 + 24920);
                  v14 |= 0x100u;
                  v97 = v14;
                  v24 |= v26;
                  v20 = (0x101010101010101LL
                       * ((((v24 - ((v24 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((v24 - ((v24 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                         + ((((v24 - ((v24 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v24 - ((v24 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
                }
              }
              while ( !(unsigned int)KeEnumerateNextProcessor(&ClockOwner, v78) );
              v11 = v86;
              v12 = v81;
              v77 = v24;
              v3 = v89;
            }
          }
        }
      }
      v27 = KeCpuSetQueryUnparkRecommendation(*(unsigned __int16 *)(v3 + 4), v12, &v76);
      v28 = v76;
      v90 = v27;
      if ( v27 )
      {
        if ( (unsigned __int8)PpmParkGranularity > 1u )
        {
          KeInitializeEnumerationContextFromAffinity(v78, *(unsigned __int16 *)(v3 + 4), v76);
          if ( !(unsigned int)KeEnumerateNextProcessor(&ClockOwner, v78) )
          {
            do
              v28 |= *(_QWORD *)(KeGetPrcb(ClockOwner) + 24920);
            while ( !(unsigned int)KeEnumerateNextProcessor(&ClockOwner, v78) );
            v76 = v28;
          }
          v90 = (0x101010101010101LL
               * ((((v28 - ((v28 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v28 - ((v28 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                 + ((((v28 - ((v28 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v28 - ((v28 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
          v17 = v85;
        }
        KeInitializeEnumerationContextFromAffinity(v78, *(unsigned __int16 *)(v3 + 4), v28);
        while ( !(unsigned int)KeEnumerateNextProcessor(&ClockOwner, v78) && (unsigned int)v20 < v18 )
        {
          v29 = KeGetPrcb(ClockOwner);
          v30 = *(_QWORD *)(v29 + 200);
          if ( (v30 & v17) == 0 )
          {
            if ( (unsigned __int8)PpmParkGranularity > 1u )
              v30 = *(_QWORD *)(v29 + 24920);
            v14 |= 0x10u;
            v77 |= v30;
            v97 = v14;
            v20 = (0x101010101010101LL
                 * ((((v77 - ((v77 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v77 - ((v77 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                   + ((((v77 - ((v77 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                     + (((v77 - ((v77 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
          }
        }
      }
      KeInitializeEnumerationContextFromAffinity(v78, *(unsigned __int16 *)(v3 + 4), v81 & *(_QWORD *)(v3 + 40) & v82);
      if ( !(unsigned int)KeEnumerateNextProcessor(&ClockOwner, v78) )
      {
        v31 = v77;
        do
        {
          if ( (unsigned int)v20 >= v18 )
            break;
          v32 = KeGetPrcb(ClockOwner);
          v33 = *(_QWORD *)(v32 + 200);
          if ( (v33 & v17) == 0 )
          {
            if ( (unsigned __int8)PpmParkGranularity > 1u )
              v33 = *(_QWORD *)(v32 + 24920);
            v14 |= 0x20000u;
            v97 = v14;
            v31 |= v33;
            v20 = (0x101010101010101LL
                 * ((((v31 - ((v31 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v31 - ((v31 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                   + ((((v31 - ((v31 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                     + (((v31 - ((v31 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
          }
        }
        while ( !(unsigned int)KeEnumerateNextProcessor(&ClockOwner, v78) );
        v11 = v86;
        LOBYTE(v28) = v76;
        v77 = v31;
        v3 = v89;
      }
      v34 = *(unsigned __int8 *)(v11 + v3 + 130);
      if ( (unsigned int)v20 < v34 && (unsigned int)v20 < v18 )
      {
        v14 |= 4u;
        v97 = v14;
        if ( v34 >= v18 )
          v34 = v18;
        LODWORD(v20) = v34;
      }
      v35 = *(unsigned __int8 *)(v11 + v3 + 132);
      v36 = v18;
      if ( v18 > v35 && (unsigned int)v20 < v18 )
      {
        v14 |= 8u;
        v36 = *(unsigned __int8 *)(v11 + v3 + 132);
        v97 = v14;
        if ( v35 <= (unsigned int)v20 )
          v36 = v20;
      }
      if ( PpmPerfMaxOverrideEnabled )
      {
        v37 = *(unsigned __int8 *)(v11 + v3 + 128);
        v14 |= 0x40000u;
      }
      else
      {
        if ( v100 || !*(_BYTE *)(v3 + 139) )
        {
          v38 = *(unsigned __int8 *)(v11 + v3 + 138);
          v39 = *(unsigned __int8 *)(v11 + v3 + 128);
          if ( (unsigned __int8)v38 >= (unsigned __int8)v39 )
            v38 = *(unsigned __int8 *)(v11 + v3 + 128);
          v37 = v38;
          if ( PpmCheckLatencyBoostActive
            && (v39 * (unsigned int)*((unsigned __int8 *)v88 + v11 + 119) + 50) / 0x64 > v38 )
          {
            v14 |= 0x40u;
            v37 = (v39 * (unsigned int)*((unsigned __int8 *)v88 + v11 + 119) + 50) / 0x64;
            v97 = v14;
          }
          if ( (unsigned __int8)PpmParkGranularity > 1u )
            v37 = (unsigned __int8)PpmParkGranularity
                + v37
                - 1
                - ((unsigned __int8)PpmParkGranularity + v37 - 1) % (unsigned __int8)PpmParkGranularity;
          goto LABEL_79;
        }
        v37 = *(unsigned __int8 *)(v3 + 128);
        v14 |= 0x80u;
      }
      v97 = v14;
LABEL_79:
      v40 = v20;
      v41 = v37 + v90;
      *(_BYTE *)(v11 + v3 + 138) = v37;
      if ( v41 >= v36 )
        v41 = v36;
      if ( v41 > (unsigned int)v20 )
        v40 = v41;
      v99 -= v36;
      v42 = PpmParkSoftParkingEnabled == 0;
      *(_BYTE *)(v11 + v3 + 143) = v40;
      if ( v42 )
      {
        v36 = v40;
        v97 = v14 | 0x200000;
      }
      v43 = v81 & v82;
      PpmParkComputeUnparkMask(
        *(unsigned __int16 *)(v3 + 4),
        v81,
        v81 & *(_DWORD *)(v3 + 40),
        v81 & v82,
        v40,
        v36,
        v85,
        v77,
        (__int64)v96,
        (__int64)&v91,
        (__int64)&v97);
      LOBYTE(v44) = v36;
      v45 = v100;
      LOBYTE(v46) = v40;
      v47 = v91 | v96[0] | *(_QWORD *)(v3 + 32) & ~v81;
      v48 = v47 & ~v81;
      *(_QWORD *)(v3 + 32) = v47;
      v75 = v97;
      v73 = v77;
      LOBYTE(v47) = v85;
      *(_QWORD *)(v3 + 48) = v91 | v48;
      PpmEventTraceSoftCoreParkingSelection(v3, v45, v46, v44, v20, v47, v73, v43, v28, v75);
LABEL_116:
      ++v11;
      v10 = v100 + 1;
      v6 = v99;
      v9 = v87 + 1;
      v1 = v88;
      v100 = v10;
      v86 = v11;
      ++v87;
    }
    while ( v10 < 2 );
    v0 = v80;
    v2 = v84;
LABEL_118:
    v80 = ++v0;
  }
  while ( v0 < PpmParkNumNodes );
LABEL_119:
  PpmParkComputeDiff();
  if ( PpmParkLpiEngaged != (PpmParkLpiCap != 0) || (v71 = 0, PpmParkLpiCapChanged) )
    v71 = 1;
  PpmParkLpiEngaged = PpmParkLpiCap != 0;
  PpmParkLpiCapChanged = 0;
  if ( v71 )
    PpmEventLPICoreParking();
  return 1;
}
