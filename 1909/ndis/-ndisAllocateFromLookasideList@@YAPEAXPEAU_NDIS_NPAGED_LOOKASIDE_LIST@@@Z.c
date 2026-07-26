/*
 * XREFs of ?ndisAllocateFromLookasideList@@YAPEAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@@Z @ 0x1C001A8D4
 * Callers:
 *     ?ndisPplAllocate@@YAPEAXPEAXKPEAK@Z @ 0x1C001A794 (-ndisPplAllocate@@YAPEAXPEAXKPEAK@Z.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall ndisAllocateFromLookasideList(struct _NDIS_NPAGED_LOOKASIDE_LIST *a1)
{
  PSLIST_ENTRY v2; // rbx
  KIRQL v4; // al
  _SLIST_HEADER *AllocListPtr; // r8

  ++a1->List.L.TotalAllocates;
  v2 = ExpInterlockedPopEntrySList(a1->AllocListPtr);
  if ( !v2 )
  {
    if ( ExQueryDepthSList(a1->FreeListPtr) < 0xAu
      || (v4 = KeAcquireSpinLockRaiseToDpc(&a1->ListSwapLock),
          AllocListPtr = a1->AllocListPtr,
          a1->AllocListPtr = a1->FreeListPtr,
          a1->FreeListPtr = AllocListPtr,
          KeReleaseSpinLock(&a1->ListSwapLock, v4),
          (v2 = ExpInterlockedPopEntrySList(a1->AllocListPtr)) == 0LL) )
    {
      ++a1->List.L.AllocateMisses;
    }
  }
  return v2;
}
