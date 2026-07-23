/*
 * XREFs of KiSearchForNewThreadOnProcessor @ 0x1400570B0
 * Callers:
 *     KiSearchForNewThread @ 0x140056AE0 (KiSearchForNewThread.c)
 * Callees:
 *     KiMayStealStandbyThread @ 0x1400579E0 (KiMayStealStandbyThread.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiDeferredReadyThread @ 0x1400C32D0 (KiDeferredReadyThread.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1400D2FD4 (KiCheckForMaxOverQuotaScb.c)
 *     KiPrcbInGroupAffinity @ 0x1400D57B4 (KiPrcbInGroupAffinity.c)
 *     KiSelectNextThread @ 0x1400D71E8 (KiSelectNextThread.c)
 *     KiCheckThreadAffinity @ 0x1401151C8 (KiCheckThreadAffinity.c)
 *     KiGroupSchedulingMoveThread @ 0x140116D14 (KiGroupSchedulingMoveThread.c)
 *     KiRemoveThreadFromReadyQueue @ 0x1401604C8 (KiRemoveThreadFromReadyQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetThreadState @ 0x1401B4CCC (KiSetThreadState.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiConvertDynamicHeteroPolicy @ 0x1402985A0 (KiConvertDynamicHeteroPolicy.c)
 */

