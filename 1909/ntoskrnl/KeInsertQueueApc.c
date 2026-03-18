/*
 * XREFs of KeInsertQueueApc @ 0x1400E5200
 * Callers:
 *     IopCompleteRequest @ 0x140065750 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x140066B60 (IopfCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x1400A0020 (EtwpEventWriteFull.c)
 *     ExpTimerDpcRoutine @ 0x1401015F0 (ExpTimerDpcRoutine.c)
 *     MiStoreModifiedWriteDereference @ 0x14014A5E4 (MiStoreModifiedWriteDereference.c)
 *     IoRaiseHardError @ 0x1402983C0 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140298680 (IoRaiseInformationalHardError.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1402CE9F8 (MiQueueSyncModifiedWriterApc.c)
 *     EtwpQueueStackWalkApc @ 0x14032C950 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140331C98 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140334FB8 (EtwpCovSampCaptureQueueApc.c)
 *     PspSetContextThreadInternal @ 0x1405E5AE0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1405E8510 (PspGetContextThreadInternal.c)
 *     CmpPostNotify @ 0x140631680 (CmpPostNotify.c)
 *     PerfLogImageUnload @ 0x14067E0E0 (PerfLogImageUnload.c)
 *     IopCancelIrpsInThreadList @ 0x1406D0294 (IopCancelIrpsInThreadList.c)
 *     NtQueueApcThreadEx @ 0x1406D84B0 (NtQueueApcThreadEx.c)
 *     ExSwapinWorkerThreads @ 0x14072BB98 (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14084AE74 (DbgkpLkmdLaunchSnapApc.c)
 *     KeSpecialUserApcKernelRoutine @ 0x14087F860 (KeSpecialUserApcKernelRoutine.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1408CCDEC (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KiExitDispatcher @ 0x140067E50 (KiExitDispatcher.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     EtwProviderEnabled @ 0x1400E5560 (EtwProviderEnabled.c)
 *     KiSignalThreadForApc @ 0x1400E5680 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1400E5808 (KiInsertQueueApc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTiLogInsertQueueUserApc @ 0x140330530 (EtwTiLogInsertQueueUserApc.c)
 */

char __fastcall KeInsertQueueApc(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  BOOLEAN v7; // al
  char v8; // r10
  BOOLEAN v9; // r11
  bool v10; // cl
  __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rdx
  _KPROCESS *v13; // rax
  bool v14; // zf
  char v15; // r15
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *SchedulerAssist; // rcx
  __int64 v19; // r8
  char v20; // bl
  _DWORD *v22; // rcx
  int v23; // eax
  int v24; // eax
  struct _KTHREAD *v25; // rcx
  int v26; // [rsp+40h] [rbp-58h] BYREF
  __int64 v27; // [rsp+48h] [rbp-50h]
  __int64 v28; // [rsp+50h] [rbp-48h]
  char v29; // [rsp+A0h] [rbp+8h]

  v7 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x3000uLL);
  v8 = *(_BYTE *)(a1 + 81);
  v9 = v7;
  v27 = *(_QWORD *)(a1 + 56);
  v29 = v8 != 0;
  v28 = *(_QWORD *)(a1 + 48);
  v10 = *(__int64 (__fastcall **)(int, int, int, int, __int64))(a1 + 32) == KeSpecialUserApcKernelRoutine && !v8;
  v11 = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  v13 = *(_KPROCESS **)(v11 + 544);
  if ( v8 )
    v14 = CurrentThread->Process == v13;
  else
    v14 = CurrentThread->ApcState.Process == v13;
  if ( v9 && !v14 && (v8 || v10) )
  {
    v15 = 1;
    ObfReferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x5149654Bu);
  }
  else
  {
    v15 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v26 = 0;
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
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v11 + 64), 0LL) )
      break;
    v22 = CurrentPrcb->SchedulerAssist;
    if ( v22 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v24 = v22[5] - 1;
        v22[5] = v24;
        if ( !v24 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v26);
    while ( *(_QWORD *)(v11 + 64) );
  }
  if ( (*(_DWORD *)(v11 + 116) & 0x4000) == 0 || *(_BYTE *)(a1 + 82) )
  {
    v20 = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 64) = a2;
    *(_QWORD *)(a1 + 72) = a3;
    KiInsertQueueApc(a1);
    LOBYTE(v19) = CurrentIrql;
    KiSignalThreadForApc(CurrentPrcb, a1, v19);
    v20 = 1;
  }
  KiReleaseThreadLockSafe(v11);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, a4, CurrentIrql);
  if ( v15 )
  {
    if ( v20 )
    {
      v25 = KeGetCurrentThread();
      LOBYTE(v25) = v25->PreviousMode;
      EtwTiLogInsertQueueUserApc((_DWORD)v25, v11, v28, v27, a2, a3, v29);
    }
    ObfDereferenceObjectWithTag((PVOID)v11, 0x5149654Bu);
  }
  return v20;
}
