/*
 * XREFs of KiSearchForNewThreadOnProcessor @ 0x140041830
 * Callers:
 *     KiSearchForNewThreadOnNode @ 0x140013750 (KiSearchForNewThreadOnNode.c)
 *     KiSwapThread @ 0x140040B40 (KiSwapThread.c)
 * Callees:
 *     KiSelectNextThread @ 0x1400138D0 (KiSelectNextThread.c)
 *     KiIsThreadRankNonZero @ 0x140014B90 (KiIsThreadRankNonZero.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140015294 (KiCheckForMaxOverQuotaScb.c)
 *     KiEnterDeferredReadyState @ 0x1400152B8 (KiEnterDeferredReadyState.c)
 *     KiPrcbInGroupAffinity @ 0x140015A88 (KiPrcbInGroupAffinity.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiMayStealStandbyThread @ 0x140041F60 (KiMayStealStandbyThread.c)
 *     KiDeferredReadyThread @ 0x140068290 (KiDeferredReadyThread.c)
 *     KiGroupSchedulingMoveThread @ 0x1401158C0 (KiGroupSchedulingMoveThread.c)
 *     KiCheckThreadAffinity @ 0x14011F330 (KiCheckThreadAffinity.c)
 *     KiRemoveThreadFromReadyQueue @ 0x14015BE50 (KiRemoveThreadFromReadyQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiConvertDynamicHeteroPolicy @ 0x1402AEFC0 (KiConvertDynamicHeteroPolicy.c)
 *     KiSetSchedulerAssistPriority @ 0x1402B0380 (KiSetSchedulerAssistPriority.c)
 */

