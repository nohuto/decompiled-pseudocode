/*
 * XREFs of PopInvokeSystemStateHandler @ 0x140598740
 * Callers:
 *     PopEndMirroring @ 0x140599140 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x14059BD10 (PopTransitionToSleep.c)
 *     PopShutdownSystem @ 0x1405ADF04 (PopShutdownSystem.c)
 * Callees:
 *     KeInitializeDpc @ 0x1400B8D00 (KeInitializeDpc.c)
 *     KeInsertQueueDpc @ 0x1400BCAD0 (KeInsertQueueDpc.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400F8850 (KeSetSystemGroupAffinityThread.c)
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     VfIsVerifierEnabled @ 0x14013D624 (VfIsVerifierEnabled.c)
 *     KeRebaselineInterruptTime @ 0x14015F6FC (KeRebaselineInterruptTime.c)
 *     KeRebaselineSystemTime @ 0x14016A18C (KeRebaselineSystemTime.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x1401CB970 (DbgBreakPointWithStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopIssueNextState @ 0x140598D0C (PopIssueNextState.c)
 *     PopCheckpointSystemSleep @ 0x1405990D4 (PopCheckpointSystemSleep.c)
 *     MmInvalidateDumpAddresses @ 0x14059CE88 (MmInvalidateDumpAddresses.c)
 *     MiConvertHiberPhasePages @ 0x14059CF64 (MiConvertHiberPhasePages.c)
 *     MiUpdateUserMappings @ 0x14059D018 (MiUpdateUserMappings.c)
 *     VfNotifyOfHibernate @ 0x14096A63C (VfNotifyOfHibernate.c)
 *     BgLibraryInitialize @ 0x14098E830 (BgLibraryInitialize.c)
 */

