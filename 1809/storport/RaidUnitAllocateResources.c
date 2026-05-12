/*
 * XREFs of RaidUnitAllocateResources @ 0x1C0019DF4
 * Callers:
 *     RaidCreateUnit @ 0x1C0019C20 (RaidCreateUnit.c)
 * Callees:
 *     StorAllocateContiguousIoResources @ 0x1C0007F4C (StorAllocateContiguousIoResources.c)
 *     RaidAllocatePool @ 0x1C00081B4 (RaidAllocatePool.c)
 *     RaidZeroXrb @ 0x1C000D868 (RaidZeroXrb.c)
 *     StorCreateEventQueue @ 0x1C001A22C (StorCreateEventQueue.c)
 *     RaidUnitFreeResources @ 0x1C001A4C8 (RaidUnitFreeResources.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 *     RaInitializeTagList @ 0x1C006BA20 (RaInitializeTagList.c)
 */

__int64 __fastcall RaidUnitAllocateResources(__int64 a1)
{
  __int64 v1; // r15
  int EventQueue; // ebx
  __int64 v4; // rax
  _QWORD *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rsi
  int v8; // edi
  unsigned int v9; // eax
  size_t v10; // rbx
  PVOID Pool; // rax
  USHORT CurrentNodeNumber; // ax
  PSLIST_ENTRY v14; // rax
  int v15; // esi
  unsigned int v16; // edi
  unsigned int v17; // ebx
  int v18; // eax
  __int64 v19; // rax
  unsigned int v20; // ecx
  __int64 ContiguousIoResources; // rax
  __int64 v22; // rdx
  __int64 v23; // rbx
  PIO_WORKITEM WorkItem; // rax
  PIO_WORKITEM v25; // rax
  struct _DEVICE_OBJECT *v26; // rcx
  PIO_WORKITEM v27; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *CacheAwareRundownProtection; // rax

  v1 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 1696) = -1;
  *(_DWORD *)(a1 + 912) = 0x10000000;
  KeInitializeEvent((PRKEVENT)(a1 + 464), SynchronizationEvent, 0);
  KeInitializeDpc((PRKDPC)(a1 + 1184), RaidUnitRestartQueueDpcRoutine, *(PVOID *)(a1 + 8));
  KeInitializeDpc((PRKDPC)(a1 + 992), (PKDEFERRED_ROUTINE)RaidUnitPendingDpcRoutine, *(PVOID *)(a1 + 8));
  KeInitializeTimer((PKTIMER)(a1 + 928));
  KeInitializeTimer((PKTIMER)(a1 + 1056));
  KeInitializeDpc((PRKDPC)(a1 + 1120), (PKDEFERRED_ROUTINE)RaidUnitPauseTimerDpcRoutine, *(PVOID *)(a1 + 8));
  KeSetCoalescableTimer((PKTIMER)(a1 + 928), (LARGE_INTEGER)-20000000LL, 0x7D0u, 0x12Cu, (PKDPC)(a1 + 992));
  EventQueue = StorCreateEventQueue(a1 + 504);
  if ( EventQueue < 0 )
    goto LABEL_10;
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
    LOBYTE(v4) = *(_BYTE *)(v4 + 540) & 0x10;
  if ( (_BYTE)v4 )
    **(_DWORD **)(a1 + 504) |= 5u;
  v5 = (_QWORD *)(a1 + 512);
  EventQueue = RaInitializeTagList(a1 + 512, (unsigned int)(*(_DWORD *)(v1 + 528) + 1), *(_QWORD *)(a1 + 8));
  if ( EventQueue < 0 )
    goto LABEL_10;
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 40));
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 1792));
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_DWORD *)(v1 + 528);
  *(_DWORD *)(a1 + 800) = 0;
  *(_QWORD *)(a1 + 640) = v6;
  *(_QWORD *)(a1 + 648) = RaUnitStartIo;
  memset((void *)(a1 + 656), 0, 0x90uLL);
  *(_QWORD *)(a1 + 744) = a1 + 736;
  *(_QWORD *)(a1 + 736) = a1 + 736;
  *(_QWORD *)(a1 + 760) = a1 + 752;
  *(_QWORD *)(a1 + 752) = a1 + 752;
  *(_QWORD *)(a1 + 776) = a1 + 768;
  *(_QWORD *)(a1 + 768) = a1 + 768;
  KeInitializeEvent((PRKEVENT)(a1 + 704), NotificationEvent, 0);
  *(_DWORD *)(a1 + 660) = v8;
  *(_DWORD *)(a1 + 656) = 9437442;
  *(_QWORD *)(a1 + 664) = v7 + 832;
  v9 = *(_DWORD *)(v1 + 456);
  if ( v9 )
  {
    v10 = v9;
    Pool = RaidAllocatePool(NonPagedPoolNx, v9, 0x45556152u, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 16) = Pool;
    if ( !Pool )
    {
      EventQueue = -1073741801;
LABEL_10:
      RaidUnitFreeResources(a1);
      return (unsigned int)EventQueue;
    }
    memset(Pool, 0, v10);
  }
  CurrentNodeNumber = KeGetCurrentNodeNumber();
  v14 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*v5 + ((unsigned __int64)CurrentNodeNumber << 6)));
  if ( !v14 )
  {
    v15 = 0;
    v16 = KeQueryHighestNodeNumber() + 1;
    while ( 1 )
    {
      v17 = 0;
      if ( v16 )
        break;
LABEL_17:
      if ( ++v15 == 10 )
      {
        v18 = -1;
        goto LABEL_20;
      }
    }
    while ( 1 )
    {
      v14 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*v5 + ((unsigned __int64)v17 << 6)));
      if ( v14 )
        break;
      if ( ++v17 >= v16 )
        goto LABEL_17;
    }
  }
  v18 = *((_DWORD *)&v14->Next + 2);
