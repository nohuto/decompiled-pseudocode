/*
 * XREFs of KiChooseTargetProcessor @ 0x1400691D0
 * Callers:
 *     KiDeferredReadyThread @ 0x140068290 (KiDeferredReadyThread.c)
 * Callees:
 *     MmGetNextNode @ 0x140080AF4 (MmGetNextNode.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140122D30 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiSelectIdleProcessor @ 0x14016D094 (KiSelectIdleProcessor.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiIsQosGroupingActive @ 0x1401BF2D4 (KiIsQosGroupingActive.c)
 *     KiIsQosGroupingClass @ 0x1401BF2F8 (KiIsQosGroupingClass.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiIsProcessorIdleSoftParked @ 0x1401BF3AC (KiIsProcessorIdleSoftParked.c)
 *     KiCanSelectSoftParkedProcessor @ 0x1401BF3BC (KiCanSelectSoftParkedProcessor.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     HvlNotifyLongSpinWait @ 0x140284ED0 (HvlNotifyLongSpinWait.c)
 *     KiBeginCounterAccumulation @ 0x1402AC33C (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x1402AC4A0 (KiEndCounterAccumulation.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AEF40 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiFindRankBiasedIdleSmtSet @ 0x1402AF018 (KiFindRankBiasedIdleSmtSet.c)
 *     KiSetVpThreadSystemWork @ 0x1402B04D0 (KiSetVpThreadSystemWork.c)
 *     KiSelectCandidateProcessor @ 0x1402B5B38 (KiSelectCandidateProcessor.c)
 */