__int64 __fastcall PopInvokeSystemStateHandler(int a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned __int8 CurrentIrql; // r13
  signed int Next; // r12d
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(ULONG_PTR); // rsi
  __int64 v8; // rdi
  __int64 *v9; // rsi
  __int64 v10; // rbx
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  char v14; // bl
  char v15; // bl
  __int64 v16; // rcx
  char v17; // al
  __int64 v19; // rcx
  unsigned int i; // ebx
  int v21; // edi
  bool v22; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  LARGE_INTEGER v24; // [rsp+30h] [rbp-D0h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER v26; // [rsp+48h] [rbp-B8h] BYREF
  struct _KDPC Dpc; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD DeferredContext[10]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v29; // [rsp+E0h] [rbp-20h] BYREF
  int v30; // [rsp+E8h] [rbp-18h]
  int v31; // [rsp+ECh] [rbp-14h]
  _QWORD v32[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v33[2]; // [rsp+100h] [rbp+0h] BYREF
  _SLIST_ENTRY v34[9]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v35[3]; // [rsp+1A0h] [rbp+A0h] BYREF

  v2 = a1;
  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  memset(&Dpc, 0, sizeof(Dpc));
  memset(v34, 0, sizeof(v34));
  v24.QuadPart = 0LL;
  CurrentIrql = 0;
  Next = -1073741823;
  memset(DeferredContext, 0, sizeof(DeferredContext));
  LODWORD(DeferredContext[5]) = v2;
  memset(v35, 0, sizeof(v35));
  DeferredContext[0] = v35;
  DeferredContext[4] = &PopPowerStateNotifyHandler;
  if ( (_DWORD)v2 != 7 )
  {
    DeferredContext[0] = (char *)&PopPowerStateHandlers + 24 * v2;
    if ( !*(_QWORD *)(DeferredContext[0] + 8LL) )
      return 3221225664LL;
  }
  LODWORD(DeferredContext[6]) = KeNumberProcessors_0;
  HIDWORD(DeferredContext[7]) = KeNumberProcessors_0;
  LODWORD(DeferredContext[7]) = 1;
  if ( (unsigned int)(v2 - 4) > 1 && PopCheckpointSystemSleepEnabled )
  {
    v19 = *(unsigned int *)(DeferredContext[0] + 16LL);
    LODWORD(v19) = v19 | 0x40000;
    *(_QWORD *)(DeferredContext[0] + 16LL) = v19;
  }
  if ( ((_DWORD)v2 == 3 || (_DWORD)v2 == 6) && a2 )
  {
    v6 = a2;
    DeferredContext[2] = a2;
    v7 = PopSaveHiberContextWrapper;
    DeferredContext[3] = a2;
    DeferredContext[1] = PopSaveHiberContextWrapper;
    v8 = a2;
  }
  else
  {
    v6 = DeferredContext[3];
    v8 = DeferredContext[2];
    v7 = (__int64 (__fastcall *)(ULONG_PTR))DeferredContext[1];
  }
  memset(v34, 0, sizeof(v34));
  if ( a2 )
  {
    PopHibernateSystemContext = DeferredContext[0];
    qword_140468070 = DeferredContext[4];
    dword_140468078 = DeferredContext[5];
    byte_14046807C = BYTE4(DeferredContext[5]);
    dword_140468080 = DeferredContext[6];
    qword_140468058 = (__int64)v7;
    v9 = &PopHibernateSystemContext;
    qword_140468060 = v8;
    qword_140468068 = v6;
    qword_140468088 = DeferredContext[7];
    RtlpInterlockedPushEntrySList(&SListHead, &v34[8]);
  }
  else
  {
    Affinity.Reserved[1] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
    Affinity.Reserved[2] = 0;
    Affinity.Mask = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    KeInitializeDpc(&Dpc, PopInvokeStateHandlerTargetProcessor, DeferredContext);
    Dpc.Importance = 2;
    for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
    {
      if ( i != KeGetCurrentPrcb()->Number )
      {
        v21 = HIDWORD(DeferredContext[6]);
        if ( !Dpc.DpcData )
          Dpc.Number = i + 1280;
        KeInsertQueueDpc(&Dpc, 0LL, 0LL);
        while ( v21 == HIDWORD(DeferredContext[6]) )
          _mm_pause();
      }
    }
    v9 = DeferredContext;
  }
  PopIssueNextState(v9, v34, 2LL);
  PopIssueNextState(v9, v34, 3LL);
  if ( dword_140443060 == 4 )
  {
    PerformanceCounter.QuadPart = 0LL;
    v10 = 1000000LL * KeGetCurrentPrcb()->MHz;
  }
  else
  {
    v10 = PopQpcFrequency;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  }
  if ( (xmmword_140572410 & 0x8000) != 0 )
  {
    v31 = 0;
    v29 = v33;
    v33[0] = PerformanceCounter.QuadPart;
    v33[1] = v10;
    v30 = 16;
    EtwTraceKernelEvent((__int64)&v29, 1u, 0x80008000, 0x1230u, 0x401802u);
  }
  PopIssueNextState(v9, v34, 4LL);
  if ( a2 )
  {
    RtlpDebugPrintCallbacksActive = 0;
    if ( (unsigned int)VfIsVerifierEnabled() )
    {
      LOBYTE(v12) = 1;
      VfNotifyOfHibernate(v12);
    }
  }
  PoAllProcIntrDisabled = 1;
  PopCheckpointSystemSleep(17LL);
  if ( SLODWORD(v34[7].Next) >= 0 )
  {
    *((_BYTE *)v9 + 44) = 1;
    PopIssueNextState(v9, v34, 12LL);
    if ( (_DWORD)v2 != 3 && (_DWORD)v2 != 6 )
      off_140424608[0]();
    if ( a2 )
    {
      PopIssueNextState(v9, v34, 5LL);
      if ( (PopSimulateHiberBugcheck & 0x100) == 0 )
        MiUpdateUserMappings();
      PopIssueNextState(v9, v34, 10LL);
    }
    PopCheckpointSystemSleep(18LL);
    PopIssueNextState(v9, v34, 6LL);
    PopCheckpointSystemSleep(26LL);
    Next = (signed int)v34[7].Next;
    KeRebaselineInterruptTime();
    off_1404245F8[0]();
    if ( a2 && Next == 1073742484 )
      PopIssueNextState(v9, v34, 7LL);
    PopIssueNextState(v9, v34, 8LL);
    if ( a2 )
    {
      if ( Next == 1073742484 )
      {
        PopCheckpointSystemSleep(27LL);
        PopIssueNextState(v9, v34, 9LL);
        PopCheckpointSystemSleep(32LL);
      }
      MmInvalidateDumpAddresses(qword_140443428, 19LL);
      v13 = *(_QWORD *)(a2 + 304);
      if ( v13 )
        MmInvalidateDumpAddresses(v13, (unsigned int)(16 * *(_DWORD *)(a2 + 256)));
      PopIssueNextState(v9, v34, 10LL);
      if ( (PopSimulateHiberBugcheck & 0x100) == 0 )
      {
        MiUpdateUserMappings();
        MiConvertHiberPhasePages(0LL);
      }
      *(_BYTE *)(a2 + 3) = 0;
      PopIssueNextState(v9, v34, 11LL);
    }
    v14 = PopDebugFlags;
    if ( (PopDebugFlags & 1) != 0 && (_BYTE)KdDebuggerEnabled )
      DbgBreakPointWithStatus(Next);
    if ( (v14 & 2) != 0 )
      KeBugCheckEx(0xA0u, 0xAuLL, 0LL, 0LL, 0LL);
    PopNoMoreInput = 0;
    if ( Next >= 0 )
    {
      ++PoPowerSequence;
      PopFullWake = 0;
      PopPendingUserPresenceDuringSystemSleep = 0;
      PopPendingUserPresenceMonitorOnReason = 0;
      dword_140442F68 = 1;
      if ( PoResumeFromHibernate )
      {
        _InterlockedOr(&PopPendingUserPresenceDuringSystemSleep, 1u);
        _InterlockedOr(&PopPendingUserPresenceMonitorOnReason, 0x19u);
      }
    }
    *((_BYTE *)v9 + 44) = 0;
    PopIssueNextState(v9, v34, 12LL);
  }
  if ( a2 )
  {
    if ( Next == -1073741632 )
    {
      if ( (PopSimulate & 0x1000) == 0 )
      {
        while ( 1 )
          ;
      }
      *(_BYTE *)a2 = 1;
    }
    else
    {
      PoHiberInProgress = 0;
      *(_DWORD *)(a2 + 188) = Next;
      if ( !*(_BYTE *)a2 )
      {
        if ( (unsigned int)VfIsVerifierEnabled() )
          VfNotifyOfHibernate(0LL);
        if ( RtlpDebugPrintCallbackList == (_UNKNOWN *)&RtlpDebugPrintCallbackList )
          RtlpDebugPrintCallbacksActive = 1;
        *(_DWORD *)(a2 + 188) = 1073742484;
        goto LABEL_49;
      }
    }
    v22 = qword_140443BC0 == 0;
    *v9 = (__int64)&unk_140443BB8;
    v9[3] = 0LL;
    if ( !v22 )
      PopIssueNextState(v9, v34, 6LL);
    HalReturnToFirmware(3LL);
  }
LABEL_49:
  KeRebaselineInterruptTime();
  KeRebaselineSystemTime();
  PopCheckpointSystemSleep(33LL);
  PoAllProcIntrDisabled = 0;
  PopIssueNextState(v9, v34, 13LL);
  if ( Next >= 0 )
  {
    if ( dword_140443060 != 4 || PoResumeFromHibernate )
    {
      v15 = 0;
      v24 = KeQueryPerformanceCounter(0LL);
      ((void (__fastcall *)(void *, __int64 *))off_1404243E0[0])(&unk_140443648, &qword_140443650);
    }
    else
    {
      v15 = 1;
      if ( !((unsigned __int8 (__fastcall *)(LARGE_INTEGER *, _QWORD))off_1404243E0[0])(&v24, 0LL) )
        v24.QuadPart = 0LL;
    }
    if ( (xmmword_140572410 & 0x8000) != 0 )
    {
      v26 = v24;
      v32[1] = 8LL;
      v32[0] = &v26;
      EtwTraceKernelEvent((__int64)v32, 1u, 0x80008000, 0x1231u, 0x401802u);
    }
    if ( v15 )
    {
      v24.QuadPart = v24.QuadPart / (1000 * (unsigned __int64)KeGetCurrentPrcb()->MHz) * (PopQpcFrequency / 0x3E8uLL);
      qword_140443528 = v24.QuadPart - PerformanceCounter.QuadPart;
    }
  }
  PopIssueNextState(v9, v34, 14LL);
  PopIssueNextState(v9, v34, 15LL);
  PopIssueNextState(v9, v34, 16LL);
  if ( SLODWORD(v34[7].Next) >= 0 )
  {
    v16 = *v9;
    LODWORD(v34[7].Next) = 0;
    v17 = *(_BYTE *)(v16 + 5);
    if ( v17 != -1 )
      *(_BYTE *)(v16 + 5) = v17 + 1;
  }
  if ( a2 )
  {
    if ( !byte_140443441 && Next == 1073742484 )
    {
      if ( byte_140468030 )
        BgLibraryInitialize(Address, 0LL);
    }
  }
  else
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(CurrentIrql);
  }
  return LODWORD(v34[7].Next);
}