__int64 __fastcall KiSearchForNewThreadOnProcessor(unsigned __int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // rsi
  _DWORD *v4; // r14
  unsigned int v6; // r15d
  struct _KPRCB *v7; // rdi
  _DWORD *v8; // rbp
  _DWORD *v9; // rsi
  unsigned int v10; // ebx
  _DWORD *v11; // rcx
  int v12; // eax
  _DWORD *v13; // rcx
  int v14; // eax
  struct _KPRCB *v15; // rdi
  unsigned int v16; // ebx
  _DWORD *v17; // rcx
  int v18; // eax
  _DWORD *v19; // rcx
  int v20; // eax
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v23; // eax
  _DWORD *v24; // rcx
  int v25; // eax
  struct _KPRCB *v26; // rdi
  unsigned int v27; // ebx
  _DWORD *v28; // rcx
  int v29; // eax
  _DWORD *v30; // rcx
  int v31; // eax
  __int64 v32; // rbx
  unsigned int v33; // r15d
  __int64 v34; // r12
  __int64 v35; // rcx
  int v36; // ebp
  unsigned int v37; // eax
  _QWORD *v38; // r14
  _QWORD *v39; // rsi
  unsigned int v40; // eax
  __int64 v41; // rdi
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rcx
  _QWORD *v46; // rdx
  _QWORD *v47; // rax
  struct _KPRCB *v48; // rcx
  _DWORD *v49; // rdx
  int v50; // eax
  __int64 v51; // rdx
  unsigned int v52; // r15d
  __int64 v53; // r12
  _DWORD *v54; // rcx
  int v55; // ebp
  unsigned int v56; // eax
  _QWORD **v57; // r14
  _QWORD *v58; // rsi
  unsigned int v59; // eax
  __int64 v60; // rdi
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rcx
  unsigned __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rax
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // rax
  struct _KPRCB *v69; // rcx
  _DWORD *v70; // rdx
  int v71; // eax
  unsigned __int64 v72; // r8
  struct _KPRCB *v73; // rcx
  _DWORD *v74; // rdx
  int v75; // eax
  struct _KPRCB *v76; // rcx
  _DWORD *v77; // rdx
  int v78; // eax
  struct _KPRCB *v79; // rcx
  int v80; // eax
  char v81; // di
  __int64 v82; // rax
  struct _KPRCB *v83; // rcx
  _DWORD *v84; // rdx
  int v85; // eax
  int v87; // eax
  __int64 v88; // rcx
  int v89; // eax
  char v90; // [rsp+20h] [rbp-58h]
  unsigned int v91; // [rsp+24h] [rbp-54h]
  __int64 v92; // [rsp+30h] [rbp-48h]
  _DWORD *v93; // [rsp+30h] [rbp-48h]
  _DWORD *v94; // [rsp+88h] [rbp+10h]
  int v96; // [rsp+98h] [rbp+20h] BYREF

  v94 = a2;
  v3 = a3;
  v4 = a2;
LABEL_2:
  v6 = 0;
  while ( !v4 )
  {
    if ( (*(_DWORD *)(v3 + 8) & 0xFFFFFFFE) == 0 )
      return 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    v96 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v23 = SchedulerAssist[5];
          SchedulerAssist[5] = v23 + 1;
          if ( v23 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
        break;
      v24 = CurrentPrcb->SchedulerAssist;
      if ( v24 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v25 = v24[5] - 1;
          v24[5] = v25;
          if ( !v25 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v96);
      while ( *(_QWORD *)(a1 + 48) );
    }
    v26 = KeGetCurrentPrcb();
    v27 = 0;
    while ( 1 )
    {
      v28 = v26->SchedulerAssist;
      if ( v28 )
      {
        if ( v26->NestingLevel <= 1u )
        {
          v29 = v28[5];
          v28[5] = v29 + 1;
          if ( v29 == -1 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
        break;
      v30 = v26->SchedulerAssist;
      if ( v30 )
      {
        if ( v26->NestingLevel <= 1u )
        {
          v31 = v30[5] - 1;
          v30[5] = v31;
          if ( !v31 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
      do
      {
        if ( (++v27 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v30, a2, a3) )
        {
          HvlNotifyLongSpinWait(v27);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)v3 );
    }
LABEL_75:
    v32 = *(_QWORD *)(a1 + 16);
    if ( !v32 )
    {
      if ( v3 )
      {
        v33 = *(_DWORD *)(v3 + 8) & 0xFFFFFFFE;
        if ( v33 )
        {
          v34 = *(_QWORD *)(a1 + 200);
          v35 = v3 + 16;
          v92 = v3 + 16;
          v36 = 64;
          while ( 2 )
          {
            _BitScanReverse(&v37, v33);
            v33 ^= 1 << v37;
            v38 = (_QWORD *)(v35 + 16LL * v37);
            v90 = v37;
            v39 = (_QWORD *)*v38;
            do
            {
              v40 = *((unsigned __int8 *)v39 - 91);
              v32 = (__int64)(v39 - 27);
              v41 = v39[45];
              if ( v40 >= 5 )
                v40 = KiConvertDynamicHeteroPolicy(v39 - 27, a2, a1);
              if ( v40 )
              {
                v42 = *(_QWORD *)(a1 + 192);
                v43 = 3 * ((int)v40 + 8LL);
                a2 = (_DWORD *)(v41 & *(_QWORD *)(v42 + 8 * v43));
                if ( a2 )
                  v41 &= *(_QWORD *)(v42 + 8 * v43);
              }
              if ( (v41 & v34) != 0 )
              {
                v44 = *(_QWORD *)(v32 + 104);
                if ( !v44
                  || (v45 = *(unsigned int *)(a1 + 216) + v44) == 0
                  || !(unsigned __int8)KiCheckForMaxOverQuotaScb(v45, a2) )
                {
                  if ( (*(_DWORD *)(v32 + 120) & 0x400000) != 0 )
                    _InterlockedAnd(*(volatile signed __int32 **)(v32 + 1512), 0xFFFBFFFF);
                  v46 = (_QWORD *)*v39;
                  v47 = *(_QWORD **)(v32 + 224);
                  if ( *(_QWORD **)(*v39 + 8LL) != v39 || (_QWORD *)*v47 != v39 )
                    __fastfail(3u);
                  v3 = a3;
                  *v47 = v46;
                  v46[1] = v47;
                  if ( v47 == v46 )
                    *(_DWORD *)(a3 + 8) ^= 1 << v90;
                  --*(_DWORD *)(a3 + 608);
                  *(_QWORD *)(a3 + 616) -= *(unsigned int *)(v32 + 2016);
                  *(_DWORD *)(v32 + 536) = *(_DWORD *)(a1 + 36);
                  goto LABEL_102;
                }
              }
              v39 = (_QWORD *)*v39;
              --v36;
            }
            while ( v39 != v38 && v36 );
            if ( v33 && v36 )
            {
              v35 = v92;
              continue;
            }
            break;
          }
          v3 = a3;
          v32 = 0LL;
LABEL_102:
          v4 = v94;
        }
        _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
        v48 = KeGetCurrentPrcb();
        v49 = v48->SchedulerAssist;
        if ( v49 )
        {
          if ( v48->NestingLevel <= 1u )
          {
            v50 = v49[5] - 1;
            v49[5] = v50;
            if ( !v50 )
              KiRemoveSystemWorkPriorityKick(v48);
          }
        }
        goto LABEL_143;
      }
      if ( (unsigned __int8)KiMayStealStandbyThread(v4, a1) && (unsigned int)KiCheckThreadAffinity(*((_QWORD *)v4 + 2)) )
      {
        v32 = *((_QWORD *)v4 + 2);
        if ( (unsigned int)KiPrcbInGroupAffinity(a1, v32 + 576) )
        {
          KiSelectNextThread(v4, 0LL);
          *(_DWORD *)(v32 + 536) = *(_DWORD *)(a1 + 36);
          if ( v32 )
          {
LABEL_138:
            _InterlockedAnd64((volatile signed __int64 *)v4 + 6, 0LL);
            v69 = KeGetCurrentPrcb();
            v70 = v69->SchedulerAssist;
            if ( v70 )
            {
              if ( v69->NestingLevel <= 1u )
              {
                v71 = v70[5] - 1;
                v70[5] = v71;
                if ( !v71 )
                  KiRemoveSystemWorkPriorityKick(v69);
              }
            }
            v3 = a3;
LABEL_143:
            if ( !v32 )
            {
              v82 = *(_QWORD *)(a1 + 25016);
              if ( v82 )
                *(_BYTE *)(v82 + 16) = 1;
              _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
              v83 = KeGetCurrentPrcb();
              v84 = v83->SchedulerAssist;
              if ( v84 )
              {
                if ( v83->NestingLevel <= 1u )
                {
                  v85 = v84[5] - 1;
                  v84[5] = v85;
                  if ( !v85 )
                  {
                    KiRemoveSystemWorkPriorityKick(v83);
                    return 0LL;
                  }
                }
              }
              return v32;
            }
            if ( *(_QWORD *)(v32 + 568) == KiCpuSetSequence || (*(_DWORD *)(v32 + 116) & 8) != 0 )
            {
              v81 = 0;
              v6 = 2;
LABEL_174:
              KiUpdatePriorityMatrixThreadState(a1, v32, v6, 2LL);
              if ( !v81 )
              {
                v87 = *(unsigned __int8 *)(a1 + 35);
                v88 = *(_QWORD *)(a1 + 192);
                *(_BYTE *)(a1 + 11883) = 0;
                if ( (v87 & 1) != 0 )
                  __fastfail(0x21u);
                v89 = v87 + 1;
                *(_BYTE *)(a1 + 35) = v89;
                if ( v89 == 1 )
                  _interlockedbittestandreset64((volatile signed __int32 *)v88, *(unsigned __int8 *)(a1 + 209));
                _interlockedbittestandreset64((volatile signed __int32 *)(v88 + 16), *(unsigned __int8 *)(a1 + 209));
                _InterlockedAnd64((volatile signed __int64 *)(v88 + 8), ~*(_QWORD *)(a1 + 24920));
              }
              return v32;
            }
            if ( *(_BYTE *)(v32 + 388) == 1 )
              *(_DWORD *)(v32 + 116) |= 2u;
            KiSetThreadState(v32, 7LL);
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), v72);
            v73 = KeGetCurrentPrcb();
            v74 = v73->SchedulerAssist;
            if ( v74 )
            {
              if ( v73->NestingLevel <= 1u )
              {
                v75 = v74[5] - 1;
                v74[5] = v75;
                if ( !v75 )
                  KiRemoveSystemWorkPriorityKick(v73);
              }
            }
            KiDeferredReadyThread(a1, v32);
            goto LABEL_2;
          }
        }
        else
        {
          v32 = 0LL;
        }
      }
      v52 = v4[5702];
      if ( v52 )
      {
        v53 = *(_QWORD *)(a1 + 200);
        v54 = v4 + 5728;
        v93 = v4 + 5728;
        v55 = 64;
        while ( 2 )
        {
          _BitScanReverse(&v56, v52);
          v52 ^= 1 << v56;
          v57 = (_QWORD **)&v54[4 * v56];
          v91 = v56;
          v58 = *v57;
          do
          {
            v59 = *((unsigned __int8 *)v58 - 91);
            v32 = (__int64)(v58 - 27);
            v60 = v58[45];
            if ( v59 >= 5 )
              v59 = KiConvertDynamicHeteroPolicy(v58 - 27, v51, a1);
            if ( v59 )
            {
              v61 = *(_QWORD *)(a1 + 192);
              v62 = 3 * ((int)v59 + 8LL);
              v51 = v60 & *(_QWORD *)(v61 + 8 * v62);
              if ( v51 )
                v60 &= *(_QWORD *)(v61 + 8 * v62);
            }
            if ( (v60 & v53) != 0 )
            {
              v63 = *(_QWORD *)(v32 + 104);
              if ( !v63
                || !(*(unsigned int *)(a1 + 216) + v63)
                || !(unsigned __int8)((__int64 (*)(void))KiCheckForMaxOverQuotaScb)() )
              {
                v4 = v94;
                KiRemoveThreadFromReadyQueue(v94, v58, v91);
                *(_DWORD *)(v32 + 536) = *(_DWORD *)(a1 + 36);
                goto LABEL_138;
              }
            }
            v58 = (_QWORD *)*v58;
            --v55;
          }
          while ( v58 != v57 && v55 );
          if ( v52 && v55 )
          {
            v54 = v93;
            continue;
          }
          break;
        }
        v4 = v94;
        v32 = 0LL;
      }
      if ( !KiPerfIsoEnabled
        || (v64 = **(_QWORD **)(a1 + 192) - ((**(_QWORD **)(a1 + 192) >> 1) & 0x5555555555555555LL),
            (unsigned int)((0x101010101010101LL
                          * (((v64 & 0x3333333333333333LL)
                            + ((v64 >> 2) & 0x3333333333333333LL)
                            + (((v64 & 0x3333333333333333LL) + ((v64 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 >= KiPerfIsoEnabled)
        && ((v65 = *(_QWORD *)(a1 + 200), v66 = *(_QWORD *)(a1 + 24920), v65 == v66)
         || (v67 = v66 & ~v65, (*(_QWORD *)(*(_QWORD *)(a1 + 192) + 16LL) & v67) != 0)
         || (_BitScanForward64(&v68, v67),
             (*(_DWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a1 + 208)
                                                                              + (unsigned int)v68]]
                        + 236) & 0x10) != 0)) )
      {
        v32 = KiGroupSchedulingMoveThread(a1, v4, v4 + 5724);
      }
      goto LABEL_138;
    }
    if ( v3 )
      _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
    else
      _InterlockedAnd64((volatile signed __int64 *)v4 + 6, 0LL);
    v76 = KeGetCurrentPrcb();
    v77 = v76->SchedulerAssist;
    if ( v77 )
    {
      if ( v76->NestingLevel <= 1u )
      {
        v78 = v77[5] - 1;
        v77[5] = v78;
        if ( !v78 )
          KiRemoveSystemWorkPriorityKick(v76);
      }
    }
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( v32 != *(_QWORD *)(a1 + 24) )
    {
      v81 = 1;
      goto LABEL_174;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    v79 = KeGetCurrentPrcb();
    a2 = v79->SchedulerAssist;
    if ( a2 )
    {
      if ( v79->NestingLevel <= 1u )
      {
        v80 = a2[5] - 1;
        a2[5] = v80;
        if ( !v80 )
          KiRemoveSystemWorkPriorityKick(v79);
      }
    }
  }
  if ( v4[5702] || (unsigned __int8)KiMayStealStandbyThread(v4, a1) || *((_QWORD *)v4 + 2862) )
  {
    v7 = KeGetCurrentPrcb();
    v8 = (_DWORD *)a1;
    v9 = v4;
    if ( a1 <= (unsigned __int64)v4 )
    {
      v8 = v4;
      v9 = (_DWORD *)a1;
    }
    v10 = 0;
    while ( 1 )
    {
      v11 = v7->SchedulerAssist;
      if ( v11 )
      {
        if ( v7->NestingLevel <= 1u )
        {
          v12 = v11[5];
          v11[5] = v12 + 1;
          if ( v12 == -1 )
            KiRemoveSystemWorkPriorityKick(v7);
        }
      }
      if ( !_interlockedbittestandset64(v9 + 12, 0LL) )
        break;
      v13 = v7->SchedulerAssist;
      if ( v13 )
      {
        if ( v7->NestingLevel <= 1u )
        {
          v14 = v13[5] - 1;
          v13[5] = v14;
          if ( !v14 )
            KiRemoveSystemWorkPriorityKick(v7);
        }
      }
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v13, a2, a3) )
        {
          HvlNotifyLongSpinWait(v10);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *((_QWORD *)v9 + 6) );
    }
    if ( v9 != v8 )
    {
      v15 = KeGetCurrentPrcb();
      v16 = 0;
      while ( 1 )
      {
        v17 = v15->SchedulerAssist;
        if ( v17 )
        {
          if ( v15->NestingLevel <= 1u )
          {
            v18 = v17[5];
            v17[5] = v18 + 1;
            if ( v18 == -1 )
              KiRemoveSystemWorkPriorityKick(v15);
          }
        }
        if ( !_interlockedbittestandset64(v8 + 12, 0LL) )
          break;
        v19 = v15->SchedulerAssist;
        if ( v19 )
        {
          if ( v15->NestingLevel <= 1u )
          {
            v20 = v19[5] - 1;
            v19[5] = v20;
            if ( !v20 )
              KiRemoveSystemWorkPriorityKick(v15);
          }
        }
        do
        {
          if ( (++v16 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v19, a2, a3) )
          {
            HvlNotifyLongSpinWait(v16);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *((_QWORD *)v8 + 6) );
      }
    }
    v3 = a3;
    goto LABEL_75;
  }
  return 0LL;
}
