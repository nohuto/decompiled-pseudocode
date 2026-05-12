/*
 * XREFs of StorNextIoGatewayItem @ 0x1C0013D44
 * Callers:
 *     RaidAdapterRestartQueues @ 0x1C0013C80 (RaidAdapterRestartQueues.c)
 * Callees:
 *     RaidZeroXrb @ 0x1C000D868 (RaidZeroXrb.c)
 *     RaAllocateIoResource @ 0x1C000D964 (RaAllocateIoResource.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C0022408 (RaidGetQosEntryForDeviceEntry.c)
 *     RaFreeIoResource @ 0x1C0025690 (RaFreeIoResource.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C004BD20 (RaAttemptHighWaterMarkIncrease.c)
 */

KSPIN_LOCK __fastcall StorNextIoGatewayItem(PKSPIN_LOCK SpinLock, _QWORD *a2)
{
  KSPIN_LOCK v2; // rdi
  char v3; // bp
  PSLIST_ENTRY IoResource; // rsi
  PKSPIN_LOCK v8; // rax
  KSPIN_LOCK v9; // rcx
  unsigned int v10; // ecx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0LL;
  v3 = 0;
  if ( *((int *)SpinLock + 70) > 0 )
  {
    KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
    v3 = 1;
  }
  if ( *((_DWORD *)SpinLock + 6) )
  {
    if ( *((_DWORD *)SpinLock + 10) != 1 && *((int *)SpinLock + 11) <= 0 )
    {
      IoResource = RaAllocateIoResource((PSLIST_HEADER)SpinLock + 4);
      if ( IoResource
        || *((_DWORD *)SpinLock + 34) < *((_DWORD *)SpinLock + 36)
        && (RaAttemptHighWaterMarkIncrease(SpinLock),
            (IoResource = RaAllocateIoResource((PSLIST_HEADER)SpinLock + 4)) != 0LL) )
      {
        if ( !v3 )
          KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
        if ( !*((_DWORD *)SpinLock + 6) || *((int *)SpinLock + 10) > 0 || *((int *)SpinLock + 11) > 0 )
          goto LABEL_23;
        v8 = SpinLock + 1;
        v2 = SpinLock[1];
        if ( *(PKSPIN_LOCK *)(v2 + 8) == SpinLock + 1 )
        {
          v9 = *(_QWORD *)v2;
          if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) == v2 )
          {
            *v8 = v9;
            *(_QWORD *)(v9 + 8) = v8;
            _InterlockedIncrement((volatile signed __int32 *)SpinLock + 48);
            v10 = *((_DWORD *)SpinLock + 48);
            if ( v10 <= *((_DWORD *)SpinLock + 9) )
              v10 = *((_DWORD *)SpinLock + 9);
            --*((_DWORD *)SpinLock + 6);
            *((_DWORD *)SpinLock + 9) = v10;
            if ( (*(_BYTE *)(v2 + 22) & 0x20) == 0 )
              goto LABEL_23;
            QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v2);
            v12 = *QosEntryForDeviceEntry;
            if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) == QosEntryForDeviceEntry )
            {
              v13 = (_QWORD *)QosEntryForDeviceEntry[1];
              if ( (_QWORD *)*v13 == QosEntryForDeviceEntry )
              {
                *v13 = v12;
                *(_QWORD *)(v12 + 8) = v13;
LABEL_23:
                KeReleaseInStackQueuedSpinLock(&LockHandle);
                if ( v2 )
                {
                  a2[3] = IoResource + 52;
                  a2[2] = IoResource + 2;
                  a2[1] = IoResource + 68;
                  RaidZeroXrb(
                    (__int64)&IoResource[2],
                    v14,
                    *((_DWORD *)&IoResource[48].Next + 2),
                    *((void **)&IoResource[49].Next + 1));
                }
                else
                {
                  RaFreeIoResource(SpinLock + 8, IoResource);
                }
                return v2;
              }
            }
          }
        }
        __fastfail(3u);
      }
    }
  }
  if ( v3 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
