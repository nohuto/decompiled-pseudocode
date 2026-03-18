/*
 * XREFs of KeTransitionProcessorParkState @ 0x1402B54CC
 * Callers:
 *     PpmParkReportSoftParkChange @ 0x1401BFE88 (PpmParkReportSoftParkChange.c)
 *     KiForceIdleParkUnparkProcessor @ 0x1402B2198 (KiForceIdleParkUnparkProcessor.c)
 *     PpmParkReportParkedCore @ 0x1402F850C (PpmParkReportParkedCore.c)
 *     PpmParkReportUnparkedCore @ 0x1402F85E8 (PpmParkReportUnparkedCore.c)
 * Callees:
 *     KiInsertDeferredReadyList @ 0x14000D450 (KiInsertDeferredReadyList.c)
 *     KiUpdateThreadPriority @ 0x1400100B0 (KiUpdateThreadPriority.c)
 *     KiReadyDeferredReadyList @ 0x140012840 (KiReadyDeferredReadyList.c)
 *     KiIsThreadRankNonZero @ 0x140014B90 (KiIsThreadRankNonZero.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140015500 (KiGroupSchedulingGenerationEnd.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRequestSoftwareInterrupt @ 0x1400EF410 (KiRequestSoftwareInterrupt.c)
 *     KiSetProcessorIdle @ 0x140135BFC (KiSetProcessorIdle.c)
 *     KiReleasePrcbLock @ 0x1401BEFEC (KiReleasePrcbLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x1402AF974 (KiSendHeteroRescheduleIntRequest.c)
 *     KiSetSchedulerAssistPriority @ 0x1402B0380 (KiSetSchedulerAssistPriority.c)
 *     KiFlushReadyLists @ 0x1402B5AAC (KiFlushReadyLists.c)
 */

char __fastcall KeTransitionProcessorParkState(__int64 a1, int a2)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // r15
  bool v5; // r12
  unsigned __int64 v6; // rax
  bool v7; // r14
  bool v8; // r13
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v11; // eax
  _DWORD *v12; // rcx
  int v13; // eax
  _DWORD *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  char v19; // al
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbp
  int v24; // edi
  int v25; // edi
  char result; // al
  int v27; // edx
  char v28; // cl
  __int64 v29; // rax
  char v30; // cl
  __int64 v31; // rdx
  char v32; // di
  bool v33; // r15
  __int64 v34; // r8
  bool IsThreadRankNonZero; // al
  char v36; // cl
  int v37; // edx
  struct _KPRCB *v38; // rdi
  volatile signed __int32 *v39; // rsi
  _DWORD *v40; // rcx
  int v41; // eax
  _DWORD *v42; // rcx
  int v43; // eax
  bool v44; // r8
  struct _KPRCB *v45; // rcx
  _DWORD *v46; // rdx
  int v47; // eax
  char v48; // [rsp+20h] [rbp-58h]
  int v49; // [rsp+24h] [rbp-54h] BYREF
  _DWORD v50[2]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v51[9]; // [rsp+30h] [rbp-48h] BYREF
  bool v52; // [rsp+80h] [rbp+8h]

  v51[0] = 0LL;
  v48 = 0;
  v3 = *(_QWORD *)(a1 + 192);
  v4 = *(_QWORD *)(a1 + 200);
  if ( PoSoftParkingAllowed )
  {
    v52 = 0;
    v8 = 0;
    v7 = 0;
    if ( a2 )
    {
      _m_prefetchw((const void *)(v3 + 80));
      if ( (v4 & *(_QWORD *)(v3 + 80)) != 0 )
      {
        v8 = 1;
        v7 = 1;
        if ( a2 == 2 )
        {
          v5 = 1;
          goto LABEL_12;
        }
        v5 = 0;
      }
      else
      {
        v5 = 1;
      }
      v7 = v8;
      if ( a2 == 1 )
        v8 = 1;
    }
    else
    {
      v52 = 1;
      v5 = (v4 & *(_QWORD *)(v3 + 88)) != 0;
    }
  }
  else
  {
    v5 = 0;
    _m_prefetchw((const void *)(v3 + 80));
    v6 = *(_QWORD *)(v3 + 80) & v4;
    v7 = v6 != 0;
    v8 = v6 != 0;
    v52 = v6 == 0;
  }
