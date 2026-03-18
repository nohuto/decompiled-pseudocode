/*
 * XREFs of MiDereferenceSessionFinal @ 0x140727B5C
 * Callers:
 *     MiDereferenceSession @ 0x1406E12DC (MiDereferenceSession.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MiDetachProcessFromSession @ 0x140125C88 (MiDetachProcessFromSession.c)
 *     MiPartitionIdToPointer @ 0x1401367DC (MiPartitionIdToPointer.c)
 *     MiDeleteSessionAddressSpace @ 0x140166510 (MiDeleteSessionAddressSpace.c)
 *     MiSessionUnlinkProcess @ 0x14016661C (MiSessionUnlinkProcess.c)
 *     ExCleanupSessionHeapManager @ 0x140166718 (ExCleanupSessionHeapManager.c)
 *     MiFreeSessionSpaceMap @ 0x140166C08 (MiFreeSessionSpaceMap.c)
 *     MiUnlinkSessionWorkingSet @ 0x140166C3C (MiUnlinkSessionWorkingSet.c)
 *     MiMarkSessionDeletePending @ 0x140166CA8 (MiMarkSessionDeletePending.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiReturnPartitionResidentAvailable @ 0x1402D996C (MiReturnPartitionResidentAvailable.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     ExpWnfDeleteScopeById @ 0x140671AC8 (ExpWnfDeleteScopeById.c)
 *     MiCheckSessionPoolAllocations @ 0x140727D44 (MiCheckSessionPoolAllocations.c)
 *     MiSessionUnloadAllImages @ 0x140727E30 (MiSessionUnloadAllImages.c)
 */

unsigned __int64 MiDereferenceSessionFinal()
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 Process; // rbp
  unsigned __int64 v2; // rdi
  ULONG_PTR *v3; // rsi
  void (__fastcall *v4)(_QWORD); // rax
  struct _KTHREAD *v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  ULONG_PTR *v8; // r11
  unsigned __int64 v9; // r10
  unsigned __int64 result; // rax
  void *v11; // rcx
  unsigned __int64 v12[6]; // [rsp+20h] [rbp-48h] BYREF
  int v13; // [rsp+70h] [rbp+8h] BYREF

  memset(v12, 0, sizeof(v12));
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v2 = *(_QWORD *)(Process + 1024);
  v3 = (ULONG_PTR *)MiPartitionIdToPointer(*(_WORD *)(v2 + 430));
  MiMarkSessionDeletePending(v2);
  if ( *(_QWORD *)(v2 + 80) )
  {
    KeSetEvent(*(PRKEVENT *)(v2 + 72), 1, 0);
    ObCloseHandle(*(HANDLE *)(v2 + 80), 0);
  }
  v4 = *(void (__fastcall **)(_QWORD))(v2 + 960);
  if ( (unsigned __int64)v4 > 1 )
    v4(0LL);
  MiSessionUnloadAllImages();
  MiUnlinkSessionWorkingSet(v2);
  v13 = *(_DWORD *)(v2 + 8);
  v5 = KeGetCurrentThread();
  --v5->KernelApcDisable;
  ExpWnfDeleteScopeById(1u, &v13, 4u);
  KeLeaveCriticalRegion();
  MiFreeSessionSpaceMap();
  v6 = *(_DWORD *)(v2 + 4);
  if ( (v6 & 1) != 0 )
  {
    ExCleanupSessionHeapManager();
    *(_DWORD *)(v2 + 4) |= 0x100u;
    MiCheckSessionPoolAllocations();
    v6 = *(_DWORD *)(v2 + 4);
  }
  if ( (v6 & 0x180) == 0x80 )
    ExCleanupSessionHeapManager();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1404659C0, 0LL);
  *(_DWORD *)(v2 + 4) |= 0x20u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1404659C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1404659C0);
  KeAbPostRelease((ULONG_PTR)&qword_1404659C0);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( *(_QWORD *)(Process + 840) )
  {
    MiSessionUnlinkProcess(v7, Process);
    *(_QWORD *)(Process + 840) = 0LL;
  }
  MiDeleteSessionAddressSpace(v2, v12);
  MiDetachProcessFromSession(0);
  if ( v3 == &MiSystemPartition )
    MiReturnResidentAvailable(v12[0]);
  else
    MiReturnPartitionResidentAvailable((__int64)v3, v12[0]);
  if ( v3 == v8 )
    MiReturnResidentAvailable(*(_QWORD *)(v2 + 368));
  else
    MiReturnPartitionResidentAvailable((__int64)v3, *(_QWORD *)(v2 + 368));
  result = MiReturnCommit((__int64)v3, v9);
  v11 = *(void **)(v2 + 1328);
  if ( v11 )
    result = ObfDereferenceObjectWithTag(v11, 0x73536D4Du);
  *(_QWORD *)(v2 + 1328) = 0LL;
  return result;
}
