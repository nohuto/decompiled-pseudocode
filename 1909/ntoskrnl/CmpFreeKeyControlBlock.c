/*
 * XREFs of CmpFreeKeyControlBlock @ 0x1406BA6D0
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405F8430 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpUnlockKcbStack @ 0x1405F9440 (CmpUnlockKcbStack.c)
 *     CmpUnlockKcb @ 0x1405F94F0 (CmpUnlockKcb.c)
 *     CmpDereferenceKeyControlBlock @ 0x140603F90 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockTwoKcbs @ 0x140663500 (CmpUnlockTwoKcbs.c)
 *     CmpWalkOneLevel @ 0x140665590 (CmpWalkOneLevel.c)
 *     CmpCreateKeyControlBlock @ 0x1406676D0 (CmpCreateKeyControlBlock.c)
 *     CmpGetSymbolicLinkTarget @ 0x140668CB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpCleanUpKCBCacheTable @ 0x1406BA5C8 (CmpCleanUpKCBCacheTable.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406C53FC (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpCloneToUnbackedKcb @ 0x14082A5D4 (CmpCloneToUnbackedKcb.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14082ACBC (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1400CFDB0 (CmpFreeTransientPoolWithTag.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY __fastcall CmpFreeKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  void *v2; // rcx
  unsigned __int64 v3; // rcx
  PSLIST_ENTRY result; // rax

  _InterlockedDecrement64(&CmPerfCounters);
  if ( *(_QWORD *)(BugCheckParameter2 + 120) != BugCheckParameter2 + 120 )
    KeBugCheckEx(0x51u, 0x11uLL, BugCheckParameter2, 0LL, 0LL);
  if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x10000) != 0 )
    KeBugCheckEx(0x51u, 0x11uLL, BugCheckParameter2, 1uLL, 0LL);
  v2 = *(void **)(BugCheckParameter2 + 200);
  if ( (unsigned __int64)v2 >= 2 )
    ExFreePoolWithTag(v2, 0x624E4D43u);
  v3 = *(_QWORD *)(BugCheckParameter2 + 296);
  if ( (v3 & 1) != 0 )
    v3 &= ~1uLL;
  if ( v3 )
    CmpFreeTransientPoolWithTag((void *)v3, 0x624E4D43u);
  *(_DWORD *)(BugCheckParameter2 + 8) |= 0x10000u;
  *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
  ++dword_1404F295C;
  if ( LOWORD(CmpKcbLookaside.Alignment) >= (unsigned __int16)word_1404F2950 )
  {
    ++dword_1404F2960;
    result = (PSLIST_ENTRY)((__int64 (__fastcall *)(ULONG_PTR, _SLIST_HEADER *))qword_1404F2978)(
                             BugCheckParameter2,
                             &CmpKcbLookaside);
  }
  else
  {
    result = RtlpInterlockedPushEntrySList(&CmpKcbLookaside, (PSLIST_ENTRY)BugCheckParameter2);
  }
  _InterlockedDecrement64(qword_1409AEF50);
  return result;
}
