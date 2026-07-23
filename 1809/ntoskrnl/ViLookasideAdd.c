/*
 * XREFs of ViLookasideAdd @ 0x14094000C
 * Callers:
 *     VerifierExInitializeLookasideListEx @ 0x14093FC00 (VerifierExInitializeLookasideListEx.c)
 *     ViLookasideTrackList @ 0x140940204 (ViLookasideTrackList.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x1400F5708 (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x1400F5758 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlReserveNode @ 0x1400F58D0 (VfAvlReserveNode.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14016C410 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x14016C478 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14016C530 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x14030B7A4 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViLookasideAdd(ULONG_PTR BugCheckParameter2)
{
  char *v2; // rsi
  _SLIST_ENTRY *v3; // rbx
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
        v3 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)ViLookasideAvl, (__int64)v4, BugCheckParameter2, 0LL);
      }
      VfAvlInsertReservedTreeNode((__int64)ViLookasideAvl, (__int64)v4, v2);
      VfAvlCleanupLockContext((__int64)v4);
      if ( v3 )
      {
        if ( dword_140988010 == 1 )
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
