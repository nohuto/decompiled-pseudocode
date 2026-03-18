/*
 * XREFs of MiDereferenceSessionFinal @ 0x140728ECC
 * Callers:
 *     MiDereferenceSession @ 0x1406E295C (MiDereferenceSession.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 *     MiPartitionIdToPointer @ 0x1400F8738 (MiPartitionIdToPointer.c)
 *     MiDetachProcessFromSession @ 0x1401262F8 (MiDetachProcessFromSession.c)
 *     MiDeleteSessionAddressSpace @ 0x140165F60 (MiDeleteSessionAddressSpace.c)
 *     MiSessionUnlinkProcess @ 0x14016606C (MiSessionUnlinkProcess.c)
 *     ExCleanupSessionHeapManager @ 0x140166168 (ExCleanupSessionHeapManager.c)
 *     MiFreeSessionSpaceMap @ 0x140166658 (MiFreeSessionSpaceMap.c)
 *     MiUnlinkSessionWorkingSet @ 0x14016668C (MiUnlinkSessionWorkingSet.c)
 *     MiMarkSessionDeletePending @ 0x1401666F8 (MiMarkSessionDeletePending.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiReturnPartitionResidentAvailable @ 0x1402D96CC (MiReturnPartitionResidentAvailable.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     ExpWnfDeleteScopeById @ 0x1406528F8 (ExpWnfDeleteScopeById.c)
 *     MiCheckSessionPoolAllocations @ 0x1407290B4 (MiCheckSessionPoolAllocations.c)
 *     MiSessionUnloadAllImages @ 0x1407291A0 (MiSessionUnloadAllImages.c)
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
  ExpWnfDeleteScopeById(1u, (__int64)&v13, 4u);
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
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1404656C0, 0LL);
  *(_DWORD *)(v2 + 4) |= 0x20u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1404656C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1404656C0);
  KeAbPostRelease((ULONG_PTR)&qword_1404656C0);
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
