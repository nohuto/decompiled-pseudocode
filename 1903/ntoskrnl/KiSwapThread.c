/*
 * XREFs of KiSwapThread @ 0x140040E00
 * Callers:
 *     KiCommitThreadWait @ 0x140040740 (KiCommitThreadWait.c)
 *     KeTerminateThread @ 0x140080CBC (KeTerminateThread.c)
 *     KiInSwapSingleProcess @ 0x140090450 (KiInSwapSingleProcess.c)
 * Callees:
 *     KiStartThreadCycleAccumulation @ 0x140012CB0 (KiStartThreadCycleAccumulation.c)
 *     KiEnterDeferredReadyState @ 0x140015188 (KiEnterDeferredReadyState.c)
 *     KiIsThreadRankNonZero @ 0x140015570 (KiIsThreadRankNonZero.c)
 *     KiComputeGroupSchedulingRank @ 0x1400156CC (KiComputeGroupSchedulingRank.c)
 *     KiCheckMaxOverQuotaTransition @ 0x140015754 (KiCheckMaxOverQuotaTransition.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140041AF0 (KiSearchForNewThreadOnProcessor.c)
 *     KiSelectReadyThread @ 0x140042260 (KiSelectReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiEndThreadAccountingPeriod @ 0x140042A80 (KiEndThreadAccountingPeriod.c)
 *     KiCancelTimer @ 0x140042F90 (KiCancelTimer.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     KiDeferredReadyThread @ 0x140068020 (KiDeferredReadyThread.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400AF054 (KiInsertDeferredPreemptionApc.c)
 *     KiRecomputeGroupSchedulingRank @ 0x1400E8418 (KiRecomputeGroupSchedulingRank.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x1400E8BF8 (KiSelectThreadFromSchedulingGroup.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1400E8DBC (KiRemoveSchedulingGroupQueue.c)
 *     KiProcessThreadWaitList @ 0x1401148D0 (KiProcessThreadWaitList.c)
 *     EtwTraceContextSwap @ 0x1401470B0 (EtwTraceContextSwap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiIsProcessorBusySoftParked @ 0x1401BE8AC (KiIsProcessorBusySoftParked.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 *     HvlNotifyLongSpinWait @ 0x140285170 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AF1E0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x1402AFC14 (KiSendHeteroRescheduleIntRequest.c)
 *     KiSetSchedulerAssistPriority @ 0x1402B0620 (KiSetSchedulerAssistPriority.c)
 */

