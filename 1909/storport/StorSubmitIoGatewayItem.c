/*
 * XREFs of StorSubmitIoGatewayItem @ 0x1C000B558
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0009590 (RaidUnitCompleteRequest.c)
 *     RaidRestartIoQueue @ 0x1C000B150 (RaidRestartIoQueue.c)
 * Callees:
 *     RaidZeroXrb @ 0x1C000B624 (RaidZeroXrb.c)
 *     RaAllocateIoResource @ 0x1C000B710 (RaAllocateIoResource.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C0039908 (RaidGetQosEntryForDeviceEntry.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C004A700 (RaAttemptHighWaterMarkIncrease.c)
 */

char __fastcall StorSubmitIoGatewayItem(PKSPIN_LOCK SpinLock, KSPIN_LOCK a2, _QWORD *a3)
{
  int *v3; // rsi
  __int64 IoResource; // rdx
  PKSPIN_LOCK *v9; // rcx
  PKSPIN_LOCK *v10; // rcx
  PKSPIN_LOCK *QosEntryForDeviceEntry; // rax
  PKSPIN_LOCK v12; // rbx
  PKSPIN_LOCK *v13; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = (int *)(SpinLock + 5);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *((int *)SpinLock + 11) > 0 || *v3 > 0 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &LockHandle);
    if ( *((int *)SpinLock + 11) > 0 || *v3 > 0 )
    {
      v10 = (PKSPIN_LOCK *)SpinLock[2];
      if ( *v10 != SpinLock + 1 )
        goto LABEL_20;
      *(_QWORD *)a2 = SpinLock + 1;
      *(_QWORD *)(a2 + 8) = v10;
      *v10 = (PKSPIN_LOCK)a2;
      SpinLock[2] = a2;
LABEL_16:
      ++*((_DWORD *)SpinLock + 6);
      if ( (*(_BYTE *)(a2 + 22) & 0x20) == 0 )
      {
LABEL_19:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        return 1;
      }
      QosEntryForDeviceEntry = (PKSPIN_LOCK *)RaidGetQosEntryForDeviceEntry(a2);
      v12 = SpinLock + 33;
      v13 = (PKSPIN_LOCK *)v12[1];
      if ( *v13 == v12 )
      {
        *QosEntryForDeviceEntry = v12;
        QosEntryForDeviceEntry[1] = (PKSPIN_LOCK)v13;
        *v13 = (PKSPIN_LOCK)QosEntryForDeviceEntry;
        v12[1] = (KSPIN_LOCK)QosEntryForDeviceEntry;
        goto LABEL_19;
      }
LABEL_20:
      __fastfail(3u);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  IoResource = RaAllocateIoResource((PSLIST_HEADER)SpinLock + 4);
  if ( !IoResource )
  {
    if ( *((_DWORD *)SpinLock + 34) >= *((_DWORD *)SpinLock + 36)
      || (RaAttemptHighWaterMarkIncrease(SpinLock), (IoResource = RaAllocateIoResource((PSLIST_HEADER)SpinLock + 4)) == 0) )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &LockHandle);
      v9 = (PKSPIN_LOCK *)SpinLock[2];
      if ( *v9 != SpinLock + 1 )
        goto LABEL_20;
      *(_QWORD *)a2 = SpinLock + 1;
      *(_QWORD *)(a2 + 8) = v9;
      *v9 = (PKSPIN_LOCK)a2;
      SpinLock[2] = a2;
      *v3 = 1;
      goto LABEL_16;
    }
  }
  if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)SpinLock + 48) >= *((_DWORD *)SpinLock + 9) )
    *((_DWORD *)SpinLock + 9) = *((_DWORD *)SpinLock + 48);
  a3[3] = IoResource + 832;
  a3[2] = IoResource + 32;
  a3[1] = IoResource + 1088;
  RaidZeroXrb(IoResource + 32, IoResource, *(unsigned int *)(IoResource + 776), *(_QWORD *)(IoResource + 792));
  return 0;
}
