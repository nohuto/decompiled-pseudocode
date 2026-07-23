/*
 * XREFs of KeInsertQueueApc @ 0x1400F1500
 * Callers:
 *     IopCompleteRequest @ 0x1400BFC50 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400C1030 (IopfCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x1400C8420 (EtwpEventWriteFull.c)
 *     ExpTimerDpcRoutine @ 0x140136230 (ExpTimerDpcRoutine.c)
 *     MiStoreModifiedWriteDereference @ 0x14014CC1C (MiStoreModifiedWriteDereference.c)
 *     IoRaiseHardError @ 0x140283440 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x1402836F0 (IoRaiseInformationalHardError.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1402B8AE8 (MiQueueSyncModifiedWriterApc.c)
 *     EtwpQueueStackWalkApc @ 0x14030F450 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140314058 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140316D1C (EtwpCovSampCaptureQueueApc.c)
 *     CmpPostNotify @ 0x1405DD29C (CmpPostNotify.c)
 *     PspSetContextThreadInternal @ 0x140621A30 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140621C00 (PspGetContextThreadInternal.c)
 *     PerfLogImageUnload @ 0x1406786CC (PerfLogImageUnload.c)
 *     NtQueueApcThreadEx @ 0x140678850 (NtQueueApcThreadEx.c)
 *     IopCancelIrpsInThreadList @ 0x1406A7CA8 (IopCancelIrpsInThreadList.c)
 *     ExSwapinWorkerThreads @ 0x1406E15BC (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140812F34 (DbgkpLkmdLaunchSnapApc.c)
 *     KeSpecialUserApcKernelRoutine @ 0x1408459C0 (KeSpecialUserApcKernelRoutine.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1408903AC (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     EtwProviderEnabled @ 0x1400F1800 (EtwProviderEnabled.c)
 *     KiSignalThreadForApc @ 0x1400F2004 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1400F21A0 (KiInsertQueueApc.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTiLogQueueApcThread @ 0x140312A70 (EtwTiLogQueueApcThread.c)
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