__int64 __fastcall KiSwapThread(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  unsigned __int64 v4; // rax
  __int64 v5; // r8
  unsigned __int64 v6; // rcx
  bool v7; // zf
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v10; // eax
  _DWORD *v11; // rcx
  int v12; // eax
  volatile signed __int64 *v13; // rdi
  volatile signed __int64 *v14; // rsi
  __int64 v15; // rdi
  int v16; // ebp
  __int64 v17; // r8
  __int64 ready; // rdi
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rcx
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  int v31; // eax
  struct _KPRCB *v32; // rdi
  _DWORD *v33; // rcx
  int v34; // eax
  _DWORD *v35; // rcx
  int v36; // eax
  int IsProcessorBusySoftParked; // esi
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  int v41; // eax
  unsigned __int64 v42; // rdx
  __int64 v43; // rdi
  bool v44; // al
  char v45; // cl
  __int64 v46; // rdx
  char v47; // di
  struct _KPRCB *v48; // rcx
  _DWORD *v49; // rdx
  int v50; // eax
  __int64 v51; // rcx
  int v52; // edx
  __int64 v53; // r12
  __int64 v54; // rbp
  char v55; // r15
  __int64 v56; // r13
  __int64 v57; // r12
  unsigned __int64 v58; // rsi
  int v59; // r14d
  unsigned __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rdx
  unsigned __int64 v64; // rsi
  int v65; // r14d
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // r9
  int v68; // ecx
  unsigned __int64 v69; // rdx
  __int64 v70; // rax
  bool IsThreadRankNonZero; // al
  char v72; // cl
  __int64 v73; // rdx
  struct _KPRCB *v74; // rsi
  unsigned int v75; // edi
  _DWORD *v76; // rcx
  int v77; // eax
  _DWORD *v78; // rcx
  int v79; // eax
  struct _KPRCB *v80; // rcx
  _DWORD *v81; // rdx
  int v82; // eax
  struct _KPRCB *v83; // rsi
  _DWORD *v84; // rcx
  int v85; // eax
  _DWORD *v86; // rcx
  int v87; // eax
  bool v88; // al
  char v89; // cl
  __int64 v90; // rdx
  bool v91; // al
  char v92; // dl
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rax
  struct _KPRCB *v96; // rcx
  _DWORD *v97; // rdx
  int v98; // eax
  unsigned __int8 v99; // si
  char v100; // bp
  __int64 v101; // rdx
  __int64 v102; // rbx
  struct _KPRCB *v103; // rcx
  struct _KPRCB *v104; // rcx
  int v106; // [rsp+20h] [rbp-78h] BYREF
  int v107; // [rsp+24h] [rbp-74h]
  int v108; // [rsp+28h] [rbp-70h]
  _DWORD v109[3]; // [rsp+2Ch] [rbp-6Ch] BYREF
  __int64 v110; // [rsp+38h] [rbp-60h]
  unsigned __int64 v111; // [rsp+40h] [rbp-58h]
  volatile signed __int64 *v112; // [rsp+48h] [rbp-50h]
  int v114; // [rsp+A8h] [rbp+10h]
  int v115; // [rsp+B0h] [rbp+18h]
  int v116; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a1;
  if ( *(_QWORD *)(a2 + 11528) )
    KiProcessThreadWaitList(a2, 1LL, 0LL);
  KiAbProcessContextSwitch(v3, 0LL);
  _disable();
  *(_BYTE *)(a2 + 32) = 1;
  v4 = __rdtsc();
  v5 = v4 - *(_QWORD *)(a2 + 23488);
  v6 = v5 + *(unsigned int *)(v3 + 80);
  *(_QWORD *)(v3 + 72) += v5;
  *(_QWORD *)(a2 + 23488) = v4;
  if ( v6 > 0xFFFFFFFF )
    LODWORD(v6) = -1;
  v7 = (*(_BYTE *)(v3 + 2) & 0x3E) == 0;
  *(_DWORD *)(v3 + 80) = v6;
  if ( !v7 )
    KiEndThreadAccountingPeriod(a2, v3);
  _enable();
  *(_DWORD *)(v3 + 84) = (*(_DWORD *)(v3 + 84) >> 1) + (*(_DWORD *)(v3 + 80) >> 1);
  *(_DWORD *)(v3 + 80) = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v116 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v10 = SchedulerAssist[5];
        SchedulerAssist[5] = v10 + 1;
        if ( v10 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
      break;
    v11 = CurrentPrcb->SchedulerAssist;
    if ( v11 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = v11[5] - 1;
        v11[5] = v12;
        if ( !v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v116);
    while ( *(_QWORD *)(a2 + 48) );
  }
  v13 = *(volatile signed __int64 **)(v3 + 104);
  v112 = v13;
  v14 = v13;
  if ( v13 )
  {
    v15 = (__int64)v13 + *(unsigned int *)(a2 + 216);
    if ( v15 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v15 + 112) & 4) != 0 )
        {
          if ( KiCheckMaxOverQuotaTransition(v15, v14) )
          {
            if ( (*(_BYTE *)(v15 + 112) & 1) != 0 )
            {
              LOBYTE(v17) = 1;
              KiRemoveSchedulingGroupQueue(a2, v15, v17);
            }
          }
          else if ( *(_QWORD *)v15 >= *(_QWORD *)(v15 + 24) && (*(_BYTE *)(v15 + 112) & 2) == 0 )
          {
            KiRecomputeGroupSchedulingRank(v14, v15, a2);
          }
        }
        else
        {
          KiComputeGroupSchedulingRank((__int64)v14, a2, (__int64 *)v15);
        }
        v16 += *(_DWORD *)(v15 + 116);
        v15 = *(_QWORD *)(v15 + 408);
        if ( !v15 )
          break;
        v14 = (volatile signed __int64 *)(v15 - *(unsigned int *)(a2 + 216));
        v112 = v14;
      }
    }
  }
  ready = *(_QWORD *)(a2 + 16);
  if ( ready )
  {
LABEL_71:
    *(_QWORD *)(a2 + 16) = 0LL;
LABEL_72:
    *(_QWORD *)(a2 + 8) = ready;
    if ( *(_BYTE *)(ready + 388) == 1 )
      *(_DWORD *)(ready + 132) = *(_DWORD *)(ready + 132) - *(_DWORD *)(ready + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(ready + 388) = 2;
    goto LABEL_179;
  }
  while ( 1 )
  {
    ready = KiSelectReadyThread(1LL, a2);
    if ( !ready )
    {
      if ( KiPerfIsoEnabled )
      {
        v19 = **(_QWORD **)(a2 + 192) - ((**(_QWORD **)(a2 + 192) >> 1) & 0x5555555555555555LL);
        if ( (unsigned int)((0x101010101010101LL
                           * (((v19 & 0x3333333333333333LL)
                             + ((v19 >> 2) & 0x3333333333333333LL)
                             + (((v19 & 0x3333333333333333LL) + ((v19 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 < KiPerfIsoEnabled )
          break;
        v20 = *(_QWORD *)(a2 + 200);
        v21 = *(_QWORD *)(a2 + 24920);
        if ( v20 != v21 )
        {
          v22 = v21 & ~v20;
          if ( (*(_QWORD *)(*(_QWORD *)(a2 + 192) + 16LL) & v22) == 0 )
          {
            _BitScanForward64(&v23, v22);
            v24 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a2 + 208)
                                                                   + (unsigned int)v23];
            v109[1] = v24;
            if ( (*(_DWORD *)(KiProcessorBlock[v24] + 236) & 0x10) == 0 )
              break;
          }
        }
      }
      ready = 0LL;
      v25 = *(_QWORD *)(a2 + 22904);
      if ( (v25 & 1) != 0 )
      {
        if ( v25 == 1 )
          break;
        v26 = v25 ^ ((a2 + 22896) | 1);
      }
      else
      {
        v26 = *(_QWORD *)(a2 + 22904);
      }
      while ( v26 )
      {
        v27 = v26 - 88;
        ready = KiSelectThreadFromSchedulingGroup(a2, v26 - 88, 0LL);
        if ( ready )
          break;
        v28 = *(_QWORD *)(v27 + 400);
        if ( (v28 & 1) != 0 )
        {
          if ( v28 == 1 )
            goto LABEL_51;
          v26 = v28 ^ ((v27 + 392) | 1);
        }
        else
        {
          v26 = *(_QWORD *)(v27 + 400);
        }
      }
      if ( !ready )
        break;
    }
LABEL_52:
    if ( *(_QWORD *)(ready + 568) == KiCpuSetSequence || (*(_DWORD *)(ready + 116) & 8) != 0 )
    {
      if ( (*(_BYTE *)(ready + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(ready, (struct _KPRCB *)a2), v72 = 1, !IsThreadRankNonZero) )
      {
        v72 = *(_BYTE *)(ready + 195);
      }
      **(_BYTE **)(a2 + 56) = v72;
      if ( *(_QWORD *)(a2 + 25016) )
      {
        v73 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( ready != *(_QWORD *)(a2 + 24) )
          v73 = (unsigned int)v72;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 25016), v73, 0LL);
      }
      goto LABEL_72;
    }
    KiEnterDeferredReadyState(ready);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    v29 = KeGetCurrentPrcb();
    v30 = v29->SchedulerAssist;
    if ( v30 )
    {
      if ( v29->NestingLevel <= 1u )
      {
        v31 = v30[5] - 1;
        v30[5] = v31;
        if ( !v31 )
          KiRemoveSystemWorkPriorityKick(v29);
      }
    }
    KiDeferredReadyThread(a2, ready);
    v32 = KeGetCurrentPrcb();
    v106 = 0;
    while ( 1 )
    {
      v33 = v32->SchedulerAssist;
      if ( v33 )
      {
        if ( v32->NestingLevel <= 1u )
        {
          v34 = v33[5];
          v33[5] = v34 + 1;
          if ( v34 == -1 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
        break;
      v35 = v32->SchedulerAssist;
      if ( v35 )
      {
        if ( v32->NestingLevel <= 1u )
        {
          v36 = v35[5] - 1;
          v35[5] = v36;
          if ( !v36 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
      do
        KeYieldProcessorEx(&v106);
      while ( *(_QWORD *)(a2 + 48) );
    }
    ready = *(_QWORD *)(a2 + 16);
    if ( ready )
      goto LABEL_71;
  }
LABEL_51:
  ready = KiSelectReadyThread(0LL, a2);
  if ( ready )
    goto LABEL_52;
  if ( PoSoftParkingAllowed )
    IsProcessorBusySoftParked = KiIsProcessorBusySoftParked(a2);
  else
    IsProcessorBusySoftParked = 0;
  v38 = *(_QWORD *)(a2 + 25016);
  v39 = *(_QWORD *)(a2 + 192);
  v40 = *(unsigned __int8 *)(a2 + 35);
  if ( v38 )
    *(_BYTE *)(v38 + 16) = 1;
  *(_BYTE *)(a2 + 11883) = 0;
  if ( (v40 & 1) != 0 )
  {
    v41 = v40 - 1;
    *(_BYTE *)(a2 + 35) = v41;
    if ( !v41 )
      _interlockedbittestandset64((volatile signed __int32 *)v39, *(unsigned __int8 *)(a2 + 209));
    _interlockedbittestandset64((volatile signed __int32 *)(v39 + 16), *(unsigned __int8 *)(a2 + 209));
    v42 = *(_QWORD *)(a2 + 24920);
    if ( (v42 & *(_QWORD *)(v39 + 16)) == v42 )
      _InterlockedOr64((volatile signed __int64 *)(v39 + 8), v42);
  }
  v43 = *(_QWORD *)(a2 + 24);
  if ( (*(_BYTE *)(v43 + 2) & 4) == 0
    || (v44 = KiIsThreadRankNonZero(*(_QWORD *)(a2 + 24), (struct _KPRCB *)a2), v45 = 1, !v44) )
  {
    v45 = *(_BYTE *)(v43 + 195);
  }
  **(_BYTE **)(a2 + 56) = v45;
  if ( *(_QWORD *)(a2 + 25016) )
  {
    v46 = (unsigned int)KiVpThreadSystemWorkPriority;
    if ( v43 != *(_QWORD *)(a2 + 24) )
      v46 = (unsigned int)v45;
    KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 25016), v46, 0LL);
  }
  v47 = *(_BYTE *)(a2 + 35) & 2;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
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
  if ( !v47 || IsProcessorBusySoftParked )
  {
    v51 = *(_QWORD *)(a2 + 192);
    v115 = 0;
    v108 = *(unsigned __int16 *)(v51 + 146);
    v111 = *(unsigned int *)(v51 + 128);
LABEL_99:
    v52 = *(unsigned __int8 *)(a2 + 208);
    v53 = *(_QWORD *)(v51 + 136);
    v54 = v53;
    v55 = *(_BYTE *)(a2 + 209);
    v56 = *(_QWORD *)(v51 + 152);
    v114 = v52;
    v110 = v51;
    if ( v51 == *(_QWORD *)(a2 + 192) )
    {
      v53 ^= *(_QWORD *)(a2 + 200);
      v56 ^= *(_QWORD *)(a2 + 24896);
      if ( (KiCacheAwareScheduling & 2) != 0 )
        v54 &= *(_QWORD *)(a2 + 24936);
    }
    v57 = ~*(_QWORD *)(v51 + 16) & v53;
    while ( v57 || v56 )
    {
      if ( (v56 & v54) != 0 )
      {
        v58 = __ROR8__(v56 & v54, v55);
        v59 = v52 << 6;
        while ( 1 )
        {
          _BitScanForward64(&v60, v58);
          v61 = (unsigned int)KiProcessorNumberToIndexMappingTable[v59 + ((v55 + (_BYTE)v60) & 0x3F)];
          v107 = v61;
          v62 = KiProcessorBlock[v61];
          v63 = *(_QWORD *)(v62 + 24896);
          v56 &= ~v63;
          v58 &= __ROR8__(~v63, v55);
          ready = KiSearchForNewThreadOnProcessor(a2, 0LL, *(_QWORD *)(v62 + 24904));
          if ( ready )
            goto LABEL_121;
          if ( !v58 )
          {
            v51 = v110;
            v52 = v114;
            break;
          }
        }
      }
      if ( (v57 & v54) != 0 )
      {
        v64 = __ROR8__(v57 & v54, v55);
        v65 = v52 << 6;
        while ( 1 )
        {
          _BitScanForward64(&v66, v64);
          v64 ^= 1LL << v66;
          v107 = KiProcessorNumberToIndexMappingTable[v65 + (((_BYTE)v66 + v55) & 0x3F)];
          ready = KiSearchForNewThreadOnProcessor(a2, KiProcessorBlock[v107], 0LL);
          if ( ready )
            break;
          if ( !v64 )
          {
            v51 = v110;
            goto LABEL_115;
          }
        }
LABEL_121:
        v3 = a1;
        goto LABEL_179;
      }
LABEL_115:
      v52 = v114;
      v57 &= ~v54;
      v54 = *(_QWORD *)(v51 + 136);
    }
    v67 = (unsigned int)v111 & (unsigned __int64)~(1LL << *(_WORD *)(v51 + 146));
    v111 = v67;
    if ( (_DWORD)v67 )
    {
      while ( 1 )
      {
        v68 = v115 + 1;
        v115 = v68;
        if ( v68 == (unsigned __int16)KeNumberNodes )
          break;
        v69 = *(unsigned int *)(qword_140465A50 + 4LL * (v108 * (unsigned int)(unsigned __int16)KeNumberNodes + v68));
        if ( (_DWORD)v69 == -1 )
          break;
        v70 = (unsigned int)v67;
        if ( _bittest64(&v70, v69) )
        {
          v51 = KeNodeBlock[v69];
          goto LABEL_99;
        }
      }
    }
    v3 = a1;
  }
  v74 = KeGetCurrentPrcb();
  v75 = 0;
  while ( 1 )
  {
    v76 = v74->SchedulerAssist;
    if ( v76 )
    {
      if ( v74->NestingLevel <= 1u )
      {
        v77 = v76[5];
        v76[5] = v77 + 1;
        if ( v77 == -1 )
          KiRemoveSystemWorkPriorityKick(v74);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
      break;
    v78 = v74->SchedulerAssist;
    if ( v78 )
    {
      if ( v74->NestingLevel <= 1u )
      {
        v79 = v78[5] - 1;
        v78[5] = v79;
        if ( !v79 )
          KiRemoveSystemWorkPriorityKick(v74);
      }
    }
    do
    {
      if ( (++v75 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v78) )
      {
        HvlNotifyLongSpinWait(v75);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(a2 + 48) );
  }
  ready = *(_QWORD *)(a2 + 16);
  if ( ready )
  {
LABEL_168:
    *(_QWORD *)(a2 + 16) = 0LL;
  }
  else
  {
    ready = *(_QWORD *)(a2 + 24);
    if ( KeHeteroSystem && !KeHeteroSystemVirtual )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
      v80 = KeGetCurrentPrcb();
      v81 = v80->SchedulerAssist;
      if ( v81 )
      {
        if ( v80->NestingLevel <= 1u )
        {
          v82 = v81[5] - 1;
          v81[5] = v82;
          if ( !v82 )
            KiRemoveSystemWorkPriorityKick(v80);
        }
      }
      KiSendHeteroRescheduleIntRequest(a2);
      v83 = KeGetCurrentPrcb();
      v109[0] = 0;
      while ( 1 )
      {
        v84 = v83->SchedulerAssist;
        if ( v84 )
        {
          if ( v83->NestingLevel <= 1u )
          {
            v85 = v84[5];
            v84[5] = v85 + 1;
            if ( v85 == -1 )
              KiRemoveSystemWorkPriorityKick(v83);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
          break;
        v86 = v83->SchedulerAssist;
        if ( v86 )
        {
          if ( v83->NestingLevel <= 1u )
          {
            v87 = v86[5] - 1;
            v86[5] = v87;
            if ( !v87 )
              KiRemoveSystemWorkPriorityKick(v83);
          }
        }
        do
          KeYieldProcessorEx(v109);
        while ( *(_QWORD *)(a2 + 48) );
      }
      if ( *(_QWORD *)(a2 + 16) )
      {
        ready = *(_QWORD *)(a2 + 16);
        goto LABEL_168;
      }
    }
  }
  if ( (*(_BYTE *)(ready + 2) & 4) == 0 || (v88 = KiIsThreadRankNonZero(ready, (struct _KPRCB *)a2), v89 = 1, !v88) )
    v89 = *(_BYTE *)(ready + 195);
  **(_BYTE **)(a2 + 56) = v89;
  if ( *(_QWORD *)(a2 + 25016) )
  {
    v90 = (unsigned int)KiVpThreadSystemWorkPriority;
    if ( ready != *(_QWORD *)(a2 + 24) )
      v90 = (unsigned int)v89;
    KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 25016), v90, 0LL);
  }
  *(_QWORD *)(a2 + 8) = ready;
  if ( *(_BYTE *)(ready + 388) == 1 )
    *(_DWORD *)(ready + 132) = *(_DWORD *)(ready + 132) - *(_DWORD *)(ready + 436) + MEMORY[0xFFFFF78000000320];
  *(_BYTE *)(ready + 388) = 2;
LABEL_179:
  if ( ready != *(_QWORD *)(a2 + 24) && ready != v3 && *(_BYTE *)(ready + 113) )
  {
    if ( (*(_BYTE *)(ready + 2) & 4) == 0 || (v91 = KiIsThreadRankNonZero(ready, (struct _KPRCB *)a2), v92 = 1, !v91) )
      v92 = *(_BYTE *)(ready + 195);
    **(_BYTE **)(a2 + 56) = v92;
    v93 = *(_QWORD *)(a2 + 25016);
    if ( v93 )
    {
      if ( ready == *(_QWORD *)(a2 + 24) )
        v94 = (unsigned int)KiVpThreadSystemWorkPriority;
      else
        v94 = (unsigned int)v92;
      KiSetSchedulerAssistPriority(v93, v94, 0LL);
      v93 = *(_QWORD *)(a2 + 25016);
    }
    v95 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 16) = ready;
    if ( v93 )
      *(_BYTE *)(v93 + 16) = ready == v95;
    if ( *(_BYTE *)(ready + 388) == 1 )
      *(_DWORD *)(ready + 132) = *(_DWORD *)(ready + 132) - *(_DWORD *)(ready + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(ready + 388) = 3;
    ready = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 8) = ready;
    if ( *(_BYTE *)(ready + 388) == 1 )
      *(_DWORD *)(ready + 132) = *(_DWORD *)(ready + 132) - *(_DWORD *)(ready + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(ready + 388) = 2;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
  v96 = KeGetCurrentPrcb();
  v97 = v96->SchedulerAssist;
  if ( v97 )
  {
    if ( v96->NestingLevel <= 1u )
    {
      v98 = v97[5] - 1;
      v97[5] = v98;
      if ( !v98 )
        KiRemoveSystemWorkPriorityKick(v96);
    }
  }
  v99 = *(_BYTE *)(v3 + 390);
  if ( v3 == ready )
  {
    v100 = *(_BYTE *)(ready + 193) && !*(_WORD *)(ready + 486) && !v99;
    _disable();
    KiStartThreadCycleAccumulation(a2, ready, 0);
    _enable();
    if ( (*(_DWORD *)(ready + 120) & 0x800) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(ready + 120), 0xBu);
      KiInsertDeferredPreemptionApc(a2, ready, 0LL);
    }
    if ( (BYTE4(PerfGlobalGroupMask) & 4) != 0 )
      EtwTraceContextSwap(v3, v3);
  }
  else
  {
    v100 = KiSwapContext(v3, ready, v99);
  }
  v102 = *(_QWORD *)(v3 + 200);
  if ( _bittestandreset((signed __int32 *)(v3 + 116), 9u) )
  {
    LOBYTE(v101) = 1;
    if ( !(unsigned __int8)KiCancelTimer(v3 + 256, v101) )
    {
      *(_BYTE *)(v3 + 481) = 4;
      *(_QWORD *)(v3 + 264) = v3 + 464;
      *(_QWORD *)(v3 + 272) = v3 + 464;
    }
  }
  if ( v100 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v103 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v103->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v103);
    }
    __writecr8(1uLL);
    KiDeliverApc(0LL, 0LL, 0LL);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v99 < 2u )
  {
    v104 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v104->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v104);
  }
  __writecr8(v99);
  return v102;
}
