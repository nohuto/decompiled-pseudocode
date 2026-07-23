/*
 * XREFs of MiDereferenceSessionFinal @ 0x1406E1858
 * Callers:
 *     MiDereferenceSession @ 0x1406C069C (MiDereferenceSession.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MiDetachProcessFromSession @ 0x140125878 (MiDetachProcessFromSession.c)
 *     ExpRemoveGeneralLookaside @ 0x140128224 (ExpRemoveGeneralLookaside.c)
 *     MiPartitionIdToPointer @ 0x140134DB8 (MiPartitionIdToPointer.c)
 *     MiDeleteSessionAddressSpace @ 0x1401543C0 (MiDeleteSessionAddressSpace.c)
 *     MiSessionUnlinkProcess @ 0x1401544E4 (MiSessionUnlinkProcess.c)
 *     ExCleanupSessionHeapManager @ 0x140154554 (ExCleanupSessionHeapManager.c)
 *     MiFreeSessionSpaceMap @ 0x140154B54 (MiFreeSessionSpaceMap.c)
 *     MiUnlinkSessionWorkingSet @ 0x140154B88 (MiUnlinkSessionWorkingSet.c)
 *     MiMarkSessionDeletePending @ 0x140154BE4 (MiMarkSessionDeletePending.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     RtlpInterlockedFlushSList @ 0x1401C55B0 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiReturnPartitionResidentAvailable @ 0x1402C0230 (MiReturnPartitionResidentAvailable.c)
 *     ExpInsertPoolTracker @ 0x14031AB5C (ExpInsertPoolTracker.c)
 *     ExDeferredFreePool @ 0x14034E7A0 (ExDeferredFreePool.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     ExpWnfDeleteScopeById @ 0x140609860 (ExpWnfDeleteScopeById.c)
 *     MiCheckSessionPoolAllocations @ 0x1406E1AA4 (MiCheckSessionPoolAllocations.c)
 *     MiSessionUnloadAllImages @ 0x1406E1C64 (MiSessionUnloadAllImages.c)
 */

unsigned __int64 MiDereferenceSessionFinal()
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 Process; // r15
  unsigned __int64 v2; // rsi
  ULONG_PTR *v3; // rbp
  void (__fastcall *v4)(_QWORD); // rax
  struct _KTHREAD *v5; // rax
  int v6; // eax
  unsigned int i; // r12d
  __int64 v8; // r14
  _QWORD *p_Next; // r8
  ULONG_PTR v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  unsigned __int64 result; // rax
  void *v14; // rcx
  _QWORD *v15; // rcx
  ULONG_PTR v16; // r9
  _SLIST_ENTRY *v17; // rdi
  unsigned __int64 v18[13]; // [rsp+30h] [rbp-68h] BYREF
  int v19; // [rsp+A0h] [rbp+8h] BYREF
  PSLIST_ENTRY v20; // [rsp+A8h] [rbp+10h]

  memset(v18, 0, 0x28uLL);
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v2 = *(_QWORD *)(Process + 1024);
  v3 = (ULONG_PTR *)MiPartitionIdToPointer(*(_WORD *)(v2 + 3182));
  MiMarkSessionDeletePending(v2);
  if ( *(_QWORD *)(v2 + 80) )
  {
    KeSetEvent(*(PRKEVENT *)(v2 + 72), 1, 0);
    ObCloseHandle(*(HANDLE *)(v2 + 80), 0);
  }
  v4 = *(void (__fastcall **)(_QWORD))(v2 + 7872);
  if ( (unsigned __int64)v4 > 1 )
    v4(0LL);
  MiSessionUnloadAllImages();
  MiUnlinkSessionWorkingSet(v2);
  v19 = *(_DWORD *)(v2 + 8);
  v5 = KeGetCurrentThread();
  --v5->KernelApcDisable;
  ExpWnfDeleteScopeById(1u, (__int64)&v19, 4u);
  KeLeaveCriticalRegion();
  MiFreeSessionSpaceMap();
  v6 = *(_DWORD *)(v2 + 4);
  if ( (v6 & 1) != 0 )
  {
    for ( i = 0; i < 0x15; ++i )
    {
      v8 = v2 + ((i + 2LL) << 7);
      ExpRemoveGeneralLookaside(&ExPagedLookasideLock, v8);
      v20 = RtlpInterlockedFlushSList((PSLIST_HEADER)v8);
      p_Next = &v20->Next;
      if ( v20 )
      {
        do
        {
          v15 = p_Next - 2;
          v16 = *(p_Next - 1);
          if ( v16 != ((unsigned __int64)(p_Next - 2) ^ ExpPoolQuotaCookie) )
            KeBugCheckEx(
              0x19u,
              0xFuLL,
              (ULONG_PTR)(p_Next - 2),
              v16,
              (unsigned __int64)(p_Next - 2) ^ ExpPoolQuotaCookie);
          v17 = (_SLIST_ENTRY *)*p_Next;
          *((_BYTE *)v15 + 3) = *(_BYTE *)(v8 + 36) | 2;
          ExpInsertPoolTracker(
            *((_DWORD *)v15 + 1),
            16LL * (unsigned __int8)*((_WORD *)v15 + 1),
            *(_DWORD *)(v8 + 36),
            (unsigned __int64)p_Next);
          (*(void (__fastcall **)(PSLIST_ENTRY))(v8 + 56))(v20);
          v20 = v17;
          p_Next = &v17->Next;
        }
        while ( v17 );
      }
    }
    ExDeferredFreePool((_DWORD *)(v2 + 3456), 0);
    v10 = *(_QWORD *)(v2 + 8104);
    if ( v10 )
      KeBugCheckEx(0xECu, *(unsigned int *)(v2 + 8), v10, 0LL, 0LL);
    ExCleanupSessionHeapManager();
    *(_DWORD *)(v2 + 4) |= 0x200u;
    MiCheckSessionPoolAllocations();
    v6 = *(_DWORD *)(v2 + 4);
  }
  if ( (v6 & 0x300) == 0x100 )
    ExCleanupSessionHeapManager();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14043B068, 0LL);
  *(_DWORD *)(v2 + 4) |= 0x20u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14043B068, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14043B068);
  KeAbPostRelease((ULONG_PTR)&qword_14043B068);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( *(_QWORD *)(Process + 832) )
  {
    MiSessionUnlinkProcess(v11, Process);
    *(_QWORD *)(Process + 832) = 0LL;
  }
  MiDeleteSessionAddressSpace(v2, v18);
  MiDetachProcessFromSession(0);
  v12 = v18[3] - v18[1];
  if ( v3 == &MiSystemPartition )
    MiReturnResidentAvailable(v18[0]);
  else
    MiReturnPartitionResidentAvailable((__int64)v3, v18[0]);
  if ( v3 == &MiSystemPartition )
    MiReturnResidentAvailable(*(_QWORD *)(v2 + 3120));
  else
    MiReturnPartitionResidentAvailable((__int64)v3, *(_QWORD *)(v2 + 3120));
  result = MiReturnCommit((__int64)v3, v12);
  v14 = *(void **)(v2 + 8304);
  if ( v14 )
    result = ObfDereferenceObjectWithTag(v14, 0x73536D4Du);
  *(_QWORD *)(v2 + 8304) = 0LL;
  return result;
}
