/*
 * XREFs of KiChooseTargetProcessor @ 0x1400C4310
 * Callers:
 *     KiDeferredReadyThread @ 0x1400C32D0 (KiDeferredReadyThread.c)
 * Callees:
 *     MmGetNextNode @ 0x140061FC0 (MmGetNextNode.c)
 *     PpmPerfGetCurrentFrequency @ 0x1400C82A0 (PpmPerfGetCurrentFrequency.c)
 *     KiEndThreadAccountingPeriod @ 0x1400D20B0 (KiEndThreadAccountingPeriod.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140120680 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiSelectIdleProcessor @ 0x140166768 (KiSelectIdleProcessor.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     KiBeginCounterAccumulation @ 0x140295FFC (KiBeginCounterAccumulation.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiFindRankBiasedIdleSmtSet @ 0x14029874C (KiFindRankBiasedIdleSmtSet.c)
 *     KiSetVpThreadSystemWork @ 0x140299950 (KiSetVpThreadSystemWork.c)
 *     KiSelectCandidateProcessor @ 0x14029D55C (KiSelectCandidateProcessor.c)
 */

__int64 __fastcall KiChooseTargetProcessor(__int64 a1, unsigned __int64 a2, __int64 *a3, _DWORD *a4, char a5)
{
  __int64 v5; // r10
  unsigned __int64 v6; // rbx
  __int16 v7; // r11
  char v9; // r9
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // r10
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 *v17; // rsi
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // r8
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned int v21; // esi
  _DWORD *SchedulerAssist; // rcx
  __int64 result; // rax
  unsigned __int64 *v24; // rdi
  unsigned __int64 v25; // rsi
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int8 v29; // dl
  int v30; // ecx
  unsigned __int64 v31; // rax
  int v32; // ebx
  __int64 v33; // r14
  __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // r13
  __int64 v37; // r11
  unsigned int v38; // r14d
  __int64 v39; // r13
  unsigned __int8 *v40; // rdx
  __int64 v41; // rsi
  int v42; // ebx
  char *v43; // r14
  int v44; // r9d
  __int64 v45; // rax
  struct _KPRCB *v46; // r14
  _QWORD *v47; // r12
  unsigned int v48; // esi
  _DWORD *v49; // rcx
  _DWORD *v50; // rsi
  __int64 v51; // rcx
  unsigned __int64 v52; // r11
  __int64 v53; // rbx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // rcx
  bool v57; // zf
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // r12
  __int64 v60; // rcx
  unsigned int CurrentFrequency; // edx
  __int64 v62; // r9
  unsigned int v63; // edx
  char v64; // al
  unsigned int v65; // ecx
  unsigned int v66; // eax
  unsigned __int64 v67; // rax
  char v68; // cl
  unsigned __int64 v69; // rax
  _DWORD *v70; // rcx
  _DWORD *v71; // rcx
  unsigned int NextNode; // eax
  __int64 v73; // r10
  __int64 v74; // rcx
  __int64 v75; // r12
  __int64 v76; // rax
  char v77; // cl
  int v78; // edx
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // r9
  struct _KPRCB *v82; // rcx
  _DWORD *v83; // rcx
  _DWORD *v84; // rcx
  char v85; // al
  unsigned __int64 v86; // rax
  char v87; // cl
  unsigned __int64 v88; // rax
  struct _KPRCB *v89; // rcx
  char RankBiasedIdleSmtSet; // al
  __int64 v91; // rax
  char v92; // al
  unsigned __int64 v93; // rcx
  int v94; // eax
  int v95; // eax
  int v96; // eax
  int v97; // eax
  int v98; // eax
  int v99; // eax
  int v100; // eax
  int v101; // eax
  struct _KPRCB *v102; // rcx
  _DWORD *v103; // rdx
  int v104; // eax
  __int64 v105; // rax
  __int16 v106; // [rsp+32h] [rbp-9Fh]
  __int64 v107; // [rsp+38h] [rbp-99h]
  __int64 v108; // [rsp+40h] [rbp-91h]
  unsigned __int64 v109; // [rsp+40h] [rbp-91h]
  __int64 v110; // [rsp+48h] [rbp-89h]
  unsigned __int64 v111; // [rsp+48h] [rbp-89h]
  __int64 v112; // [rsp+48h] [rbp-89h]
  __int64 v113; // [rsp+50h] [rbp-81h] BYREF
  unsigned __int64 v114; // [rsp+58h] [rbp-79h] BYREF
  unsigned __int64 v115; // [rsp+60h] [rbp-71h] BYREF
  unsigned __int64 v116; // [rsp+68h] [rbp-69h]
  int v117; // [rsp+70h] [rbp-61h] BYREF
  _DWORD *v118; // [rsp+78h] [rbp-59h]
  int v119; // [rsp+80h] [rbp-51h]
  int v120; // [rsp+84h] [rbp-4Dh]
  int v121; // [rsp+88h] [rbp-49h]
  int v122; // [rsp+8Ch] [rbp-45h]
  _BYTE v123[64]; // [rsp+90h] [rbp-41h] BYREF

  v5 = *a3;
  v6 = a2;
  v7 = *((_WORD *)a3 + 4);
  v118 = a4;
  v9 = a5;
  v116 = a2;
  v107 = v5;
  v106 = v7;
  while ( 1 )
  {
LABEL_2:
    v10 = *(unsigned int *)(v6 + 536);
    LODWORD(v10) = v10 & 0x7FFFFFFF;
    v11 = KiProcessorBlock[v10];
    if ( v7 == *(unsigned __int8 *)(a1 + 208)
      && (*(_BYTE *)(a1 + 11884) & 1) != 0
      && (*(_BYTE *)(v6 + 643) == 15 || *(_DWORD *)(v6 + 84) < (unsigned int)KiShortExecutionCycles) )
    {
      v24 = *(unsigned __int64 **)(a1 + 192);
      v25 = *v24;
      v26 = v5 & *v24;
      v113 = v26;
      if ( v26 )
      {
        v27 = v26 & *(_QWORD *)(a1 + 24936);
        if ( v27 )
        {
          v26 &= *(_QWORD *)(a1 + 24936);
          v113 = v27;
        }
        if ( *(_QWORD *)(a1 + 200) == *(_QWORD *)(a1 + 24920) )
          goto LABEL_32;
        if ( v9 )
        {
          if ( (unsigned __int8)KiFindRankBiasedIdleSmtSet(a1, &v113, v26) )
            goto LABEL_144;
          v9 = a5;
          v7 = v106;
        }
        v26 = v113 & v24[1];
        if ( v26 )
        {
          if ( !v9
            || (unsigned int)((0x101010101010101LL
                             * ((((v25 - ((v25 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v25 - ((v25 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                               + ((((v25 - ((v25 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                 + (((v25 - ((v25 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 >= KiPerfIsoEnabled )
          {
            v113 &= v24[1];
            goto LABEL_32;
          }
        }
        else if ( !v9 )
        {
          if ( (unsigned __int8)KiReduceByEffectiveIdleSmtSet(a1, &v113) )
          {
LABEL_144:
            v26 = v113;
LABEL_34:
            v29 = *(_BYTE *)(a1 + 208);
            v30 = *(_DWORD *)(a1 + 24916);
            if ( *(_BYTE *)(v11 + 208) == v29 && (*(_QWORD *)(a1 + 24928) & *(_QWORD *)(v11 + 200)) != 0LL )
              LOBYTE(v30) = *(_BYTE *)(v11 + 209);
            v19 = __ROR8__(v26, v30);
            _BitScanForward64(&v31, v19);
            a2 = v29 << 6;
            v119 = KiProcessorNumberToIndexMappingTable[(unsigned int)a2 + (((_BYTE)v31 + (_BYTE)v30) & 0x3F)];
            v15 = KiProcessorBlock[v119];
            goto LABEL_15;
          }
          v26 = v113;
LABEL_32:
          v28 = v26 & ~*(_QWORD *)(a1 + 24920);
          if ( v28 )
          {
            v26 &= ~*(_QWORD *)(a1 + 24920);
            v113 = v28;
          }
          goto LABEL_34;
        }
      }
    }
    v12 = *(unsigned int *)(v6 + 588);
    v13 = *(_QWORD *)(v11 + 192);
    v14 = v11;
    v108 = v13;
    v15 = 0LL;
    v16 = KiProcessorBlock[v12];
    v17 = *(__int64 **)(v16 + 192);
    if ( (__int64 *)v13 != v17 )
      v14 = 0LL;
    v18 = *v17;
    v19 = v107 & *v17;
    v114 = v19;
    if ( !v19 )
      goto LABEL_14;
    if ( *(_QWORD *)(v16 + 200) != *(_QWORD *)(v16 + 24920) )
    {
      if ( v9 )
      {
        RankBiasedIdleSmtSet = KiFindRankBiasedIdleSmtSet(v16, &v114, v19);
        v13 = v108;
        v9 = a5;
        if ( RankBiasedIdleSmtSet )
          goto LABEL_86;
        v7 = v106;
      }
      v19 = v114;
      a2 = v114 & v17[1];
      if ( a2 )
      {
        if ( v9
          && (unsigned int)((0x101010101010101LL
                           * ((((v18 - ((v18 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v18 - ((v18 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                             + ((((v18 - ((v18 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v18 - ((v18 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 < KiPerfIsoEnabled )
        {
          goto LABEL_38;
        }
        v19 = v114 & v17[1];
        v114 = v19;
        goto LABEL_12;
      }
      if ( v9 )
        goto LABEL_38;
      a2 = *(_QWORD *)(a1 + 192);
      if ( (__int64 *)a2 == v17 )
      {
        v19 = v114;
        a2 = v114 & *(_QWORD *)(a2 + 16);
        v52 = v114 & *(_QWORD *)(a1 + 24920) & ~*(_QWORD *)(a1 + 200);
        v111 = v52;
        if ( v52 )
        {
          v51 = *(_QWORD *)(a1 + 24920) & ~*(_QWORD *)(a1 + 200);
          if ( (a2 & v51) == v51 && (*(_BYTE *)(a1 + 11884) & 1) == 0 && !*(_DWORD *)(a1 + 22808) )
          {
            v53 = *(_QWORD *)(a1 + 8);
            if ( !*(_BYTE *)(a1 + 32) )
            {
              _disable();
              *(_BYTE *)(a1 + 32) = 1;
              v54 = __rdtsc();
              v55 = v54 - *(_QWORD *)(a1 + 23488);
              v56 = v55 + *(unsigned int *)(v53 + 80);
              *(_QWORD *)(v53 + 72) += v55;
              if ( v56 > 0xFFFFFFFF )
                LODWORD(v56) = -1;
              *(_QWORD *)(a1 + 23488) = v54;
              v57 = (*(_BYTE *)(v53 + 2) & 0x3E) == 0;
              *(_DWORD *)(v53 + 80) = v56;
              if ( !v57 )
              {
                KiEndThreadAccountingPeriod(a1, v53);
                v13 = v108;
                v52 = v111;
              }
              v58 = __rdtsc();
              a2 = (unsigned __int64)HIDWORD(v58) << 32;
              v59 = v58;
              *(_QWORD *)(a1 + 23608) += v58 - *(_QWORD *)(a1 + 23488);
              v60 = *(unsigned __int8 *)(v53 + 2);
              if ( (v60 & 0x20) != 0 )
              {
                CurrentFrequency = PpmPerfGetCurrentFrequency(a1, 0LL);
                if ( CurrentFrequency < 0x4B )
                  v63 = CurrentFrequency / 0x19;
                else
                  v63 = 3;
                a2 = a1 + 8 * (*(unsigned __int8 *)(a1 + 24224) + 2952LL + 2LL * v63);
                *(_QWORD *)a2 += v62;
                v60 = *(unsigned __int8 *)(v53 + 2);
              }
              if ( (v60 & 0x40) != 0 )
              {
                if ( *(_QWORD *)(a1 + 25016) )
                {
                  KiSetVpThreadSystemWork(a1, 0LL);
                  v13 = v108;
                  v52 = v111;
                }
                v91 = *(_QWORD *)(v53 + 1512);
                if ( v91 )
                  *(_BYTE *)(v91 + 64) = 1;
              }
              *(_QWORD *)(a1 + 23488) = v59;
              v64 = *(_BYTE *)(v53 + 2);
              if ( (v64 & 0x10) != 0 )
              {
                *(_QWORD *)(a1 + 23496) = v59;
                v64 = *(_BYTE *)(v53 + 2);
              }
              if ( (v64 & 2) != 0 )
              {
                KiBeginCounterAccumulation(v53, 0LL);
                v13 = v108;
                v52 = v111;
              }
              v57 = *(_BYTE *)(a1 + 6) == 0;
              *(_BYTE *)(a1 + 32) = 0;
              if ( !v57 )
              {
                LOBYTE(v60) = 2;
                *(_BYTE *)(a1 + 6) = 0;
                HalRequestSoftwareInterrupt(v60);
                v13 = v108;
                v52 = v111;
              }
              _enable();
              v9 = a5;
            }
            v65 = *(_DWORD *)(v53 + 80);
            v66 = *(_DWORD *)(v53 + 84);
            if ( v65 < v66 && v66 - v65 >= KiShortExecutionCycles )
            {
LABEL_86:
              v19 = v114;
              v7 = v106;
              goto LABEL_12;
            }
            v19 = v52;
            v114 = v52;
          }
        }
        v7 = v106;
      }
    }
LABEL_12:
    if ( (v19 & *(_QWORD *)(v16 + 200)) != 0 )
    {
      v15 = v16;
    }
    else if ( v14 && (v19 & *(_QWORD *)(v14 + 200)) != 0 )
    {
      v15 = v14;
    }
    else
    {
      v67 = v19 & *(_QWORD *)(v16 + 24920);
      if ( v67 || v14 && (v67 = v19 & *(_QWORD *)(v14 + 24920)) != 0 )
      {
        v114 = v67;
        v19 = v67;
      }
      v68 = *(_BYTE *)(v16 + 209);
      v19 = __ROR8__(v19, v68);
      _BitScanForward64(&v69, v19);
      a2 = *(unsigned __int8 *)(v16 + 208) << 6;
      v120 = KiProcessorNumberToIndexMappingTable[(unsigned int)a2 + (((_BYTE)v69 + v68) & 0x3F)];
      v15 = KiProcessorBlock[v120];
    }
LABEL_14:
    if ( v15 )
      goto LABEL_15;
LABEL_38:
    v32 = v107;
    v33 = v107 & ~v17[17];
    if ( (__int64 *)v13 != v17 && v33 )
    {
      if ( v7 != *(_WORD *)(v13 + 144) )
      {
LABEL_156:
        v34 = v33;
        goto LABEL_41;
      }
      v15 = KiSelectIdleProcessor(v107, a1, v13, v11, v9);
      if ( v15 )
        goto LABEL_15;
      v13 = v108;
      v7 = v106;
      v32 = v107;
    }
    if ( v7 != *(_WORD *)(v13 + 144) )
      goto LABEL_156;
    v34 = v33 & ~*(_QWORD *)(v13 + 136);
LABEL_41:
    v35 = *(_QWORD *)(a1 + 192);
    v110 = v35;
    if ( (__int64 *)v35 == v17 || v35 == v13 || !v34 )
      goto LABEL_42;
    if ( v7 != *(_WORD *)(v35 + 144) )
      goto LABEL_157;
    v15 = KiSelectIdleProcessor(v32, a1, v35, a1, a5);
    if ( !v15 )
      break;
LABEL_15:
    CurrentPrcb = KeGetCurrentPrcb();
    v21 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v94 = SchedulerAssist[5];
        SchedulerAssist[5] = v94 + 1;
        if ( v94 == -1 )
LABEL_165:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 48), 0LL) )
    {
      v70 = CurrentPrcb->SchedulerAssist;
      if ( v70 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v95 = v70[5] - 1;
          v70[5] = v95;
          if ( !v95 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
      {
        if ( (++v21 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v70, a2, v19) )
        {
          HvlNotifyLongSpinWait(v21);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(v15 + 48) );
      v71 = CurrentPrcb->SchedulerAssist;
      if ( v71 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v96 = v71[5];
          v71[5] = v96 + 1;
          if ( v96 == -1 )
            goto LABEL_165;
        }
      }
    }
    if ( !*(_BYTE *)(v15 + 35) )
    {
      result = v15;
      *v118 = 1;
      return result;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 48), 0LL);
    v82 = KeGetCurrentPrcb();
    v6 = v116;
    v9 = a5;
    v7 = v106;
    a2 = (unsigned __int64)v82->SchedulerAssist;
    v5 = v107;
    if ( a2 )
    {
      v9 = a5;
      v7 = v106;
      if ( v82->NestingLevel <= 1u )
      {
        v97 = *(_DWORD *)(a2 + 20) - 1;
        *(_DWORD *)(a2 + 20) = v97;
        if ( !v97 )
        {
          KiRemoveSystemWorkPriorityKick(v82);
          v9 = a5;
          v7 = v106;
          v5 = v107;
        }
      }
    }
  }
  v13 = v108;
  v35 = v110;
  v7 = v106;
LABEL_42:
  if ( v7 == *(_WORD *)(v35 + 144) )
  {
    v36 = v34 & ~*(_QWORD *)(v35 + 136);
    goto LABEL_44;
  }
LABEL_157:
  v36 = v34;
LABEL_44:
  v37 = v107;
  v38 = v17[16] & ~((1 << *((_BYTE *)v17 + 146)) | (1 << *(_WORD *)(v35 + 146)) | (1 << *(_WORD *)(v13 + 146)));
  v117 = 0;
  while ( v36 )
  {
    NextNode = MmGetNextNode(*((unsigned __int16 *)v17 + 73), &v117);
    if ( NextNode == -1 )
      break;
    a2 = NextNode;
    v74 = v38;
    if ( _bittest64(&v74, NextNode) )
    {
      v75 = KeNodeBlock[NextNode];
      v19 = v37 & *(_QWORD *)(v75 + 136);
      if ( v19 )
      {
        v15 = v73;
        v76 = KiProcessorBlock[*(unsigned int *)(v75 + 100)];
        v77 = *(_BYTE *)(v76 + 209);
        v78 = *(unsigned __int8 *)(v76 + 208);
        _BitScanForward64((unsigned __int64 *)&v76, __ROR8__(v19, v77));
        v79 = (v78 << 6) + (((_BYTE)v76 + v77) & 0x3Fu);
        v109 = *(_QWORD *)v75;
        a2 = v109;
        v19 = v37 & *(_QWORD *)v75;
        v115 = v19;
        v80 = (unsigned int)KiProcessorNumberToIndexMappingTable[v79];
        v121 = v80;
        v81 = KiProcessorBlock[v80];
        v112 = v81;
        if ( (v37 & v109) == 0 )
        {
LABEL_104:
          if ( v15 )
            goto LABEL_15;
          goto LABEL_105;
        }
        if ( *(_QWORD *)(v81 + 200) == *(_QWORD *)(v81 + 24920) )
        {
LABEL_133:
          if ( (v19 & *(_QWORD *)(v81 + 200)) != 0 )
          {
            v15 = v81;
          }
          else
          {
            v86 = *(_QWORD *)(v81 + 24920) & v19;
            if ( v86 )
            {
              v19 &= *(_QWORD *)(v81 + 24920);
              v115 = v86;
            }
            v87 = *(_BYTE *)(v81 + 209);
            v19 = __ROR8__(v19, v87);
            _BitScanForward64(&v88, v19);
            a2 = *(unsigned __int8 *)(v81 + 208) << 6;
            v122 = KiProcessorNumberToIndexMappingTable[(unsigned int)a2 + ((v87 + (_BYTE)v88) & 0x3F)];
            v15 = KiProcessorBlock[v122];
          }
          goto LABEL_104;
        }
        v85 = a5;
        if ( !a5 )
          goto LABEL_129;
        v92 = KiFindRankBiasedIdleSmtSet(v81, &v115, v19);
        v81 = v112;
        v37 = v107;
        if ( v92 )
        {
          v19 = v115;
          goto LABEL_133;
        }
        v85 = a5;
        a2 = v109;
LABEL_129:
        v19 = v115;
        if ( (v115 & *(_QWORD *)(v75 + 8)) != 0 )
        {
          if ( !v85
            || (v93 = a2 - ((a2 >> 1) & 0x5555555555555555LL),
                a2 = v93 & 0x3333333333333333LL,
                (unsigned int)((0x101010101010101LL
                              * (((v93 & 0x3333333333333333LL)
                                + ((v93 >> 2) & 0x3333333333333333LL)
                                + (((v93 & 0x3333333333333333LL) + ((v93 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 >= KiPerfIsoEnabled) )
          {
            v19 = v115 & *(_QWORD *)(v75 + 8);
            v115 = v19;
            goto LABEL_133;
          }
        }
        else if ( !v85 )
        {
          if ( *(_QWORD *)(a1 + 192) == v75 )
          {
            KiReduceByEffectiveIdleSmtSet(a1, &v115);
            v19 = v115;
            v81 = v112;
            v37 = v107;
          }
          goto LABEL_133;
        }
      }
LABEL_105:
      v36 &= ~*(_QWORD *)(v75 + 136);
      continue;
    }
  }
  v39 = v37 & *(_QWORD *)(v16 + 24896);
  if ( ((v39 - 1) & v39) != 0 )
  {
    v40 = *(unsigned __int8 **)(v16 + 24904);
    v41 = v40[593];
    v42 = v40[592];
    v43 = &v123[v41];
    memmove(&v123[v41], v40 + 528, v40[592]);
    v19 = (unsigned int)(v41 + v42);
    v44 = -1;
    v6 = v116;
    a2 = *(unsigned __int8 *)(v116 + 195);
    if ( (unsigned int)v41 < (unsigned int)v19 )
    {
      v45 = __ROL8__(1LL, v41);
      do
      {
        if ( (v39 & v45) != 0 && *v43 < (char)a2 )
        {
          a2 = (unsigned __int8)*v43;
          v44 = v41;
        }
        LODWORD(v41) = v41 + 1;
        v45 = __ROL8__(v45, 1);
        ++v43;
      }
      while ( (unsigned int)v41 < (unsigned int)v19 );
      if ( v44 >= 0 )
      {
        a2 = 0x140000000uLL;
        v16 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v16 + 208) + v44]];
      }
    }
  }
  else
  {
    v6 = v116;
  }
  v46 = KeGetCurrentPrcb();
  v47 = *(_QWORD **)(v16 + 192);
  v48 = 0;
  v49 = v46->SchedulerAssist;
  if ( v49 )
  {
    if ( v46->NestingLevel <= 1u )
    {
      v98 = v49[5];
      v49[5] = v98 + 1;
      if ( v98 == -1 )
LABEL_181:
        KiRemoveSystemWorkPriorityKick(v46);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 48), 0LL) )
  {
    v83 = v46->SchedulerAssist;
    if ( v83 )
    {
      if ( v46->NestingLevel <= 1u )
      {
        v99 = v83[5] - 1;
        v83[5] = v99;
        if ( !v99 )
          KiRemoveSystemWorkPriorityKick(v46);
      }
    }
    do
    {
      if ( (++v48 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v83, a2, v19) )
      {
        HvlNotifyLongSpinWait(v48);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v16 + 48) );
    v84 = v46->SchedulerAssist;
    if ( v84 )
    {
      if ( v46->NestingLevel <= 1u )
      {
        v100 = v84[5];
        v84[5] = v100 + 1;
        if ( v100 == -1 )
          goto LABEL_181;
      }
    }
  }
  v9 = a5;
  if ( !a5 )
  {
    v5 = v107;
    if ( (*v47 & v107) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 48), 0LL);
      v89 = KeGetCurrentPrcb();
      v7 = v106;
      a2 = (unsigned __int64)v89->SchedulerAssist;
      if ( a2 )
      {
        v7 = v106;
        if ( v89->NestingLevel <= 1u )
        {
          v101 = *(_DWORD *)(a2 + 20) - 1;
          *(_DWORD *)(a2 + 20) = v101;
          if ( !v101 )
          {
            KiRemoveSystemWorkPriorityKick(v89);
            v9 = 0;
            v7 = v106;
            v5 = v107;
          }
        }
      }
      goto LABEL_2;
    }
  }
  v50 = v118;
  *v118 = 0;
  if ( (*(_BYTE *)(v16 + 35) & 2) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 48), 0LL);
    v102 = KeGetCurrentPrcb();
    v103 = v102->SchedulerAssist;
    if ( v103 )
    {
      if ( v102->NestingLevel <= 1u )
      {
        v104 = v103[5] - 1;
        v103[5] = v104;
        if ( !v104 )
          KiRemoveSystemWorkPriorityKick(v102);
      }
    }
    v105 = KiSelectCandidateProcessor(v16, v6, -1LL);
    v16 = v105;
    if ( !a5 && (*(_BYTE *)(v105 + 35) & 1) == 0 )
      *v50 = 1;
  }
  return v16;
}
