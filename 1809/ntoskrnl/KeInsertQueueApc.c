/*
 * XREFs of KeInsertQueueApc @ 0x1400F1480
 * Callers:
 *     IopCompleteRequest @ 0x1400BFD10 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400C10F0 (IopfCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x1400C84E0 (EtwpEventWriteFull.c)
 *     ExpTimerDpcRoutine @ 0x140136130 (ExpTimerDpcRoutine.c)
 *     MiStoreModifiedWriteDereference @ 0x14014CB1C (MiStoreModifiedWriteDereference.c)
 *     IoRaiseHardError @ 0x140283250 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140283500 (IoRaiseInformationalHardError.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1402B88F8 (MiQueueSyncModifiedWriterApc.c)
 *     EtwpQueueStackWalkApc @ 0x14030F260 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140313E68 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140316B2C (EtwpCovSampCaptureQueueApc.c)
 *     CmpPostNotify @ 0x1405DC29C (CmpPostNotify.c)
 *     PspSetContextThreadInternal @ 0x140620A30 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140620C00 (PspGetContextThreadInternal.c)
 *     PerfLogImageUnload @ 0x14067750C (PerfLogImageUnload.c)
 *     NtQueueApcThreadEx @ 0x140677690 (NtQueueApcThreadEx.c)
 *     IopCancelIrpsInThreadList @ 0x1406A6A08 (IopCancelIrpsInThreadList.c)
 *     ExSwapinWorkerThreads @ 0x1406E031C (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140811D34 (DbgkpLkmdLaunchSnapApc.c)
 *     KeSpecialUserApcKernelRoutine @ 0x140844760 (KeSpecialUserApcKernelRoutine.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14088F14C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeYieldProcessorEx @ 0x14006C9F0 (KeYieldProcessorEx.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACDF0 (ObfReferenceObjectWithTag.c)
 *     KiExitDispatcher @ 0x1400C2F70 (KiExitDispatcher.c)
 *     EtwProviderEnabled @ 0x1400F1780 (EtwProviderEnabled.c)
 *     KiSignalThreadForApc @ 0x1400F1F84 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1400F2120 (KiInsertQueueApc.c)
 *     KiReleaseThreadLockSafe @ 0x14010C410 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTiLogQueueApcThread @ 0x140312880 (EtwTiLogQueueApcThread.c)
 */

char __fastcall KeInsertQueueApc(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  BOOLEAN v7; // al
  __int64 v8; // rdx
  __int64 v9; // r8
  bool v10; // bp
  __int64 v11; // rdi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *SchedulerAssist; // rcx
  __int64 v15; // r8
  char v16; // bl
  _DWORD *v18; // rcx
  int v19; // eax
  int v20; // eax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v22; // [rsp+30h] [rbp-48h]
  __int64 v23; // [rsp+38h] [rbp-40h]
  int v24; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v25; // [rsp+98h] [rbp+20h]

  v25 = a4;
  v7 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x3000uLL);
  v22 = *(_QWORD *)(a1 + 56);
  v23 = *(_QWORD *)(a1 + 48);
  v10 = v7 && *(_BYTE *)(a1 + 81);
  v11 = *(_QWORD *)(a1 + 8);
  if ( v10 )
    ObfReferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x5149654Bu);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v24 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v19 = SchedulerAssist[5];
        SchedulerAssist[5] = v19 + 1;
        if ( v19 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v11 + 64), 0LL) )
      break;
    v18 = CurrentPrcb->SchedulerAssist;
    if ( v18 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v20 = v18[5] - 1;
        v18[5] = v20;
        if ( !v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v24, v8, v9);
    while ( *(_QWORD *)(v11 + 64) );
  }
  if ( (*(_DWORD *)(v11 + 116) & 0x4000) == 0 || *(_BYTE *)(a1 + 82) )
  {
    v16 = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 64) = a2;
    *(_QWORD *)(a1 + 72) = a3;
    KiInsertQueueApc(a1);
    LOBYTE(v15) = CurrentIrql;
    KiSignalThreadForApc(CurrentPrcb, a1, v15);
    v16 = 1;
  }
  KiReleaseThreadLockSafe(v11);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, v25, CurrentIrql);
  if ( v10 )
  {
    if ( v16 )
    {
      CurrentThread = KeGetCurrentThread();
      LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
      EtwTiLogQueueApcThread((_DWORD)CurrentThread, v11, v23, v22, a2, a3);
    }
    ObfDereferenceObjectWithTag((PVOID)v11, 0x5149654Bu);
  }
  return v16;
}