LABEL_20:
  if ( v18 == -1 )
    goto LABEL_21;
  *(_DWORD *)(a1 + 1696) = v18;
  v19 = *(_QWORD *)(a1 + 24);
  v20 = ((*(_DWORD *)(v19 + 460) + 7) & 0xFFFFFFF8) + 1232;
  if ( *(_BYTE *)(v1 + 418) != 1 )
    v20 = ((*(_DWORD *)(v19 + 460) + 7) & 0xFFFFFFF8) + 1088;
  ContiguousIoResources = StorAllocateContiguousIoResources(v20, ((*(_DWORD *)(v19 + 460) + 7) & 0xFFFFFFF8) + 1088, v1);
  v23 = ContiguousIoResources;
  if ( !ContiguousIoResources )
    goto LABEL_21;
  *(_QWORD *)(a1 + 1712) = ContiguousIoResources + 32;
  *(_QWORD *)(a1 + 1720) = ContiguousIoResources + 832;
  *(_QWORD *)(a1 + 1704) = ContiguousIoResources + 1088;
  RaidZeroXrb(ContiguousIoResources + 32, v22, 0, 0LL);
  if ( *(_BYTE *)(v1 + 418) == 1 )
  {
    *(_DWORD *)(v23 + 776) = 144;
    *(_QWORD *)(v23 + 792) = v23 + ((*(_DWORD *)(*(_QWORD *)(a1 + 24) + 460LL) + 7) & 0xFFFFFFF8) + 1088LL;
  }
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  *(_QWORD *)(a1 + 1848) = WorkItem;
  if ( !WorkItem )
    goto LABEL_21;
  v25 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  *(_QWORD *)(a1 + 1864) = v25;
  if ( !v25
    || (v26 = *(struct _DEVICE_OBJECT **)(a1 + 8),
        *(_QWORD *)(a1 + 1872) = 0LL,
        *(_DWORD *)(a1 + 1880) = 0,
        v27 = IoAllocateWorkItem(v26),
        (*(_QWORD *)(a1 + 1888) = v27) == 0LL)
    || (CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x4F506152u),
        (*(_QWORD *)(a1 + 1736) = CacheAwareRundownProtection) == 0LL) )
  {
LABEL_21:
    EventQueue = -1073741670;
    goto LABEL_10;
  }
  ExWaitForRundownProtectionReleaseCacheAware(CacheAwareRundownProtection);
  return 0LL;
}
