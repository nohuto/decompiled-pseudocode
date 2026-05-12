/*
 * XREFs of StorRemoveIoGatewayItem @ 0x1C000A760
 * Callers:
 *     RaUnitStartIo @ 0x1C00035A0 (RaUnitStartIo.c)
 *     RaidUnitCompleteRequest @ 0x1C0009590 (RaidUnitCompleteRequest.c)
 *     RaidUnitProcessBusyRequest @ 0x1C00116D8 (RaidUnitProcessBusyRequest.c)
 * Callees:
 *     RaidZeroXrb @ 0x1C000B624 (RaidZeroXrb.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024A40 (_guard_dispatch_icall_nop.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C0039908 (RaidGetQosEntryForDeviceEntry.c)
 *     RaFreeIoResource @ 0x1C004A9D8 (RaFreeIoResource.c)
 *     StorSetIoGatewayNotBusy @ 0x1C004ABCC (StorSetIoGatewayNotBusy.c)
 */

__int64 __fastcall StorRemoveIoGatewayItem(volatile signed __int32 *SpinLock, __int64 a2, PKSPIN_LOCK **a3)
{
  unsigned __int8 v3; // si
  char v4; // bp
  struct _KEVENT *v5; // r14
  union _SLIST_HEADER *v9; // rcx
  struct _SLIST_ENTRY *v10; // rdx
  __int64 v11; // rdx
  PKSPIN_LOCK *v13; // rax
  PKSPIN_LOCK v14; // rcx
  PKSPIN_LOCK v15; // rdx
  unsigned int v16; // edx
  unsigned int v17; // eax
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  v4 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  if ( (unsigned int)_InterlockedDecrement(SpinLock + 48) <= *((_DWORD *)SpinLock + 8) && *((int *)SpinLock + 10) > 0 )
  {
    StorSetIoGatewayNotBusy(SpinLock);
    v3 = 1;
  }
  if ( !*((_DWORD *)SpinLock + 48) )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)SpinLock, &LockHandle);
    if ( (*((_QWORD *)SpinLock + 25) || *((_BYTE *)SpinLock + 208)) && !*((_DWORD *)SpinLock + 48) )
    {
      v4 = *((_BYTE *)SpinLock + 208);
      v5 = (struct _KEVENT *)*((_QWORD *)SpinLock + 25);
      *((_BYTE *)SpinLock + 208) = 0;
      *((_QWORD *)SpinLock + 25) = 0LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  if ( *((_DWORD *)SpinLock + 6) && *((int *)SpinLock + 10) <= 0 && *((int *)SpinLock + 11) <= 0 && a3 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)SpinLock, &LockHandle);
    if ( *((int *)SpinLock + 10) <= 0 && *((int *)SpinLock + 11) <= 0 && *((_DWORD *)SpinLock + 6) )
    {
      v13 = (PKSPIN_LOCK *)*((_QWORD *)SpinLock + 1);
      v14 = (PKSPIN_LOCK)(SpinLock + 2);
      if ( v13[1] != (PKSPIN_LOCK)(SpinLock + 2) )
        goto LABEL_40;
      v15 = *v13;
      if ( (PKSPIN_LOCK *)(*v13)[1] != v13 )
        goto LABEL_40;
      *v14 = (KSPIN_LOCK)v15;
      v15[1] = (KSPIN_LOCK)v14;
      *a3 = v13;
      _InterlockedIncrement(SpinLock + 48);
      v16 = *((_DWORD *)SpinLock + 48);
      v17 = v16;
      if ( v16 <= *((_DWORD *)SpinLock + 9) )
        v17 = *((_DWORD *)SpinLock + 9);
      *((_DWORD *)SpinLock + 9) = v17;
      if ( v16 == *((_DWORD *)SpinLock + 7) )
      {
        *((_DWORD *)SpinLock + 10) = 1;
        v3 = 0;
      }
      --*((_DWORD *)SpinLock + 6);
      if ( (*((_BYTE *)*a3 + 22) & 0x20) == 0 )
        goto LABEL_42;
      QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(*a3);
      v19 = *QosEntryForDeviceEntry;
      if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) != QosEntryForDeviceEntry
        || (v20 = (_QWORD *)QosEntryForDeviceEntry[1], (_QWORD *)*v20 != QosEntryForDeviceEntry) )
      {
LABEL_40:
        __fastfail(3u);
      }
      *v20 = v19;
      *(_QWORD *)(v19 + 8) = v20;
    }
    else
    {
      RaFreeIoResource(SpinLock + 16, *(_QWORD *)(a2 + 16) - 32LL);
    }
LABEL_42:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_14;
  }
  v9 = (union _SLIST_HEADER *)(SpinLock + 16);
  v10 = (struct _SLIST_ENTRY *)(*(_QWORD *)(a2 + 16) - 32LL);
  if ( *((_DWORD *)SpinLock + 32) )
    v9 = *(union _SLIST_HEADER **)(v9->Alignment + 8LL * LODWORD(v10->Next));
  ExpInterlockedPushEntrySList(v9, v10);
LABEL_14:
  if ( a3 && *a3 )
    RaidZeroXrb(
      *(_QWORD *)(a2 + 16),
      v11,
      *(unsigned int *)(*(_QWORD *)(a2 + 16) + 744LL),
      *(_QWORD *)(*(_QWORD *)(a2 + 16) + 760LL));
  if ( v5 )
    KeSetEvent(v5, 0, 0);
  if ( v4 )
    (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD))SpinLock + 30))(
      *((_QWORD *)SpinLock + 29),
      *((_QWORD *)SpinLock + 27),
      *((_QWORD *)SpinLock + 28));
  return v3;
}