__int64 __fastcall KiChooseTargetProcessor(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4, unsigned __int8 a5)
{
  __int64 v5; // r13
  __int16 v6; // r8
  char v7; // r10
  __int64 v8; // r11
  char v9; // r9
  __int64 v11; // rax
  __int64 v12; // r14
  unsigned __int64 *v13; // rdi
  unsigned __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int8 v18; // dl
  int v19; // ecx
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rsi
  _QWORD *v25; // r15
  unsigned __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // rax
  _QWORD *v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r15
  __int64 v33; // rbx
  __int64 v34; // rdx
  unsigned __int64 v35; // r14
  unsigned __int64 v36; // rax
  char v37; // si
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rax
  unsigned int v41; // ecx
  unsigned int v42; // edx
  __int64 v43; // r10
  __int64 v44; // r9
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  __int64 v47; // rax
  __int64 v48; // rcx
  _QWORD *i; // rcx
  unsigned __int64 v50; // rsi
  unsigned __int64 v51; // r8
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rax
  unsigned int v55; // ecx
  unsigned int v56; // edx
  _QWORD *v57; // rdx
  __int64 v58; // rax
  char v59; // al
  bool v60; // zf
  unsigned int v61; // ecx
  unsigned int v62; // eax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  char v66; // cl
  unsigned __int64 v67; // rax
  int v68; // edx
  __int64 v69; // rsi
  __int64 v70; // rcx
  __int16 v71; // ax
  __int64 v72; // rbx
  __int16 v73; // r14
  __int64 v74; // rsi
  __int64 v75; // r9
  __int64 v76; // rcx
  __int64 v77; // r14
  __int16 v78; // ax
  unsigned int v79; // r14d
  unsigned int NextNode; // eax
  __int64 v81; // rsi
  unsigned __int64 v82; // rbx
  __int64 v83; // rax
  char v84; // cl
  int v85; // edx
  __int64 v86; // rax
  __int64 v87; // rcx
  int v88; // eax
  __int64 v89; // r8
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v91; // ebx
  _DWORD *SchedulerAssist; // rcx
  int v93; // eax
  _DWORD *v94; // rcx
  int v95; // eax
  struct _KPRCB *v96; // rcx
  _DWORD *v97; // rdx
  int v98; // eax
  __int64 v99; // r13
  char CanSelectSoftParkedProcessor; // al
  __int64 v101; // r14
  unsigned __int8 *v102; // rdx
  __int64 v103; // rdi
  char *v104; // rsi
  __int64 v105; // rbx
  __int64 v106; // rcx
  __int64 v107; // rdx
  char v108; // r8
  int v109; // r10d
  unsigned int v110; // r11d
  __int64 v111; // rbx
  unsigned int v112; // edx
  __int64 v113; // rax
  char *v114; // r9
  __int64 v115; // rax
  _QWORD *v116; // rsi
  struct _KPRCB *v117; // rdi
  unsigned int v118; // ebx
  _DWORD *v119; // rcx
  int v120; // eax
  _DWORD *v121; // rcx
  int v122; // eax
  __int64 v123; // rcx
  _DWORD *v124; // rdx
  int v125; // eax
  __int64 result; // rax
  _DWORD *v127; // rbx
  struct _KPRCB *v128; // rcx
  _DWORD *v129; // r9
  int v130; // eax
  __int64 v131; // rax
  char v132; // [rsp+31h] [rbp-CFh]
  __int16 v133; // [rsp+32h] [rbp-CEh]
  __int64 v134; // [rsp+38h] [rbp-C8h]
  __int64 v136; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v137; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v138; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v139; // [rsp+60h] [rbp-A0h]
  __int64 v140; // [rsp+68h] [rbp-98h]
  __int64 v141; // [rsp+70h] [rbp-90h]
  __int64 v142; // [rsp+78h] [rbp-88h]
  int v143; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v144; // [rsp+88h] [rbp-78h]
  int v145; // [rsp+90h] [rbp-70h]
  int v146; // [rsp+94h] [rbp-6Ch]
  int v147; // [rsp+98h] [rbp-68h]
  int v148; // [rsp+9Ch] [rbp-64h]
  __int64 v149; // [rsp+A0h] [rbp-60h]
  _QWORD *v150; // [rsp+A8h] [rbp-58h]
  _BYTE v151[64]; // [rsp+B0h] [rbp-50h] BYREF

  v5 = *a3;
  v6 = *((_WORD *)a3 + 4);
  v7 = 0;
  v144 = a4;
  v8 = a2;
  v9 = a5;
  v132 = 0;
  v141 = 0LL;
  v142 = 0LL;
  v134 = v5;
  v133 = v6;
LABEL_3:
  while ( 2 )
  {
    while ( 2 )
    {
      v11 = *(unsigned int *)(v8 + 536);
      LODWORD(v11) = v11 & 0x7FFFFFFF;
      LOWORD(v142) = v6;
      v12 = KiProcessorBlock[v11];
      LOWORD(v11) = *(unsigned __int8 *)(a1 + 208);
      v149 = v12;
      if ( v6 == (_WORD)v11
        && (*(_BYTE *)(a1 + 11884) & 1) != 0
        && (*(_BYTE *)(v8 + 643) == 15 || *(_DWORD *)(v8 + 84) < (unsigned int)KiShortExecutionCycles) )
      {
        v13 = *(unsigned __int64 **)(a1 + 192);
        v14 = *v13;
        v15 = v5 & *v13;
        v138 = v15;
        v16 = v15;
        if ( v7 )
        {
          if ( v15 )
          {
LABEL_11:
            if ( (v16 & *(_QWORD *)(a1 + 24936)) != 0 )
              v15 = v16 & *(_QWORD *)(a1 + 24936);
            v17 = *(_QWORD *)(a1 + 24920);
            v138 = v15;
            if ( *(_QWORD *)(a1 + 200) == v17 )
              goto LABEL_24;
            if ( v9 )
            {
              if ( (unsigned __int8)KiFindRankBiasedIdleSmtSet(a1, &v138) )
                goto LABEL_21;
              v9 = a5;
              v7 = v132;
              v8 = a2;
            }
            v15 = v138 & v13[1];
            if ( v15 )
            {
              if ( !v9
                || (unsigned int)((0x101010101010101LL
                                 * ((((v14 - ((v14 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                   + (((v14 - ((v14 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                   + ((((v14 - ((v14 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                     + (((v14 - ((v14 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 >= KiPerfIsoEnabled )
              {
                goto LABEL_24;
              }
            }
            else if ( !v9 )
            {
              if ( (unsigned __int8)KiReduceByEffectiveIdleSmtSet(a1, &v138) )
              {
LABEL_21:
                v15 = v138;
              }
              else
              {
                v15 = v138;
LABEL_24:
                if ( (v15 & ~*(_QWORD *)(a1 + 24920)) != 0 )
                  v15 &= ~*(_QWORD *)(a1 + 24920);
                v138 = v15;
              }
              v18 = *(_BYTE *)(a1 + 208);
              v19 = *(_DWORD *)(a1 + 24916);
              if ( *(_BYTE *)(v12 + 208) == v18 && (*(_QWORD *)(a1 + 24928) & *(_QWORD *)(v12 + 200)) != 0LL )
                LOBYTE(v19) = *(_BYTE *)(v12 + 209);
              _BitScanForward64(&v20, __ROR8__(v15, v19));
              v145 = ((_BYTE)v20 + (_BYTE)v19) & 0x3F;
              v21 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v18 + v145]];
              goto LABEL_197;
            }
            goto LABEL_31;
          }
          v14 = v13[2] & v13[11];
          v15 = v5 & v14;
          v138 = v5 & v14;
          v16 = v5 & v14;
        }
        if ( !v16 )
          goto LABEL_31;
        goto LABEL_11;
      }
LABEL_31:
      v22 = *(unsigned int *)(v8 + 588);
      v21 = v12;
      v23 = *(_QWORD *)(v12 + 192);
      v141 = v134;
      v24 = KiProcessorBlock[v22];
      v140 = v24;
      v150 = *(_QWORD **)(v24 + 192);
      v25 = v150;
      if ( (_QWORD *)v23 != v150 )
        v21 = 0LL;
      v26 = *v150;
      v27 = v134 & *v150;
      v136 = v27;
      v28 = v27;
      if ( v7 )
      {
        if ( v27 )
          goto LABEL_37;
        v26 = v150[2] & v150[11];
        v27 = v134 & v26;
        v136 = v134 & v26;
        v28 = v134 & v26;
      }
      if ( !v28 )
        goto LABEL_148;
LABEL_37:
      if ( *(_QWORD *)(v24 + 200) != *(_QWORD *)(v24 + 24920) )
      {
        if ( v9 )
        {
          if ( (unsigned __int8)KiFindRankBiasedIdleSmtSet(v24, &v136) )
          {
LABEL_124:
            v27 = v136;
            goto LABEL_129;
          }
          v9 = a5;
        }
        v27 = v136;
        if ( (v136 & v25[1]) != 0 )
        {
          if ( v9
            && (unsigned int)((0x101010101010101LL
                             * ((((v26 - ((v26 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v26 - ((v26 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                               + ((((v26 - ((v26 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                 + (((v26 - ((v26 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 < KiPerfIsoEnabled )
          {
            goto LABEL_148;
          }
          v27 = v136 & v25[1];
          v136 = v27;
          goto LABEL_129;
        }
        if ( v9 )
          goto LABEL_148;
        v29 = *(_QWORD **)(a1 + 192);
        if ( v29 == v25 )
        {
          v27 = v136;
          v30 = v136 & v29[2];
          v32 = v136 & *(_QWORD *)(a1 + 24920) & ~*(_QWORD *)(a1 + 200);
          if ( v32 )
          {
            v31 = *(_QWORD *)(a1 + 24920) & ~*(_QWORD *)(a1 + 200);
            if ( (v30 & v31) == v31 && (*(_BYTE *)(a1 + 11884) & 1) == 0 && !*(_DWORD *)(a1 + 22808) )
            {
              v33 = *(_QWORD *)(a1 + 8);
              if ( !*(_BYTE *)(a1 + 32) )
              {
                _disable();
                *(_BYTE *)(a1 + 32) = 1;
                v34 = __rdtsc();
                v35 = v34 - *(_QWORD *)(a1 + 23488);
                v36 = v35 + *(unsigned int *)(v33 + 80);
                *(_QWORD *)(v33 + 72) += v35;
                *(_QWORD *)(a1 + 23488) = v34;
                v37 = *(_BYTE *)(v33 + 2);
                if ( v36 > 0xFFFFFFFF )
                  LODWORD(v36) = -1;
                *(_DWORD *)(v33 + 80) = v36;
                if ( (v37 & 0x3E) != 0 )
                {
                  if ( (v37 & 0x10) != 0 )
                  {
                    v34 = *(_QWORD *)(a1 + 23488) - *(_QWORD *)(a1 + 23496);
                    *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v33 + 124) + 23504) += v34;
                    v37 &= ~0x10u;
                    *(_QWORD *)(a1 + 23496) = 0LL;
                  }
                  if ( (v37 & 0x20) != 0 )
                  {
                    v38 = *(_QWORD *)(v33 + 1984);
                    if ( v38 )
                    {
                      v39 = *(_QWORD *)(a1 + 24176);
                      v40 = *(_QWORD *)(a1 + 24184);
                      if ( v39 && v40 )
                      {
                        if ( *(_BYTE *)(v40 + 100) )
                        {
                          v41 = *(_DWORD *)(v40 + 116);
                        }
                        else
                        {
                          v41 = *(_DWORD *)(v40 + 72);
                          if ( v41 >= *(_DWORD *)(v39 + 360) )
                            v41 = *(_DWORD *)(v39 + 360);
                        }
                      }
                      else
                      {
                        v41 = 100;
                      }
                      if ( v41 >= 0x4B )
                        v42 = 3;
                      else
                        v42 = v41 / 0x19;
                      v43 = *(unsigned __int8 *)(a1 + 24224);
                      v44 = v42;
                      v139 = 0LL;
                      *(_QWORD *)(v38 + 8 * (v43 + 2LL * v42)) += v35;
                      v34 = (unsigned int)KiTimelineBitmapTime;
                      v45 = *(_DWORD *)(v38 + 192);
                      if ( KiTimelineBitmapTime <= v45 )
                      {
                        v46 = v45 - KiTimelineBitmapTime;
                        if ( v46 < 0x20 )
                          *(_DWORD *)(v38 + 196) |= 1 << v46;
                      }
                      else
                      {
                        LODWORD(v139) = KiTimelineBitmapTime;
                        if ( KiTimelineBitmapTime - v45 >= 0x20 )
                          HIDWORD(v139) = 1;
                        else
                          HIDWORD(v139) = (*(_DWORD *)(v38 + 196) << (KiTimelineBitmapTime - v45)) | 1;
                        *(_QWORD *)(v38 + 192) = v139;
                      }
                      if ( !KiEfficiencyClassSystem && (*(_DWORD *)(v33 + 120) & 3) == 2 )
                      {
                        v34 = 2 * v44;
                        *(_QWORD *)(v38 + 16 * v44 + 8) += v35;
                      }
                      if ( *(_QWORD *)(v33 + 1928) )
                      {
                        *(_QWORD *)(v38 + 8 * (v43 + 16 + 2 * v44)) += v35;
                        v34 = *(_QWORD *)(*(_QWORD *)(v33 + 1928) + 1984LL) + 8 * (v43 + 8 + 2 * v44);
                        _InterlockedExchangeAdd64((volatile signed __int64 *)v34, v35);
                      }
                    }
                    v37 &= ~0x20u;
                  }
                  if ( (v37 & 0x40) != 0 )
                  {
                    if ( *(_QWORD *)(a1 + 25016) )
                    {
                      LOBYTE(v34) = 1;
                      KiSetVpThreadSystemWork(a1, v34);
                    }
                    v47 = *(_QWORD *)(v33 + 1520);
                    if ( v47 )
                      *(_BYTE *)(v47 + 64) = 0;
                    v37 &= ~0x40u;
                  }
                  if ( (v37 & 0x3E) != 0 )
                  {
                    v48 = *(_QWORD *)(v33 + 104);
                    if ( v48 )
                    {
                      for ( i = (_QWORD *)(*(unsigned int *)(a1 + 216) + v48); i; i = (_QWORD *)i[51] )
                        *i += v35;
                    }
                    if ( (*(_BYTE *)(v33 + 2) & 8) != 0
                      && (*(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL) & *(_QWORD *)(v33 + 576)) != *(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL) )
                    {
                      *(_QWORD *)(a1 + 23528) += v35;
                    }
                    if ( *(_BYTE *)(v33 + 125) )
                    {
                      if ( (*(_DWORD *)(v33 + 120) & 3) == 2 )
                        *(_QWORD *)(a1 + 23544) += v35;
                      else
                        *(_QWORD *)(a1 + 23536) += v35;
                    }
                    if ( *(_QWORD *)(v33 + 360) )
                      KiEndCounterAccumulation(v33);
                  }
                }
                v50 = __rdtsc();
                v51 = v50 - *(_QWORD *)(a1 + 23488);
                *(_QWORD *)(a1 + 23608) += v51;
                v52 = *(unsigned __int8 *)(v33 + 2);
                if ( (v52 & 0x20) != 0 )
                {
                  v53 = *(_QWORD *)(a1 + 24176);
                  v54 = *(_QWORD *)(a1 + 24184);
                  if ( v53 && v54 )
                  {
                    if ( *(_BYTE *)(v54 + 100) )
                    {
                      v55 = *(_DWORD *)(v54 + 116);
                    }
                    else
                    {
                      v55 = *(_DWORD *)(v54 + 72);
                      if ( v55 >= *(_DWORD *)(v53 + 360) )
                        v55 = *(_DWORD *)(v53 + 360);
                    }
                  }
                  else
                  {
                    v55 = 100;
                  }
                  if ( v55 >= 0x4B )
                    v56 = 3;
                  else
                    v56 = v55 / 0x19;
                  v57 = (_QWORD *)(a1 + 8 * (*(unsigned __int8 *)(a1 + 24224) + 2952LL + 2LL * v56));
                  *v57 += v51;
                  v52 = *(unsigned __int8 *)(v33 + 2);
                }
                if ( (v52 & 0x40) != 0 )
                {
                  if ( *(_QWORD *)(a1 + 25016) )
                    KiSetVpThreadSystemWork(a1, 0LL);
                  v58 = *(_QWORD *)(v33 + 1520);
                  if ( v58 )
                    *(_BYTE *)(v58 + 64) = 1;
                }
                *(_QWORD *)(a1 + 23488) = v50;
                v59 = *(_BYTE *)(v33 + 2);
                if ( (v59 & 0x10) != 0 )
                {
                  *(_QWORD *)(a1 + 23496) = v50;
                  v59 = *(_BYTE *)(v33 + 2);
                }
                if ( (v59 & 2) != 0 )
                  KiBeginCounterAccumulation(v33, 0LL);
                v60 = *(_BYTE *)(a1 + 6) == 0;
                *(_BYTE *)(a1 + 32) = 0;
                if ( !v60 )
                {
                  LOBYTE(v52) = 2;
                  *(_BYTE *)(a1 + 6) = 0;
                  HalRequestSoftwareInterrupt(v52);
                }
                _enable();
                LODWORD(v12) = v149;
                v24 = v140;
              }
              v61 = *(_DWORD *)(v33 + 80);
              v62 = *(_DWORD *)(v33 + 84);
              if ( v61 >= v62 || v62 - v61 < KiShortExecutionCycles )
              {
                v27 = v32;
                v136 = v32;
                goto LABEL_129;
              }
              goto LABEL_124;
            }
          }
        }
      }
LABEL_129:
      if ( (v27 & *(_QWORD *)(v24 + 200)) != 0 )
      {
        v21 = v24;
      }
      else if ( !v21 || (*(_QWORD *)(v21 + 200) & v27) == 0 )
      {
        v63 = v27 & *(_QWORD *)(v24 + 24920);
        if ( v63 )
        {
          v27 &= *(_QWORD *)(v24 + 24920);
          v136 = v63;
        }
        else if ( v21 && (v64 = v27 & *(_QWORD *)(v21 + 24920)) != 0 )
        {
          v27 &= *(_QWORD *)(v21 + 24920);
          v136 = v64;
        }
        else if ( (KiCacheAwareScheduling & 1) != 0 )
        {
          v65 = v27 & *(_QWORD *)(v24 + 24936);
          if ( v65 )
          {
            v27 &= *(_QWORD *)(v24 + 24936);
            v136 = v65;
          }
          else if ( v21 )
          {
            if ( (v27 & *(_QWORD *)(v21 + 24936)) != 0 )
              v27 &= *(_QWORD *)(v21 + 24936);
            v136 = v27;
          }
        }
        v66 = *(_BYTE *)(v24 + 209);
        _BitScanForward64(&v67, __ROR8__(v27, v66));
        v68 = *(unsigned __int8 *)(v24 + 208) << 6;
        v146 = ((_BYTE)v67 + v66) & 0x3F;
        v21 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v146 + v68]];
      }
      if ( v21 )
        goto LABEL_196;
      v25 = v150;
      v9 = a5;
LABEL_148:
      v69 = v25[17];
      v70 = v134;
      v71 = v133;
      v72 = v134 & ~v69;
      v141 = v72;
      if ( (_QWORD *)v23 != v25 && v72 && *(_WORD *)(v23 + 144) == v133 )
      {
        v21 = KiSelectIdleProcessor(v134, a1, v23, v12, v9, v132);
        if ( v21 )
          goto LABEL_196;
        v70 = v134;
        v71 = v133;
      }
      v73 = v142;
      if ( (_WORD)v142 == *(_WORD *)(v23 + 144) )
        v72 = v70 & ~(v69 | *(_QWORD *)(v23 + 136));
      v74 = *(_QWORD *)(a1 + 192);
      v141 = v72;
      if ( (_QWORD *)v74 != v25 && v74 != v23 )
      {
        if ( v72 )
        {
          if ( *(_WORD *)(v74 + 144) == v71 )
          {
            v21 = KiSelectIdleProcessor(v70, a1, v74, a1, a5, v132);
            if ( v21 )
            {
LABEL_196:
              v5 = v134;
              goto LABEL_197;
            }
          }
        }
      }
      if ( v73 == *(_WORD *)(v74 + 144) )
        v75 = v72 & ~*(_QWORD *)(v74 + 136);
      else
        v75 = v72;
      v76 = *((unsigned __int8 *)v25 + 146);
      v77 = (1LL << v76) | (1LL << *(_WORD *)(v74 + 146));
      v143 = 0;
      v78 = *(_WORD *)(v23 + 146);
      v5 = v134;
      v79 = v25[16] & ~(v77 | (1 << v78));
LABEL_164:
      v141 = v75;
      while ( v75 )
      {
        NextNode = MmGetNextNode(*((unsigned __int16 *)v25 + 73), &v143);
        v76 = 0xFFFFFFFFLL;
        if ( NextNode == -1 )
          break;
        v76 = v79;
        if ( _bittest64(&v76, NextNode) )
        {
          v81 = KeNodeBlock[NextNode];
          if ( (*(_QWORD *)(v81 + 136) & v134) == 0 )
            goto LABEL_195;
          v82 = *(_QWORD *)v81;
          v83 = KiProcessorBlock[*(unsigned __int16 *)(v81 + 108)];
          v84 = *(_BYTE *)(v83 + 209);
          v85 = *(unsigned __int8 *)(v83 + 208);
          _BitScanForward64((unsigned __int64 *)&v83, __ROR8__(*(_QWORD *)(v81 + 136) & v134, v84));
          v147 = ((_BYTE)v83 + v84) & 0x3F;
          v21 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v147 + (v85 << 6)]];
          v86 = v134 & v82;
          v76 = v134 & v82;
          v137 = v134 & v82;
          if ( !v132 )
            goto LABEL_172;
          if ( !v86 )
          {
            v82 = *(_QWORD *)(v81 + 16) & *(_QWORD *)(v81 + 88);
            v86 = v134 & v82;
            v137 = v134 & v82;
            v76 = v134 & v82;
LABEL_172:
            if ( !v76 )
              goto LABEL_194;
          }
          v76 = *(_QWORD *)(v21 + 24920);
          if ( *(_QWORD *)(v21 + 200) == v76 )
            goto LABEL_185;
          v76 = a5;
          if ( a5 )
          {
            if ( (unsigned __int8)KiFindRankBiasedIdleSmtSet(v21, &v137) )
            {
              v86 = v137;
              goto LABEL_185;
            }
            v76 = a5;
          }
          v86 = v137;
          if ( (v137 & *(_QWORD *)(v81 + 8)) != 0 )
          {
            if ( !(_BYTE)v76
              || (v76 = 0x101010101010101LL,
                  (unsigned int)((0x101010101010101LL
                                * ((((v82 - ((v82 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                  + (((v82 - ((v82 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                  + ((((v82 - ((v82 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                    + (((v82 - ((v82 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 >= KiPerfIsoEnabled) )
            {
              v86 = v137 & *(_QWORD *)(v81 + 8);
              v137 = v86;
              goto LABEL_185;
            }
LABEL_194:
            v75 = v141;
LABEL_195:
            v75 &= ~*(_QWORD *)(v81 + 136);
            goto LABEL_164;
          }
          if ( (_BYTE)v76 )
            goto LABEL_194;
          if ( *(_QWORD *)(a1 + 192) == v81 )
          {
            KiReduceByEffectiveIdleSmtSet(a1, &v137);
            v86 = v137;
          }
LABEL_185:
          if ( (v86 & *(_QWORD *)(v21 + 200)) == 0 )
          {
            v87 = v86 & *(_QWORD *)(v21 + 24920);
            if ( v87 )
            {
              v86 &= *(_QWORD *)(v21 + 24920);
              v137 = v87;
            }
            else if ( (KiCacheAwareScheduling & 1) != 0 )
            {
              if ( (v86 & *(_QWORD *)(v21 + 24936)) != 0 )
                v86 &= *(_QWORD *)(v21 + 24936);
              v137 = v86;
            }
            v76 = *(unsigned __int8 *)(v21 + 209);
            _BitScanForward64((unsigned __int64 *)&v86, __ROR8__(v86, v76));
            v88 = ((_BYTE)v76 + (_BYTE)v86) & 0x3F;
            v89 = v88 + (*(unsigned __int8 *)(v21 + 208) << 6);
            v148 = v88;
            v21 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v89]];
          }
          if ( !v21 )
            goto LABEL_194;
LABEL_197:
          CurrentPrcb = KeGetCurrentPrcb();
          v91 = 0;
          while ( 1 )
          {
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v93 = SchedulerAssist[5];
                SchedulerAssist[5] = v93 + 1;
                if ( v93 == -1 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v21 + 48), 0LL) )
              break;
            v94 = CurrentPrcb->SchedulerAssist;
            if ( v94 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v95 = v94[5] - 1;
                v94[5] = v95;
                if ( !v95 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            do
            {
              if ( (++v91 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v94) )
              {
                HvlNotifyLongSpinWait(v91);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(_QWORD *)(v21 + 48) );
          }
          if ( !*(_BYTE *)(v21 + 35) || (v7 = v132) != 0 && (unsigned int)KiIsProcessorIdleSoftParked(v21) )
          {
            result = v21;
            *v144 = 1;
            return result;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 48), 0LL);
          v96 = KeGetCurrentPrcb();
          v9 = a5;
          v8 = a2;
          v6 = v133;
          v97 = v96->SchedulerAssist;
          if ( v97 )
          {
            if ( v96->NestingLevel <= 1u )
            {
              v98 = v97[5] - 1;
              v97[5] = v98;
              if ( !v98 )
                goto LABEL_220;
            }
          }
          goto LABEL_3;
        }
      }
      v99 = v140;
      if ( PoSoftParkingAllowed )
      {
        if ( !v132 )
        {
          CanSelectSoftParkedProcessor = KiCanSelectSoftParkedProcessor(v76, v140);
          v9 = a5;
          v7 = CanSelectSoftParkedProcessor;
          v8 = a2;
          v6 = v133;
          v132 = CanSelectSoftParkedProcessor;
          if ( CanSelectSoftParkedProcessor )
          {
            v5 = v134;
            continue;
          }
        }
      }
      break;
    }
    v101 = v134 & *(_QWORD *)(v99 + 24896);
    if ( ((v101 - 1) & v101) == 0 )
      goto LABEL_243;
    v102 = *(unsigned __int8 **)(v99 + 24904);
    v103 = v102[593];
    v104 = &v151[v103];
    memmove(&v151[v103], v102 + 528, v102[592]);
    v105 = *(_QWORD *)(*(_QWORD *)(v99 + 192) + 344LL);
    if ( (unsigned __int8)KiIsQosGroupingActive(v106, a2, *(unsigned __int8 *)(a2 + 195)) )
    {
      v111 = v101 & v105;
      if ( v111 )
      {
        if ( (unsigned __int8)KiIsQosGroupingClass(*(_DWORD *)(v107 + 120) & 3) )
        {
          v112 = v103;
          if ( (unsigned int)v103 >= v110 )
            goto LABEL_241;
          v113 = __ROL8__(1LL, v103);
          v114 = &v151[v103];
          do
          {
            if ( (v111 & v113) != 0 && *v114 < v108 )
            {
              v108 = *v114;
              v109 = v112;
            }
            ++v112;
            v113 = __ROL8__(v113, 1);
            ++v114;
          }
          while ( v112 < v110 );
          if ( v109 >= 0 )
            goto LABEL_242;
        }
      }
    }
    if ( (unsigned int)v103 < v110 )
    {
      v115 = __ROL8__(1LL, v103);
      do
      {
        if ( (v101 & v115) != 0 && *v104 < v108 )
        {
          v108 = *v104;
          v109 = v103;
        }
        LODWORD(v103) = v103 + 1;
        v115 = __ROL8__(v115, 1);
        ++v104;
      }
      while ( (unsigned int)v103 < v110 );
    }
LABEL_241:
    if ( v109 >= 0 )
LABEL_242:
      v99 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v99 + 208) + v109]];
LABEL_243:
    v116 = *(_QWORD **)(v99 + 192);
    v117 = KeGetCurrentPrcb();
    v118 = 0;
    while ( 1 )
    {
      v119 = v117->SchedulerAssist;
      if ( v119 )
      {
        if ( v117->NestingLevel <= 1u )
        {
          v120 = v119[5];
          v119[5] = v120 + 1;
          if ( v120 == -1 )
            KiRemoveSystemWorkPriorityKick(v117);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v99 + 48), 0LL) )
        break;
      v121 = v117->SchedulerAssist;
      if ( v121 )
      {
        if ( v117->NestingLevel <= 1u )
        {
          v122 = v121[5] - 1;
          v121[5] = v122;
          if ( !v122 )
            KiRemoveSystemWorkPriorityKick(v117);
        }
      }
      do
      {
        if ( (++v118 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v121) )
        {
          HvlNotifyLongSpinWait(v118);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(v99 + 48) );
    }
    v7 = v132;
    if ( v132 )
      v123 = v116[2] & v116[11];
    else
      v123 = 0LL;
    v9 = a5;
    if ( !a5 && ((v123 | *v116) & v134) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v99 + 48), 0LL);
      v96 = KeGetCurrentPrcb();
      v5 = v134;
      v8 = a2;
      v6 = v133;
      v124 = v96->SchedulerAssist;
      if ( v124 )
      {
        if ( v96->NestingLevel <= 1u )
        {
          v125 = v124[5] - 1;
          v124[5] = v125;
          if ( !v125 )
          {
LABEL_220:
            KiRemoveSystemWorkPriorityKick(v96);
            v9 = a5;
            v7 = v132;
            v8 = a2;
            v6 = v133;
          }
        }
      }
      continue;
    }
    break;
  }
  v127 = v144;
  *v144 = 0;
  if ( (*(_BYTE *)(v99 + 35) & 2) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v99 + 48), 0LL);
    v128 = KeGetCurrentPrcb();
    v129 = v128->SchedulerAssist;
    if ( v129 )
    {
      if ( v128->NestingLevel <= 1u )
      {
        v130 = v129[5] - 1;
        v129[5] = v130;
        if ( !v130 )
          KiRemoveSystemWorkPriorityKick(v128);
      }
    }
    v131 = KiSelectCandidateProcessor(v99, a2, -1LL);
    v99 = v131;
    if ( !a5 && (*(_BYTE *)(v131 + 35) & 1) == 0 )
      *v127 = 1;
  }
  return v99;
}