__int64 __fastcall KiSearchForNewThreadOnProcessor(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v6; // ebp
  struct _KPRCB *v8; // r14
  _DWORD *v9; // rcx
  struct _KPRCB *v10; // r14
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  _DWORD *v13; // rcx
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r14
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v18; // r14
  _DWORD *v19; // rcx
  __int64 v20; // r14
  __int64 v21; // r9
  unsigned int v22; // r15d
  __int64 v23; // rdx
  unsigned int v24; // eax
  _QWORD **v25; // r12
  _QWORD *v26; // r13
  unsigned int v27; // eax
  __int64 v28; // r8
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  __int64 v31; // rax
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  _DWORD *v34; // rcx
  _DWORD *v35; // rcx
  char v36; // cl
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  unsigned int v40; // r15d
  __int64 v41; // r9
  __int64 v42; // rdx
  unsigned int v43; // eax
  _QWORD *v44; // r12
  _QWORD *v45; // r13
  unsigned int v46; // eax
  __int64 v47; // r8
  __int64 v48; // rcx
  _QWORD *v49; // rdx
  _QWORD *v50; // rax
  _DWORD *v51; // rdx
  _DWORD *v52; // rcx
  _DWORD *v53; // rcx
  struct _KPRCB *v54; // rcx
  _DWORD *v55; // rdx
  bool IsThreadRankNonZero; // al
  _DWORD *v57; // rdx
  _DWORD *v58; // rcx
  _DWORD *v59; // rcx
  __int64 v60; // rcx
  struct _KPRCB *v61; // rcx
  _DWORD *v62; // rdx
  struct _KPRCB *v63; // rcx
  _DWORD *v64; // rdx
  __int64 v65; // rcx
  int v66; // eax
  int v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  int v77; // eax
  __int64 v78; // rax
  int v79; // eax
  __int64 v80; // rax
  __int64 v81; // rcx
  unsigned __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rax
  unsigned __int64 v85; // rcx
  unsigned __int64 v86; // rax
  __int64 v87; // rax
  int v88; // eax
  int v89; // eax
  int v90; // eax
  int v91; // eax
  int v92; // eax
  int v93; // eax
  __int64 v94; // rdx
  __int64 v95; // [rsp+20h] [rbp-68h] BYREF
  __int64 v96; // [rsp+28h] [rbp-60h] BYREF
  unsigned int v97; // [rsp+30h] [rbp-58h]
  unsigned int v98; // [rsp+34h] [rbp-54h]
  __int64 v99; // [rsp+38h] [rbp-50h]
  __int64 v100; // [rsp+40h] [rbp-48h]
  int v101; // [rsp+48h] [rbp-40h]
  char v102; // [rsp+98h] [rbp+10h]
  int v103; // [rsp+A8h] [rbp+20h]
  int v104; // [rsp+A8h] [rbp+20h]

  v6 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( a2 )
      {
        if ( !*(_DWORD *)(a2 + 22808) && !(unsigned __int8)KiMayStealStandbyThread(a2, a1) && !*(_QWORD *)(a2 + 22896) )
          return 0LL;
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = a1;
        LODWORD(v95) = 0;
        v16 = a2;
        if ( a1 <= a2 )
        {
          v15 = a2;
          v16 = a1;
        }
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v66 = SchedulerAssist[5];
            SchedulerAssist[5] = v66 + 1;
            if ( v66 == -1 )
LABEL_124:
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 48), 0LL) )
        {
          v34 = CurrentPrcb->SchedulerAssist;
          if ( v34 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v67 = v34[5] - 1;
              v34[5] = v67;
              if ( !v67 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v95);
          while ( *(_QWORD *)(v16 + 48) );
          v35 = CurrentPrcb->SchedulerAssist;
          if ( v35 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v68 = v35[5];
              v35[5] = v68 + 1;
              if ( v68 == -1 )
                goto LABEL_124;
            }
          }
        }
        if ( v16 != v15 )
        {
          v18 = KeGetCurrentPrcb();
          HIDWORD(v95) = 0;
          v19 = v18->SchedulerAssist;
          if ( v19 )
          {
            if ( v18->NestingLevel <= 1u )
            {
              v69 = v19[5];
              v19[5] = v69 + 1;
              if ( v69 == -1 )
LABEL_133:
                KiRemoveSystemWorkPriorityKick(v18);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 48), 0LL) )
          {
            v52 = v18->SchedulerAssist;
            if ( v52 )
            {
              if ( v18->NestingLevel <= 1u )
              {
                v70 = v52[5] - 1;
                v52[5] = v70;
                if ( !v70 )
                  KiRemoveSystemWorkPriorityKick(v18);
              }
            }
            do
              KeYieldProcessorEx((_DWORD *)&v95 + 1);
            while ( *(_QWORD *)(v15 + 48) );
            v53 = v18->SchedulerAssist;
            if ( v53 )
            {
              if ( v18->NestingLevel <= 1u )
              {
                v71 = v53[5];
                v53[5] = v71 + 1;
                if ( v71 == -1 )
                  goto LABEL_133;
              }
            }
          }
        }
      }
      else
      {
        if ( (*(_DWORD *)(a3 + 8) & 0xFFFFFFFE) == 0 )
          return 0LL;
        v8 = KeGetCurrentPrcb();
        LODWORD(v96) = 0;
        v9 = v8->SchedulerAssist;
        if ( v9 )
        {
          if ( v8->NestingLevel <= 1u )
          {
            v72 = v9[5];
            v9[5] = v72 + 1;
            if ( v72 == -1 )
LABEL_142:
              KiRemoveSystemWorkPriorityKick(v8);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
        {
          v58 = v8->SchedulerAssist;
          if ( v58 )
          {
            if ( v8->NestingLevel <= 1u )
            {
              v73 = v58[5] - 1;
              v58[5] = v73;
              if ( !v73 )
                KiRemoveSystemWorkPriorityKick(v8);
            }
          }
          do
            KeYieldProcessorEx(&v96);
          while ( *(_QWORD *)(a1 + 48) );
          v59 = v8->SchedulerAssist;
          if ( v59 )
          {
            if ( v8->NestingLevel <= 1u )
            {
              v74 = v59[5];
              v59[5] = v74 + 1;
              if ( v74 == -1 )
                goto LABEL_142;
            }
          }
        }
        v10 = KeGetCurrentPrcb();
        HIDWORD(v96) = 0;
        v11 = v10->SchedulerAssist;
        if ( v11 )
        {
          if ( v10->NestingLevel <= 1u )
          {
            v75 = v11[5];
            v11[5] = v75 + 1;
            if ( v75 == -1 )
LABEL_151:
              KiRemoveSystemWorkPriorityKick(v10);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)a3, 0LL) )
        {
          v12 = v10->SchedulerAssist;
          if ( v12 )
          {
            if ( v10->NestingLevel <= 1u )
            {
              v76 = v12[5] - 1;
              v12[5] = v76;
              if ( !v76 )
                KiRemoveSystemWorkPriorityKick(v10);
            }
          }
          do
            KeYieldProcessorEx((_DWORD *)&v96 + 1);
          while ( *(_QWORD *)a3 );
          v13 = v10->SchedulerAssist;
          if ( v13 )
          {
            if ( v10->NestingLevel <= 1u )
            {
              v77 = v13[5];
              v13[5] = v77 + 1;
              if ( v77 == -1 )
                goto LABEL_151;
            }
          }
        }
      }
      v20 = *(_QWORD *)(a1 + 16);
      LOBYTE(v21) = 0;
      v102 = 0;
      if ( v20 )
        break;
      if ( !a3 )
      {
        if ( (unsigned __int8)KiMayStealStandbyThread(a2, a1)
          && (unsigned int)KiCheckThreadAffinity(*(_QWORD *)(a2 + 16)) )
        {
          v20 = *(_QWORD *)(a2 + 16);
          if ( KiPrcbInGroupAffinity(a1, v20 + 576) )
          {
            KiSelectNextThread(a2, 0LL);
            LOBYTE(v21) = 0;
            *(_DWORD *)(v20 + 536) = *(_DWORD *)(a1 + 36);
            if ( v20 )
              goto LABEL_39;
          }
          else
          {
            v20 = 0LL;
          }
        }
        v22 = *(_DWORD *)(a2 + 22808);
        if ( v22 )
        {
          v21 = *(_QWORD *)(a1 + 200);
          v23 = 64LL;
          v103 = 64;
          v99 = v21;
LABEL_28:
          _BitScanReverse(&v24, v22);
          v22 ^= 1 << v24;
          v25 = (_QWORD **)(a2 + 22912 + 16LL * v24);
          v98 = v24;
          v26 = *v25;
          while ( 1 )
          {
            v27 = *((unsigned __int8 *)v26 - 91);
            v20 = (__int64)(v26 - 27);
            v28 = v26[45];
            v100 = v28;
            if ( v27 >= 5 )
            {
              v27 = KiConvertDynamicHeteroPolicy(v26 - 27, v23, a1);
              LODWORD(v23) = v103;
              v28 = v100;
              v21 = v99;
            }
            if ( v27 )
            {
              LODWORD(v23) = v103;
              v80 = v28 & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 24LL * (int)v27 + 200);
              if ( v80 )
                v28 = v80;
            }
            if ( (v28 & v21) != 0 )
            {
              v65 = *(_QWORD *)(v20 + 104);
              if ( !v65 )
                break;
              v81 = *(unsigned int *)(a1 + 216) + v65;
              if ( !v81 || !KiCheckForMaxOverQuotaScb(v81) )
                break;
            }
            v26 = (_QWORD *)*v26;
            v23 = (unsigned int)(v23 - 1);
            v103 = v23;
            if ( v26 == v25 || !(_DWORD)v23 )
            {
              if ( !v22 || !(_DWORD)v23 )
              {
                v20 = 0LL;
                LOBYTE(v21) = 0;
                goto LABEL_36;
              }
              goto LABEL_28;
            }
          }
          KiRemoveThreadFromReadyQueue(a2, v26);
          *(_DWORD *)(v20 + 536) = *(_DWORD *)(a1 + 36);
        }
        else
        {
LABEL_36:
          if ( KiPerfIsoEnabled )
          {
            v82 = **(_QWORD **)(a1 + 192) - ((**(_QWORD **)(a1 + 192) >> 1) & 0x5555555555555555LL);
            if ( (unsigned int)((0x101010101010101LL
                               * (((v82 & 0x3333333333333333LL)
                                 + ((v82 >> 2) & 0x3333333333333333LL)
                                 + (((v82 & 0x3333333333333333LL) + ((v82 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 < KiPerfIsoEnabled
              || (v83 = *(_QWORD *)(a1 + 200), v84 = *(_QWORD *)(a1 + 24920), v83 != v84)
              && (v85 = v84 & ~v83, (*(_QWORD *)(*(_QWORD *)(a1 + 192) + 16LL) & v85) == 0)
              && (_BitScanForward64(&v86, v85),
                  v87 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a1 + 208)
                                                                         + (int)v86],
                  v101 = v87,
                  (*(_DWORD *)(KiProcessorBlock[v87] + 236) & 0x10) == 0) )
            {
LABEL_39:
              _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
              v29 = KeGetCurrentPrcb();
              v30 = v29->SchedulerAssist;
              if ( v30 )
              {
                if ( v29->NestingLevel <= 1u )
                {
                  v88 = v30[5] - 1;
                  v30[5] = v88;
                  if ( !v88 )
                    goto LABEL_177;
                }
              }
              goto LABEL_40;
            }
          }
          v20 = KiGroupSchedulingMoveThread(a1, a2, a2 + 22896, v21, v95, v96);
        }
        LOBYTE(v21) = 0;
        goto LABEL_39;
      }
      v40 = *(_DWORD *)(a3 + 8) & 0xFFFFFFFE;
      if ( v40 )
      {
        v41 = *(_QWORD *)(a1 + 200);
        v42 = 64LL;
        v104 = 64;
        v100 = v41;
LABEL_64:
        _BitScanReverse(&v43, v40);
        v40 ^= 1 << v43;
        v44 = (_QWORD *)(a3 + 16 + 16LL * v43);
        v97 = v43;
        v45 = (_QWORD *)*v44;
        while ( 1 )
        {
          v46 = *((unsigned __int8 *)v45 - 91);
          v20 = (__int64)(v45 - 27);
          v47 = v45[45];
          v99 = v47;
          if ( v46 >= 5 )
          {
            v46 = KiConvertDynamicHeteroPolicy(v45 - 27, v42, a1);
            LODWORD(v42) = v104;
            v47 = v99;
            v41 = v100;
          }
          if ( v46 )
          {
            LODWORD(v42) = v104;
            v78 = v47 & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 24LL * (int)v46 + 200);
            if ( v78 )
              v47 = v78;
          }
          if ( (v47 & v41) != 0 )
          {
            v48 = *(_QWORD *)(v20 + 104);
            if ( !v48 )
              break;
            v60 = *(unsigned int *)(a1 + 216) + v48;
            if ( !v60 || !KiCheckForMaxOverQuotaScb(v60) )
              break;
          }
          v45 = (_QWORD *)*v45;
          v42 = (unsigned int)(v42 - 1);
          v104 = v42;
          if ( v45 == v44 || !(_DWORD)v42 )
          {
            if ( !v40 )
            {
              v20 = 0LL;
              goto LABEL_81;
            }
            if ( !(_DWORD)v42 )
            {
              v20 = 0LL;
              goto LABEL_81;
            }
            goto LABEL_64;
          }
        }
        if ( (*(_DWORD *)(v20 + 120) & 0x400000) != 0 )
          _InterlockedAnd(*(volatile signed __int32 **)(v20 + 1520), 0xFFFBFFFF);
        v49 = (_QWORD *)*v45;
        v50 = *(_QWORD **)(v20 + 224);
        if ( *(_QWORD **)(*v45 + 8LL) != v45 || (_QWORD *)*v50 != v45 )
          __fastfail(3u);
        *v50 = v49;
        v49[1] = v50;
        if ( v50 == v49 )
          *(_DWORD *)(a3 + 8) ^= 1 << v97;
        --*(_DWORD *)(a3 + 608);
        *(_QWORD *)(a3 + 616) -= *(unsigned int *)(v20 + 2032);
        *(_DWORD *)(v20 + 536) = *(_DWORD *)(a1 + 36);
LABEL_81:
        LOBYTE(v21) = 0;
      }
      _InterlockedAnd64((volatile signed __int64 *)a3, 0LL);
      v29 = KeGetCurrentPrcb();
      v51 = v29->SchedulerAssist;
      if ( v51 )
      {
        if ( v29->NestingLevel <= 1u )
        {
          v79 = v51[5] - 1;
          v51[5] = v79;
          if ( !v79 )
          {
LABEL_177:
            KiRemoveSystemWorkPriorityKick(v29);
            LOBYTE(v21) = 0;
          }
        }
      }
LABEL_40:
      if ( !v20 )
      {
        v31 = *(_QWORD *)(a1 + 25016);
        if ( v31 )
          *(_BYTE *)(v31 + 16) = 1;
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
        v32 = KeGetCurrentPrcb();
        v33 = v32->SchedulerAssist;
        if ( v33 && v32->NestingLevel <= 1u )
        {
          v93 = v33[5] - 1;
          v33[5] = v93;
          if ( !v93 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
        return v20;
      }
      if ( *(_QWORD *)(v20 + 568) == KiCpuSetSequence || (*(_DWORD *)(v20 + 116) & 8) != 0 )
      {
        v6 = 2;
        goto LABEL_51;
      }
      KiEnterDeferredReadyState(v20);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v61 = KeGetCurrentPrcb();
      v62 = v61->SchedulerAssist;
      if ( v62 )
      {
        if ( v61->NestingLevel <= 1u )
        {
          v89 = v62[5] - 1;
          v62[5] = v89;
          if ( !v89 )
            KiRemoveSystemWorkPriorityKick(v61);
        }
      }
      KiDeferredReadyThread(a1, v20);
    }
    if ( a3 )
    {
      _InterlockedAnd64((volatile signed __int64 *)a3, 0LL);
      v54 = KeGetCurrentPrcb();
      v57 = v54->SchedulerAssist;
      if ( v57 )
      {
        if ( v54->NestingLevel <= 1u )
        {
          v90 = v57[5] - 1;
          v57[5] = v90;
          if ( !v90 )
LABEL_186:
            KiRemoveSystemWorkPriorityKick(v54);
        }
      }
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
      v54 = KeGetCurrentPrcb();
      v55 = v54->SchedulerAssist;
      if ( v55 )
      {
        if ( v54->NestingLevel <= 1u )
        {
          v91 = v55[5] - 1;
          v55[5] = v91;
          if ( !v91 )
            goto LABEL_186;
        }
      }
    }
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( v20 != *(_QWORD *)(a1 + 24) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    v63 = KeGetCurrentPrcb();
    v64 = v63->SchedulerAssist;
    if ( v64 )
    {
      if ( v63->NestingLevel <= 1u )
      {
        v92 = v64[5] - 1;
        v64[5] = v92;
        if ( !v92 )
          KiRemoveSystemWorkPriorityKick(v63);
      }
    }
  }
  LOBYTE(v21) = 1;
  v102 = 1;
LABEL_51:
  if ( v6 )
  {
    if ( (*(_BYTE *)(v20 + 2) & 4) != 0 )
    {
      IsThreadRankNonZero = KiIsThreadRankNonZero(v20, (struct _KPRCB *)a1);
      v36 = 1;
      if ( !IsThreadRankNonZero )
        v36 = *(_BYTE *)(v20 + 195);
      LOBYTE(v21) = v102;
    }
    else
    {
      v36 = *(_BYTE *)(v20 + 195);
    }
    **(_BYTE **)(a1 + 56) = v36;
    if ( *(_QWORD *)(a1 + 25016) )
    {
      v94 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( v20 != *(_QWORD *)(a1 + 24) )
        v94 = (unsigned int)v36;
      KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 25016), v94, 0LL);
      LOBYTE(v21) = v102;
    }
  }
  *(_QWORD *)(a1 + 8) = v20;
  if ( *(_BYTE *)(v20 + 388) == 1 )
    *(_DWORD *)(v20 + 132) = *(_DWORD *)(v20 + 132) - *(_DWORD *)(v20 + 436) + MEMORY[0xFFFFF78000000320];
  *(_BYTE *)(v20 + 388) = 2;
  if ( !(_BYTE)v21 )
  {
    v37 = *(unsigned __int8 *)(a1 + 35);
    v38 = *(_QWORD *)(a1 + 192);
    *(_BYTE *)(a1 + 11883) = 0;
    if ( (v37 & 1) != 0 )
      __fastfail(0x21u);
    v39 = v37 + 1;
    *(_BYTE *)(a1 + 35) = v39;
    if ( v39 == 1 )
      _interlockedbittestandreset64((volatile signed __int32 *)v38, *(unsigned __int8 *)(a1 + 209));
    _interlockedbittestandreset64((volatile signed __int32 *)(v38 + 16), *(unsigned __int8 *)(a1 + 209));
    _InterlockedAnd64((volatile signed __int64 *)(v38 + 8), ~*(_QWORD *)(a1 + 24920));
  }
  return v20;
}
