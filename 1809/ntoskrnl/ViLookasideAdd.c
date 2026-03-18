/*
 * XREFs of ViLookasideAdd @ 0x14093F00C
 * Callers:
 *     VerifierExInitializeLookasideListEx @ 0x14093EC00 (VerifierExInitializeLookasideListEx.c)
 *     ViLookasideTrackList @ 0x14093F204 (ViLookasideTrackList.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1400922D8 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x1400F5668 (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x1400F56B8 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlReserveNode @ 0x1400F5830 (VfAvlReserveNode.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14016C2F0 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x14016C358 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14016C410 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x14030B4B4 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x14092FD84 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViLookasideAdd(ULONG_PTR BugCheckParameter2)
{
  char *v2; // rsi
  struct _SLIST_ENTRY *v3; // rbx
  _BYTE v4[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( ViLookasideInitialized )
  {
    v2 = VfAvlReserveNode(ViLookasideAvl, BugCheckParameter2, 0LL);
    if ( v2 )
    {
      v3 = 0LL;
      VfAvlInitializeLockContext((__int64)v4, 0);
      if ( VfAvlLookupTreeNode(ViLookasideAvl, (__int64)v4, BugCheckParameter2, 0LL) )
      {
        if ( !ViLookasideAllocationFailures && !ViLookasideAlreadyLoadedDrivers && (MmVerifierData & 0x800) != 0 )
          VerifierBugCheckIfAppropriate(0xC4u, 0xCAuLL, BugCheckParameter2, 0LL, 0LL);
        v3 = (struct _SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)ViLookasideAvl, (__int64)v4, BugCheckParameter2, 0LL);
      }
      VfAvlInsertReservedTreeNode((__int64)ViLookasideAvl, (__int64)v4, v2);
      VfAvlCleanupLockContext((__int64)v4);
      if ( v3 )
      {
        if ( dword_140987010 == 1 )
          ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v3);
        else
          VfUtilFreePoolCheckIRQL(v3);
      }
    }
    else
    {
      _InterlockedExchange(&ViLookasideAllocationFailures, 1);
    }
  }
}