LABEL_12:
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 104));
  CurrentPrcb = KeGetCurrentPrcb();
  v49 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v11 = SchedulerAssist[5];
      SchedulerAssist[5] = v11 + 1;
      if ( v11 == -1 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    v12 = CurrentPrcb->SchedulerAssist;
    if ( v12 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = v12[5] - 1;
        v12[5] = v13;
        if ( !v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v49);
    while ( *(_QWORD *)(a1 + 48) );
    v14 = CurrentPrcb->SchedulerAssist;
    if ( v14 && CurrentPrcb->NestingLevel <= 1u )
    {
      v15 = v14[5];
      v14[5] = v15 + 1;
      if ( v15 == -1 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  if ( v7 || v52 )
  {
    _InterlockedXor64((volatile signed __int64 *)(v3 + 80), v4);
    v16 = *(_QWORD *)(a1 + 24896);
    if ( v16 )
    {
      v17 = *(_QWORD *)(a1 + 24904);
      v18 = v16 & *(_QWORD *)(v3 + 80);
      if ( !v18 )
      {
        v48 = 1;
        goto LABEL_37;
      }
      if ( v18 == v4 )
      {
        *(_DWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64
                                                                        * (unsigned __int64)*(unsigned __int8 *)(a1 + 208)
                                                                        + *(unsigned __int8 *)(v17 + 596)]]
                  + 24912) = 0;
        v19 = *(_BYTE *)(a1 + 209);
        *(_DWORD *)(a1 + 24912) = 1;
LABEL_36:
        *(_BYTE *)(v17 + 596) = v19;
        goto LABEL_37;
      }
      if ( *(_DWORD *)(a1 + 24912) && v7 )
      {
        _BitScanReverse64(&v20, v18);
        v21 = (unsigned int)v20 + (*(unsigned __int8 *)(a1 + 208) << 6);
        v50[1] = v20;
        v22 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v21]];
        *(_DWORD *)(a1 + 24912) = 0;
        *(_DWORD *)(v22 + 24912) = 1;
        v19 = *(_BYTE *)(v22 + 209);
        goto LABEL_36;
      }
    }
  }
LABEL_37:
  if ( v5 )
    _InterlockedXor64((volatile signed __int64 *)(v3 + 88), v4);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 104));
  v23 = *(_QWORD *)(a1 + 24);
  if ( v52 )
  {
    v24 = *(unsigned __int8 *)(a1 + 35);
    if ( (v24 & 2) != 0 )
    {
      v25 = v24 - 2;
      if ( v5 )
        v25 = *(unsigned __int8 *)(a1 + 35) - 6;
      *(_BYTE *)(a1 + 35) = v25;
      if ( !v25 )
      {
        _InterlockedXor64((volatile signed __int64 *)v3, v4);
        *(_BYTE *)(a1 + 11883) = 1;
      }
      KiUpdateThreadPriority(a1, v23, 0LL, v25 == 0);
      KiReleasePrcbLock(a1);
      if ( !v25 && KeHeteroSystem && !KeHeteroSystemVirtual )
        KiSendHeteroRescheduleIntRequest((_QWORD *)a1);
      result = 106;
      _InterlockedAdd16((volatile signed __int16 *)0xFFFFF7800000036ALL, 1u);
      return result;
    }
LABEL_63:
    __fastfail(0x21u);
  }
  if ( !v7 && !v8 )
  {
    if ( (*(_BYTE *)(a1 + 35) & 6) == 2 )
    {
      *(_BYTE *)(a1 + 35) += 4;
      return KiReleasePrcbLock(a1);
    }
    goto LABEL_63;
  }
  v27 = *(unsigned __int8 *)(a1 + 35);
  if ( v7 )
  {
    if ( (v27 & 6) != 0 )
      goto LABEL_63;
    v27 += 2;
    if ( v27 == 2 )
      _InterlockedXor64((volatile signed __int64 *)v3, v4);
  }
  v28 = v27 ^ 4;
  if ( !v5 )
    v28 = v27;
  v29 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 35) = v28;
  if ( !v29 || v29 == v23 )
  {
    v30 = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    _interlockedbittestandreset((volatile signed __int32 *)(v29 + 120), 0xCu);
    KiInsertDeferredReadyList((__int64 *)v51, v29);
    v29 = 0LL;
    v30 = 1;
  }
  v31 = *(_QWORD *)(a1 + 8);
  v32 = 1;
  if ( v31 == v23 )
  {
    if ( v30 )
    {
      KiSetProcessorIdle(a1, 1, 0);
      v33 = v44;
      goto LABEL_71;
    }
    goto LABEL_70;
  }
  if ( v29 )
  {
LABEL_70:
    v33 = 0;
    goto LABEL_71;
  }
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
  {
    v32 = 0;
    goto LABEL_70;
  }
  *(_BYTE *)(v31 + 565) = 1;
  _interlockedbittestandset((volatile signed __int32 *)(v31 + 120), 0xCu);
  *(_QWORD *)(a1 + 16) = v23;
  KiSetProcessorIdle(a1, 1, 0);
  v33 = (*(_BYTE *)(a1 + 11884) & 1) == 0;
