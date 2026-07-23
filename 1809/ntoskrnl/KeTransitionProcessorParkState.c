/*
 * XREFs of KeTransitionProcessorParkState @ 0x14029CF8C
 * Callers:
 *     KiForceIdleParkUnparkProcessor @ 0x14029B198 (KiForceIdleParkUnparkProcessor.c)
 *     PpmParkReportParkedCore @ 0x1402E80E4 (PpmParkReportParkedCore.c)
 *     PpmParkReportUnparkedCore @ 0x1402E8168 (PpmParkReportUnparkedCore.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiInsertDeferredReadyList @ 0x1400ACB08 (KiInsertDeferredReadyList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiReadyDeferredReadyList @ 0x1400CDCA4 (KiReadyDeferredReadyList.c)
 *     KiUpdateThreadPriority @ 0x1400D0DC0 (KiUpdateThreadPriority.c)
 *     KiIsThreadRankNonZero @ 0x1400D1500 (KiIsThreadRankNonZero.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400D312C (KiGroupSchedulingGenerationEnd.c)
 *     KiSetProcessorIdle @ 0x1400D73C4 (KiSetProcessorIdle.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x140298E20 (KiSendHeteroRescheduleIntRequest.c)
 *     KiSetSchedulerAssistPriority @ 0x14029981C (KiSetSchedulerAssistPriority.c)
 *     KiFlushReadyLists @ 0x14029D4B8 (KiFlushReadyLists.c)
 */

__int64 __fastcall KeTransitionProcessorParkState(__int64 a1)
{
  bool v1; // r13
  __int64 v2; // rsi
  char v3; // r12
  unsigned __int64 v4; // rbp
  unsigned __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
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
  __int64 v23; // r9
  __int64 v24; // rdi
  int v25; // eax
  int v26; // eax
  char v27; // si
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  int v30; // eax
  __int64 result; // rax
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rdx
  char v35; // si
  __int64 v36; // r8
  bool IsThreadRankNonZero; // al
  char v38; // cl
  int v39; // edx
  __int64 v40; // rdx
  __int64 v41; // r8
  unsigned __int64 v42; // r9
  struct _KPRCB *v43; // rdi
  volatile signed __int32 *v44; // rsi
  _DWORD *v45; // rcx
  int v46; // eax
  _DWORD *v47; // rcx
  int v48; // eax
  struct _KPRCB *v49; // rcx
  _DWORD *v50; // rdx
  int v51; // eax
  struct _KPRCB *v52; // rcx
  _DWORD *v53; // rdx
  int v54; // eax
  _QWORD *v55[11]; // [rsp+20h] [rbp-58h] BYREF
  char v56; // [rsp+80h] [rbp+8h]
  int v57; // [rsp+88h] [rbp+10h] BYREF
  int v58; // [rsp+90h] [rbp+18h] BYREF
  int v59; // [rsp+98h] [rbp+20h]

  v55[0] = 0LL;
  v1 = 0;
  v2 = *(_QWORD *)(a1 + 192);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 200);
  v56 = 0;
  _m_prefetchw((const void *)(v2 + 80));
  v6 = v4 & *(_QWORD *)(v2 + 80);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 96));
  CurrentPrcb = KeGetCurrentPrcb();
  v57 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v11 = SchedulerAssist[5];
      SchedulerAssist[5] = v11 + 1;
      if ( v11 == -1 )
LABEL_4:
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
      KeYieldProcessorEx(&v57, v7, v8);
    while ( *(_QWORD *)(a1 + 48) );
    v14 = CurrentPrcb->SchedulerAssist;
    if ( v14 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v15 = v14[5];
        v14[5] = v15 + 1;
        if ( v15 == -1 )
          goto LABEL_4;
      }
    }
  }
  _InterlockedXor64((volatile signed __int64 *)(v2 + 80), v4);
  v16 = *(_QWORD *)(a1 + 24896);
  if ( v16 )
  {
    v17 = *(_QWORD *)(a1 + 24904);
    v18 = v16 & *(_QWORD *)(v2 + 80);
    if ( !v18 )
    {
      v56 = 1;
      goto LABEL_24;
    }
    if ( v18 == v4 )
    {
      *(_DWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64
                                                                      * (unsigned __int64)*(unsigned __int8 *)(a1 + 208)
                                                                      + *(unsigned __int8 *)(v17 + 596)]]
                + 24912) = 0;
      v19 = *(_BYTE *)(a1 + 209);
      *(_DWORD *)(a1 + 24912) = 1;
LABEL_23:
      *(_BYTE *)(v17 + 596) = v19;
      goto LABEL_24;
    }
    if ( *(_DWORD *)(a1 + 24912) && v6 )
    {
      _BitScanReverse64(&v20, v18);
      v21 = (unsigned int)v20 + (*(unsigned __int8 *)(a1 + 208) << 6);
      v59 = v20;
      v22 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v21]];
      *(_DWORD *)(a1 + 24912) = 0;
      *(_DWORD *)(v22 + 24912) = 1;
      v19 = *(_BYTE *)(v22 + 209);
      goto LABEL_23;
    }
  }
