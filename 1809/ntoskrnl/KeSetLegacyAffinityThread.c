/*
 * XREFs of KeSetLegacyAffinityThread @ 0x140115260
 * Callers:
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14009D090 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiReadyDeferredReadyList @ 0x1400CDCA4 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiSetAffinityThread @ 0x1401154EC (KiSetAffinityThread.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 */

__int64 __fastcall KeSetLegacyAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v8; // rbx
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  __int64 CurrentThread; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _KPRCB *v15; // rbx
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v17; // rcx
  _KTHREAD *NextThread; // rbx
  __int64 v19; // r8
  __int64 v20; // r8
  int v21; // eax
  int v22; // eax
  struct _KPRCB *v23; // rcx
  struct _KPRCB *v24; // rcx
  struct _KPRCB *v25; // rcx
  int v26; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v27; // [rsp+28h] [rbp-50h] BYREF
  __int64 v28; // [rsp+30h] [rbp-48h] BYREF
  __int64 v29; // [rsp+38h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 544);
  v3 = 0LL;
  if ( a2 )
  {
    v27 = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
    LOWORD(v29) = *(_WORD *)(a1 + 560);
    v8 = qword_1405426A8[(unsigned __int16)v29] & a2;
    if ( v8 && (v8 & *(_QWORD *)(v2 + 8LL * (unsigned __int16)v29 + 88)) == v8 )
    {
      v3 = *(_QWORD *)(a1 + 552);
      v28 = v8;
      KiSetAffinityThread(a1, &v27, &v28);
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
    KiReadyDeferredReadyList((__int64)CurrentPrcb, &v27, v9, v10);
    if ( CurrentIrql >= 2u )
    {
      if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
        KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
    else
    {
      CurrentThread = (__int64)CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
        v15 = KeGetCurrentPrcb();
        v26 = 0;
        while ( 1 )
        {
          SchedulerAssist = v15->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( v15->NestingLevel <= 1u )
            {
              v21 = SchedulerAssist[5];
              SchedulerAssist[5] = v21 + 1;
              if ( v21 == -1 )
                KiRemoveSystemWorkPriorityKick(v15);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            break;
          v17 = v15->SchedulerAssist;
          if ( v17 )
          {
            if ( v15->NestingLevel <= 1u )
            {
              v22 = v17[5] - 1;
              v17[5] = v22;
              if ( !v22 )
                KiRemoveSystemWorkPriorityKick(v15);
            }
          }
          do
            KeYieldProcessorEx(&v26, v13, v14);
          while ( CurrentPrcb->PrcbLock );
        }
        NextThread = CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
        _enable();
        KiUpdatePriorityMatrixThreadState(CurrentPrcb, NextThread, 0LL, 2LL);
        *(_BYTE *)(CurrentThread + 643) = 32;
        *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
        KiQueueReadyThread(CurrentPrcb, CurrentThread, v19);
        LOBYTE(v20) = CurrentIrql;
        if ( (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v20) )
        {
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
          {
            v23 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v23->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v23);
          }
          __writecr8(1uLL);
          *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
          KiDeliverApc(0, 0, 0LL);
        }
      }
      else if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) != 0 )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v24->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v24);
        }
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v25 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v25);
      }
      __writecr8(CurrentIrql);
    }
  }
  return v3;
}
