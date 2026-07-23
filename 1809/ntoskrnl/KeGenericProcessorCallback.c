/*
 * XREFs of KeGenericProcessorCallback @ 0x1400D8710
 * Callers:
 *     KeFlushQueuedDpcs @ 0x1400DBED0 (KeFlushQueuedDpcs.c)
 *     ExpUpdateTimerConfiguration @ 0x1400E2088 (ExpUpdateTimerConfiguration.c)
 *     KeDisableTimer2 @ 0x1400FB1D4 (KeDisableTimer2.c)
 *     KeGenericCallDpc @ 0x140120460 (KeGenericCallDpc.c)
 *     KeRemoveQueueDpcEx @ 0x140132AD0 (KeRemoveQueueDpcEx.c)
 *     KeSetIntervalProfile @ 0x1406D7F60 (KeSetIntervalProfile.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KiEnumerateNextProcessorNumber @ 0x140063C4C (KiEnumerateNextProcessorNumber.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KeSetPriorityThread @ 0x1400CD8F0 (KeSetPriorityThread.c)
 *     KeSetPriorityBoost @ 0x1400CEF60 (KeSetPriorityBoost.c)
 *     KiRemoveBoostThread @ 0x1400CFE60 (KiRemoveBoostThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D6F10 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D8290 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

char __fastcall KeGenericProcessorCallback(
        unsigned __int16 *a1,
        void (__fastcall *a2)(struct _KPRCB *, _SINGLE_LIST_ENTRY *),
        _SINGLE_LIST_ENTRY *a3,
        unsigned __int64 a4)
{
  char v4; // r14
  unsigned __int16 *v6; // rbx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  KPRIORITY v9; // r12d
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int16 *v11; // rax
  _SINGLE_LIST_ENTRY *v12; // rbx
  __int64 v13; // r8
  unsigned __int8 CurrentIrql; // r15
  int v15; // r14d
  _KTHREAD *NextThread; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  struct _KPRCB *v20; // rbx
  _DWORD *SchedulerAssist; // rcx
  _KTHREAD *v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r8
  int v25; // eax
  _DWORD *v26; // rcx
  int v27; // eax
  struct _KPRCB *v28; // rcx
  struct _KPRCB *v29; // rcx
  unsigned __int16 v31; // [rsp+20h] [rbp-E0h] BYREF
  char v32; // [rsp+22h] [rbp-DEh]
  int v33; // [rsp+24h] [rbp-DCh]
  int v34; // [rsp+28h] [rbp-D8h] BYREF
  _SINGLE_LIST_ENTRY *v35; // [rsp+30h] [rbp-D0h]
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 *v37[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v38; // [rsp+58h] [rbp-A8h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v40[22]; // [rsp+70h] [rbp-90h] BYREF

  v35 = a3;
  v4 = a4;
  v6 = a1;
  if ( !a1 )
  {
    LODWORD(v40[0]) = 1310721;
    v6 = (unsigned __int16 *)v40;
    memset((char *)v40 + 4, 0, 0xA4uLL);
    v40[1] |= 1uLL;
  }
  p_PreviousAffinity = &PreviousAffinity;
  CurrentPrcb = 0LL;
  *(_DWORD *)Affinity.Reserved = 0;
  v9 = 0;
  Affinity.Reserved[2] = 0;
  CurrentThread = KeGetCurrentThread();
  v33 = v4 & 2;
  if ( (v4 & 2) != 0 )
    v9 = KeSetPriorityThread(CurrentThread, 30);
  else
    KeSetPriorityBoost((__int64)CurrentThread, 15LL, a3, a4);
  v11 = (unsigned __int16 *)*((_QWORD *)v6 + 1);
  v37[0] = v6;
  v12 = v35;
  v38 = 0;
  v37[1] = v11;
  while ( !(unsigned int)KiEnumerateNextProcessorNumber((__int64)&v31, v37) )
  {
    Affinity.Group = v31;
    Affinity.Mask = 1LL << v32;
    KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
    CurrentPrcb = KeGetCurrentPrcb();
    a2(CurrentPrcb, v12);
    p_PreviousAffinity = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v15 = v33;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb->DpcRoutineActive = 1;
  if ( v15 )
    KeSetPriorityThread(CurrentThread, v9);
  else
    KiRemoveBoostThread((__int64)CurrentPrcb, (__int64)CurrentThread, v13);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  CurrentPrcb->DpcRoutineActive = 0;
  NextThread = CurrentPrcb->NextThread;
  if ( CurrentIrql < 2u )
  {
    v17 = (__int64)CurrentPrcb->CurrentThread;
    if ( NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v20 = KeGetCurrentPrcb();
      v34 = 0;
      while ( 1 )
      {
        SchedulerAssist = v20->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( v20->NestingLevel <= 1u )
          {
            v25 = SchedulerAssist[5];
            SchedulerAssist[5] = v25 + 1;
            if ( v25 == -1 )
              KiRemoveSystemWorkPriorityKick(v20);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v26 = v20->SchedulerAssist;
        if ( v26 )
        {
          if ( v20->NestingLevel <= 1u )
          {
            v27 = v26[5] - 1;
            v26[5] = v27;
            if ( !v27 )
              KiRemoveSystemWorkPriorityKick(v20);
          }
        }
        do
          KeYieldProcessorEx(&v34, v18, v19);
        while ( CurrentPrcb->PrcbLock );
      }
      v22 = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v17, 0LL);
      _enable();
      KiUpdatePriorityMatrixThreadState(CurrentPrcb, v22, 0LL, 2LL);
      *(_BYTE *)(v17 + 643) = 32;
      *(_BYTE *)(v17 + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, v17, v23);
      LOBYTE(v24) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(v17, v22, v24) )
        goto LABEL_14;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
        goto LABEL_28;
    }
    else
    {
      if ( (*(_DWORD *)(v17 + 116) & 0x40) == 0 )
        goto LABEL_14;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
      {
LABEL_28:
        __writecr8(1uLL);
        *(_DWORD *)(v17 + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
LABEL_14:
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v29->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v29);
        }
        LOBYTE(NextThread) = CurrentIrql;
        __writecr8(CurrentIrql);
        return (char)NextThread;
      }
    }
    v28 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v28);
    goto LABEL_28;
  }
  if ( NextThread )
  {
    LOBYTE(NextThread) = CurrentPrcb->DpcRoutineActive;
    if ( !(_BYTE)NextThread )
      LOBYTE(NextThread) = KiRequestSoftwareInterrupt(CurrentPrcb, 2);
  }
  return (char)NextThread;
}