LABEL_24:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 96));
  v24 = *(_QWORD *)(a1 + 24);
  v25 = *(unsigned __int8 *)(a1 + 35);
  if ( !v6 )
  {
    if ( (v25 & 2) != 0 )
    {
      v26 = v25 - 2;
      *(_BYTE *)(a1 + 35) = v26;
      if ( !v26 )
        _InterlockedXor64((volatile signed __int64 *)v2, v4);
      v27 = 0;
      if ( !v26 )
      {
        *(_BYTE *)(a1 + 11883) = 1;
        v27 = 1;
      }
      LOBYTE(v23) = v27;
      KiUpdateThreadPriority(a1, v24, 0LL, v23);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v28 = KeGetCurrentPrcb();
      v29 = v28->SchedulerAssist;
      if ( v29 )
      {
        if ( v28->NestingLevel <= 1u )
        {
          v30 = v29[5] - 1;
          v29[5] = v30;
          if ( !v30 )
            KiRemoveSystemWorkPriorityKick((__int64)v28);
        }
      }
      if ( v27 && KeHeteroSystem && !KeHeteroSystemVirtual )
        KiSendHeteroRescheduleIntRequest((_QWORD *)a1);
      result = 0xFFFFF7800000036AuLL;
      _InterlockedAdd16((volatile signed __int16 *)0xFFFFF7800000036ALL, 1u);
      return result;
    }
LABEL_40:
    __fastfail(0x21u);
  }
  if ( (v25 & 2) != 0 )
    goto LABEL_40;
  v32 = v25 + 2;
  *(_BYTE *)(a1 + 35) = v32;
  if ( v32 == 2 )
    _InterlockedXor64((volatile signed __int64 *)v2, v4);
  v33 = *(_QWORD *)(a1 + 16);
  if ( v33 && v33 != v24 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    _interlockedbittestandreset((volatile signed __int32 *)(v33 + 120), 0xCu);
    KiInsertDeferredReadyList((__int64)v55, v33);
    v33 = 0LL;
    v3 = 1;
  }
  v34 = *(_QWORD *)(a1 + 8);
  v35 = 1;
  if ( v34 == v24 )
  {
    if ( v3 )
      KiSetProcessorIdle(a1, 1, 0);
  }
  else if ( !v33 )
  {
    if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    {
      v35 = 0;
    }
    else
    {
      *(_BYTE *)(v34 + 565) = 1;
      _interlockedbittestandset((volatile signed __int32 *)(v34 + 120), 0xCu);
      *(_QWORD *)(a1 + 16) = v24;
      KiSetProcessorIdle(a1, 1, 0);
      v1 = (*(_BYTE *)(a1 + 11884) & 1) == 0;
    }
  }
  KiUpdateThreadPriority(a1, v24, (_SINGLE_LIST_ENTRY *)0x7F, 0LL);
  if ( v35 )
  {
    if ( (*(_BYTE *)(v24 + 2) & 4) == 0
      || (IsThreadRankNonZero = KiIsThreadRankNonZero(v24, (struct _KPRCB *)a1), v38 = 1, !IsThreadRankNonZero) )
    {
      v38 = *(_BYTE *)(v24 + 195);
    }
    **(_BYTE **)(a1 + 56) = v38;
    if ( *(_QWORD *)(a1 + 25016) )
    {
      v39 = KiVpThreadSystemWorkPriority;
      if ( v24 != *(_QWORD *)(a1 + 24) )
        v39 = v38;
      KiSetSchedulerAssistPriority(*(volatile signed __int32 **)(a1 + 25016), v39, 0);
    }
  }
  if ( KiGroupSchedulingEnabled )
  {
    LOBYTE(v36) = 1;
    KiGroupSchedulingGenerationEnd((struct _KPRCB *)a1, MEMORY[0xFFFFF78000000320], v36);
  }
  KiFlushReadyLists(a1 + 22912, a1 + 22808, v55);
  if ( v56 )
  {
    v43 = KeGetCurrentPrcb();
    v44 = *(volatile signed __int32 **)(a1 + 24904);
    v58 = 0;
    while ( 1 )
    {
      v45 = v43->SchedulerAssist;
      if ( v45 )
      {
        if ( v43->NestingLevel <= 1u )
        {
          v46 = v45[5];
          v45[5] = v46 + 1;
          if ( v46 == -1 )
            KiRemoveSystemWorkPriorityKick((__int64)v43);
        }
      }
      if ( !_interlockedbittestandset64(v44, 0LL) )
        break;
      v47 = v43->SchedulerAssist;
      if ( v47 )
      {
        if ( v43->NestingLevel <= 1u )
        {
          v48 = v47[5] - 1;
          v47[5] = v48;
          if ( !v48 )
            KiRemoveSystemWorkPriorityKick((__int64)v43);
        }
      }
      do
        KeYieldProcessorEx(&v58, v40, v41);
      while ( *(_QWORD *)v44 );
    }
    KiFlushReadyLists(v44 + 4, v44 + 2, v55);
    _InterlockedAnd64((volatile signed __int64 *)v44, 0LL);
    v49 = KeGetCurrentPrcb();
    v50 = v49->SchedulerAssist;
    if ( v50 )
    {
      if ( v49->NestingLevel <= 1u )
      {
        v51 = v50[5] - 1;
        v50[5] = v51;
        if ( !v51 )
          KiRemoveSystemWorkPriorityKick((__int64)v49);
      }
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  v52 = KeGetCurrentPrcb();
  v53 = v52->SchedulerAssist;
  if ( v53 )
  {
    if ( v52->NestingLevel <= 1u )
    {
      v54 = v53[5] - 1;
      v53[5] = v54;
      if ( !v54 )
        KiRemoveSystemWorkPriorityKick((__int64)v52);
    }
  }
  KiReadyDeferredReadyList(a1, v55, v41, v42);
  if ( *(_QWORD *)(a1 + 16) && !*(_BYTE *)(a1 + 11882) )
    KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2);
  result = 0xFFFFF7800000036AuLL;
  _InterlockedDecrement16((volatile signed __int16 *)0xFFFFF7800000036ALL);
  if ( v1 )
    return KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2);
  return result;
}
