/*
 * XREFs of PopIrpWorker @ 0x14017AEC0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400447B0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseSemaphore @ 0x1401091E0 (KeReleaseSemaphore.c)
 *     PoDeviceAcquireIrp @ 0x140174D18 (PoDeviceAcquireIrp.c)
 *     PopPepDeviceDState @ 0x14017B274 (PopPepDeviceDState.c)
 *     PopFxGetDeviceDStateReason @ 0x14017B568 (PopFxGetDeviceDStateReason.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopAcquireIrpWorkerLock @ 0x140300A6C (PopAcquireIrpWorkerLock.c)
 *     PopReleaseIrpWorkerLock @ 0x140300A88 (PopReleaseIrpWorkerLock.c)
 *     PsTerminateSystemThread @ 0x1406B85A0 (PsTerminateSystemThread.c)
 */

NTSTATUS __fastcall PopIrpWorker(PRKSEMAPHORE *Entry)
{
  unsigned __int8 CurrentIrql; // r14
  LARGE_INTEGER *Timeout; // r15
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // ecx
  ULONG_PTR v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  ULONG_PTR v10; // rbx
  __int64 v11; // r10
  char v12; // si
  __int64 v13; // rax
  __int64 v14; // r11
  __int64 v15; // rcx
  int v16; // esi
  int DeviceDStateReason; // eax
  __int64 v18; // r10
  __int64 v19; // r11
  __int64 v20; // rdx
  int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rax
  char v24; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v28[7]; // [rsp+48h] [rbp-38h] BYREF
  LARGE_INTEGER v29; // [rsp+B0h] [rbp+30h] BYREF

  v29.QuadPart = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = 0;
  memset(v28, 0, 0x30uLL);
  v28[2] = KeGetCurrentThread();
  if ( Entry )
  {
    if ( *Entry )
      KeReleaseSemaphore(*Entry, 0, 1, 0);
    ExFreeToNPagedLookasideList(&PopDynamicIrpWorkerLookaside, Entry);
    v29.QuadPart = -100000000LL;
    Timeout = &v29;
    LOBYTE(v28[5]) = 0;
  }
  else
  {
    Timeout = 0LL;
    LOBYTE(v28[5]) = 1;
  }
  PopAcquireIrpWorkerLock();
  --PopIrpWorkerPendingCount;
  ++PopIrpWorkerCount;
  if ( *(__int64 **)qword_140438DD8 != &PopIrpThreadList )
LABEL_58:
    __fastfail(3u);
  v28[0] = &PopIrpThreadList;
  v28[1] = qword_140438DD8;
  *(_QWORD *)qword_140438DD8 = v28;
  qword_140438DD8 = (__int64)v28;
  PopReleaseIrpWorkerLock();
  do
  {
    while ( KeWaitForSingleObject(&PopIrpWorkerSemaphore, Executive, 0, 0, Timeout) != 258 )
    {
      KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
      v4 = PopIrpWorkerList;
      v5 = *(_QWORD *)PopIrpWorkerList;
      if ( *(__int64 **)(PopIrpWorkerList + 8) != &PopIrpWorkerList || *(_QWORD *)(v5 + 8) != PopIrpWorkerList )
        goto LABEL_58;
      PopIrpWorkerList = *(_QWORD *)PopIrpWorkerList;
      *(_QWORD *)(v5 + 8) = &PopIrpWorkerList;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      PopAcquireIrpWorkerLock();
      v6 = ++PopIrpWorkerInFlightCount;
      if ( PopCreateIrpWorkerAllowed
        && v6 == PopIrpWorkerCount
        && !PopIrpWorkerPendingCount
        && (unsigned int)PopIrpWorkerCount < 0xF
        && !PopIrpWorkerRequested )
      {
        PopIrpWorkerRequested = 1;
        KeSetEvent(&PopIrpWorkerControlEvent, 0, 0);
      }
      PopReleaseIrpWorkerLock();
      v7 = v4 - 168;
      v8 = *(_QWORD *)(v4 - 168 + 184);
      v9 = v4 - 168;
      v10 = *(_QWORD *)(v8 + 40);
      PoDeviceAcquireIrp(v9, *(_BYTE *)(v8 + 1), v10);
      v11 = *(_QWORD *)(v7 + 72LL * *(char *)(v7 + 66) + 200);
      if ( *(_BYTE *)(v11 + 184) == 2 && *(_DWORD *)(v11 + 188) == 1 && *(_QWORD *)(v11 + 32) == v10 )
      {
        v13 = *(_QWORD *)(v11 + 24);
        v14 = *(_QWORD *)(v11 + 200);
        v15 = v13 ? *(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL) : 0LL;
        v16 = *(_DWORD *)(v15 + 140);
        *(_DWORD *)(v15 + 140) = *(_DWORD *)(v11 + 192);
        if ( v14 )
        {
          DeviceDStateReason = PopFxGetDeviceDStateReason(v14);
          *(_DWORD *)(v18 + 248) = DeviceDStateReason;
          *(_BYTE *)(v18 + 208) = 0;
          if ( DeviceDStateReason == 1 )
            *(_BYTE *)(v18 + 208) = 1;
          v20 = *(unsigned int *)(v18 + 192);
          *(_BYTE *)(v18 + 209) = (_DWORD)v20 != v16;
          if ( (_DWORD)v20 != v16 )
          {
            if ( (_DWORD)v20 == 1 )
            {
              _InterlockedOr((volatile signed __int32 *)(v19 + 32), 2u);
              v20 = *(unsigned int *)(v18 + 192);
            }
            PopPepDeviceDState(*(_QWORD *)(v19 + 56), v20, 0LL, *(unsigned int *)(v18 + 248));
          }
        }
      }
      v12 = 0;
      v28[3] = v7;
      v28[4] = v10;
      if ( (*(_DWORD *)(v10 + 48) & 0x2000) == 0 && v7 == PopInrushIrp )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v12 = 1;
      }
      (*(void (__fastcall **)(ULONG_PTR, ULONG_PTR))(*(_QWORD *)(v10 + 8) + 288LL))(v10, v7);
      if ( v12 )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(CurrentIrql);
      }
      if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
        KeBugCheckEx(0xA0u, 0x901uLL, v10, v7, KeGetCurrentThread()->CombinedApcDisable);
      *(_OWORD *)&v28[3] = 0LL;
      ObfDereferenceObjectWithTag((PVOID)v10, 0x72496F50u);
      PopAcquireIrpWorkerLock();
      --PopIrpWorkerInFlightCount;
      PopReleaseIrpWorkerLock();
    }
    PopAcquireIrpWorkerLock();
    if ( PopCreateIrpWorkerAllowed
      && ((v21 = PopIrpWorkerCount - 1, PopIrpWorkerInFlightCount != PopIrpWorkerCount - 1) || PopIrpWorkerPendingCount) )
    {
      v22 = v28[0];
      v23 = v28[1];
      v24 = 0;
      if ( *(_QWORD **)(v28[0] + 8LL) != v28 || *(_QWORD **)v28[1] != v28 )
        goto LABEL_58;
      *(_QWORD *)v28[1] = v28[0];
      *(_QWORD *)(v22 + 8) = v23;
      PopIrpWorkerCount = v21;
    }
    else
    {
      v24 = 1;
    }
    PopReleaseIrpWorkerLock();
  }
  while ( v24 );
  return PsTerminateSystemThread(0);
}