LABEL_71:
  if ( v7 )
  {
    KiUpdateThreadPriority(a1, v23, (_SINGLE_LIST_ENTRY *)0x7F, 0);
    if ( v32 )
    {
      if ( (*(_BYTE *)(v23 + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(v23, (struct _KPRCB *)a1), v36 = 1, !IsThreadRankNonZero) )
      {
        v36 = *(_BYTE *)(v23 + 195);
      }
      **(_BYTE **)(a1 + 56) = v36;
      if ( *(_QWORD *)(a1 + 25016) )
      {
        v37 = KiVpThreadSystemWorkPriority;
        if ( v23 != *(_QWORD *)(a1 + 24) )
          v37 = v36;
        KiSetSchedulerAssistPriority(*(volatile signed __int32 **)(a1 + 25016), v37, 0);
      }
    }
    if ( KiGroupSchedulingEnabled )
    {
      LOBYTE(v34) = 1;
      KiGroupSchedulingGenerationEnd(a1, MEMORY[0xFFFFF78000000320], v34);
    }
    KiFlushReadyLists(a1 + 22912, a1 + 22808, v51);
    if ( v48 )
    {
      v38 = KeGetCurrentPrcb();
      v39 = *(volatile signed __int32 **)(a1 + 24904);
      v50[0] = 0;
      while ( 1 )
      {
        v40 = v38->SchedulerAssist;
        if ( v40 )
        {
          if ( v38->NestingLevel <= 1u )
          {
            v41 = v40[5];
            v40[5] = v41 + 1;
            if ( v41 == -1 )
              KiRemoveSystemWorkPriorityKick((__int64)v38);
          }
        }
        if ( !_interlockedbittestandset64(v39, 0LL) )
          break;
        v42 = v38->SchedulerAssist;
        if ( v42 )
        {
          if ( v38->NestingLevel <= 1u )
          {
            v43 = v42[5] - 1;
            v42[5] = v43;
            if ( !v43 )
              KiRemoveSystemWorkPriorityKick((__int64)v38);
          }
        }
        do
          KeYieldProcessorEx(v50);
        while ( *(_QWORD *)v39 );
      }
      KiFlushReadyLists(v39 + 4, v39 + 2, v51);
      _InterlockedAnd64((volatile signed __int64 *)v39, 0LL);
      v45 = KeGetCurrentPrcb();
      v46 = v45->SchedulerAssist;
      if ( v46 )
      {
        if ( v45->NestingLevel <= 1u )
        {
          v47 = v46[5] - 1;
          v46[5] = v47;
          if ( !v47 )
            KiRemoveSystemWorkPriorityKick((__int64)v45);
        }
      }
    }
  }
  KiReleasePrcbLock(a1);
  result = KiReadyDeferredReadyList(a1, v51);
  if ( *(_QWORD *)(a1 + 16) )
  {
    result = *(_BYTE *)(a1 + 11882);
    if ( !result )
      result = KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2);
  }
  if ( v7 )
  {
    result = 106;
    _InterlockedDecrement16((volatile signed __int16 *)0xFFFFF7800000036ALL);
  }
  if ( v33 )
    return KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2);
  return result;
}
