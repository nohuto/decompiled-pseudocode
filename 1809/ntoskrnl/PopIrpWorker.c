/*
 * XREFs of PopIrpWorker @ 0x140171840
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeReleaseSemaphoreEx @ 0x1400D29F0 (KeReleaseSemaphoreEx.c)
 *     PoDeviceAcquireIrp @ 0x140171EA0 (PoDeviceAcquireIrp.c)
 *     PopPepDeviceDState @ 0x140172084 (PopPepDeviceDState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopDoesFxDeviceSupportDirectedTransition @ 0x1402D6D00 (PopDoesFxDeviceSupportDirectedTransition.c)
 *     PopFxIssueDirectedPowerTransition @ 0x1402D8A5C (PopFxIssueDirectedPowerTransition.c)
 *     PsTerminateSystemThread @ 0x1406CD810 (PsTerminateSystemThread.c)
 */

NTSTATUS __fastcall PopIrpWorker(__int64 *Entry)
{
  unsigned __int8 CurrentIrql; // r12
  __int64 v3; // r9
  LARGE_INTEGER *Timeout; // r13
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int8 OldIrql; // di
  int v8; // ecx
  __int64 v9; // r15
  IRP *v10; // rsi
  ULONG_PTR v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r11
  __int64 v18; // rdi
  char v19; // di
  __int64 v20; // rax
  __int64 v21; // r10
  __int64 v22; // rcx
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  char v25; // al
  int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rax
  char v29; // di
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  ULONG_PTR v34; // r9
  char DoesFxDeviceSupportDirectedTransition; // al
  struct _KPRCB *v36; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v38[7]; // [rsp+48h] [rbp-38h] BYREF
  LARGE_INTEGER v39; // [rsp+B0h] [rbp+30h] BYREF

  CurrentIrql = 0;
  memset(v38, 0, 0x30uLL);
  v38[2] = KeGetCurrentThread();
  if ( Entry )
  {
    if ( *Entry )
      KeReleaseSemaphoreEx(*Entry, 0LL, 1, v3, 0);
    ExFreeToNPagedLookasideList(&PopDynamicIrpWorkerLookaside, Entry);
    v39.QuadPart = -100000000LL;
    Timeout = &v39;
    LOBYTE(v38[5]) = 0;
  }
  else
  {
    Timeout = 0LL;
    LOBYTE(v38[5]) = 1;
  }
  ExAcquireFastMutex(&PopIrpWorkerMutex);
  --PopIrpWorkerPendingCount;
  ++PopIrpWorkerCount;
  if ( *(__int64 **)qword_140411568 != &PopIrpThreadList )
LABEL_81:
    __fastfail(3u);
  v38[0] = &PopIrpThreadList;
  v38[1] = qword_140411568;
  *(_QWORD *)qword_140411568 = v38;
  qword_140411568 = (__int64)v38;
LABEL_7:
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
  do
  {
    if ( KeWaitForSingleObject(&PopIrpWorkerSemaphore, Executive, 0, 0, Timeout) != 258 )
    {
      KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
      v5 = PopIrpWorkerList;
      v6 = *(_QWORD *)PopIrpWorkerList;
      if ( *(__int64 **)(PopIrpWorkerList + 8) != &PopIrpWorkerList || *(_QWORD *)(v6 + 8) != PopIrpWorkerList )
        goto LABEL_81;
      PopIrpWorkerList = *(_QWORD *)PopIrpWorkerList;
      *(_QWORD *)(v6 + 8) = &PopIrpWorkerList;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(OldIrql);
      ExAcquireFastMutex(&PopIrpWorkerMutex);
      v8 = ++PopIrpWorkerInFlightCount;
      if ( PopCreateIrpWorkerAllowed
        && v8 == PopIrpWorkerCount
        && !PopIrpWorkerPendingCount
        && (unsigned int)PopIrpWorkerCount < 0xF
        && !PopIrpWorkerRequested )
      {
        PopIrpWorkerRequested = 1;
        KeSetEvent(&PopIrpWorkerControlEvent, 0, 0);
      }
      KeReleaseGuardedMutex(&PopIrpWorkerMutex);
      v9 = *(_QWORD *)(v5 + 16);
      v10 = (IRP *)(v5 - 168);
      v11 = *(_QWORD *)(v9 + 40);
      LOBYTE(v12) = *(_BYTE *)(v9 + 1);
      PoDeviceAcquireIrp(v10, v12, v11, v13);
      v17 = 2LL;
      v18 = *((_QWORD *)&v10->Tail.CompletionKey + 9 * v10->StackCount + 10);
      if ( *(_BYTE *)(v18 + 184) == 2 && *(_DWORD *)(v18 + 188) == 1 && *(_QWORD *)(v18 + 32) == v11 )
      {
        v20 = *(_QWORD *)(v18 + 24);
        v21 = *(_QWORD *)(v18 + 200);
        v22 = v20 ? *(_QWORD *)(*(_QWORD *)(v20 + 312) + 40LL) : 0LL;
        v15 = *(unsigned int *)(v22 + 140);
        *(_DWORD *)(v22 + 140) = *(_DWORD *)(v18 + 192);
        if ( v21 )
        {
          _m_prefetchw((const void *)(v21 + 32));
          v23 = *(_DWORD *)(v21 + 32);
          do
          {
            v24 = v23;
            v23 = _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 32), v23, v23);
          }
          while ( v24 != v23 );
          v14 = *(unsigned int *)(v18 + 192);
          v25 = v23 & 1;
          *(_BYTE *)(v18 + 208) = v25;
          *(_BYTE *)(v18 + 209) = (_DWORD)v14 != (_DWORD)v15;
          if ( (_DWORD)v14 != (_DWORD)v15 )
          {
            if ( (_DWORD)v14 == 1 )
            {
              _InterlockedOr((volatile signed __int32 *)(v21 + 32), 2u);
              v25 = *(_BYTE *)(v18 + 208);
              v14 = *(unsigned int *)(v18 + 192);
            }
            LOBYTE(v16) = v25;
            PopPepDeviceDState(*(_QWORD *)(v21 + 56), v14, 0LL, v16);
            v17 = 2LL;
          }
        }
      }
      if ( !*(_DWORD *)(v18 + 188) && (*(_DWORD *)(v9 + 8) & 0x800000) != 0 && *(_QWORD *)(v18 + 32) == v11 )
      {
        v32 = *(_QWORD *)(v18 + 24);
        v33 = v32 ? *(_QWORD *)(*(_QWORD *)(v32 + 312) + 40LL) : 0LL;
        v34 = *(_QWORD *)(v33 + 80);
        if ( v34 )
        {
          if ( PopDirectedDripsEnableV2 )
          {
            if ( (*(_DWORD *)(v33 + 760) & 0x10000) != 0 && (*(_DWORD *)(v33 + 760) & 0x20000) == 0 )
              goto LABEL_66;
            DoesFxDeviceSupportDirectedTransition = 0;
          }
          else
          {
            DoesFxDeviceSupportDirectedTransition = PopDoesFxDeviceSupportDirectedTransition(
                                                      *(_QWORD *)(v33 + 80),
                                                      v14,
                                                      v15);
          }
          if ( DoesFxDeviceSupportDirectedTransition )
          {
LABEL_66:
            if ( v10->Tail.Overlay.CurrentStackLocation->MinorFunction == (_BYTE)v17 )
            {
              PopFxIssueDirectedPowerTransition(v34);
            }
            else
            {
              v10->IoStatus.Status = 0;
              v10->IoStatus.Information = 0LL;
              IofCompleteRequest(v10, 0);
            }
LABEL_21:
            ObfDereferenceObjectWithTag((PVOID)v11, 0x72496F50u);
            ExAcquireFastMutex(&PopIrpWorkerMutex);
            --PopIrpWorkerInFlightCount;
            goto LABEL_7;
          }
        }
      }
      v38[3] = v10;
      v19 = 0;
      v38[4] = v11;
      if ( (*(_DWORD *)(v11 + 48) & 0x2000) == 0 && v10 == (IRP *)PopInrushIrp )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(v17);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < (unsigned __int8)v17 )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v19 = 1;
      }
      (*(void (__fastcall **)(ULONG_PTR, IRP *))(*(_QWORD *)(v11 + 8) + 288LL))(v11, v10);
      if ( v19 )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          v36 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v36->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v36);
        }
        __writecr8(CurrentIrql);
      }
      if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
        KeBugCheckEx(0xA0u, 0x901uLL, v11, (ULONG_PTR)v10, KeGetCurrentThread()->CombinedApcDisable);
      *(_OWORD *)&v38[3] = 0LL;
      goto LABEL_21;
    }
    ExAcquireFastMutex(&PopIrpWorkerMutex);
    if ( PopCreateIrpWorkerAllowed
      && ((v26 = PopIrpWorkerCount - 1, PopIrpWorkerInFlightCount != PopIrpWorkerCount - 1) || PopIrpWorkerPendingCount) )
    {
      v27 = v38[0];
      v28 = v38[1];
      v29 = 0;
      if ( *(_QWORD **)(v38[0] + 8LL) != v38 || *(_QWORD **)v38[1] != v38 )
        goto LABEL_81;
      *(_QWORD *)v38[1] = v38[0];
      *(_QWORD *)(v27 + 8) = v28;
      PopIrpWorkerCount = v26;
    }
    else
    {
      v29 = 1;
    }
    KeReleaseGuardedMutex(&PopIrpWorkerMutex);
  }
  while ( v29 );
  return PsTerminateSystemThread(0);
}
