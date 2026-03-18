/*
 * XREFs of ViLookasideDelete @ 0x14093F12C
 * Callers:
 *     VerifierExDeleteLookasideListEx @ 0x14093EB70 (VerifierExDeleteLookasideListEx.c)
 *     VerifierExDeleteNPagedLookasideList @ 0x14093EBA0 (VerifierExDeleteNPagedLookasideList.c)
 *     VerifierExDeletePagedLookasideList @ 0x14093EBD0 (VerifierExDeletePagedLookasideList.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1400922D8 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x1400F5668 (VfAvlCleanupLockContext.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14016C2F0 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x14016C358 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14016C410 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x14030B4B4 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x14092FD84 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViLookasideDelete(ULONG_PTR BugCheckParameter2)
{
  struct _SLIST_ENTRY *v2; // rbx
  _BYTE v3[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( ViLookasideInitialized )
  {
    v2 = 0LL;
    VfAvlInitializeLockContext((__int64)v3, 0);
    if ( VfAvlLookupTreeNode(ViLookasideAvl, (__int64)v3, BugCheckParameter2, 0LL) )
    {
      v2 = (struct _SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)ViLookasideAvl, (__int64)v3, BugCheckParameter2, 0LL);
    }
    else if ( !ViLookasideAllocationFailures && !ViLookasideAlreadyLoadedDrivers && (MmVerifierData & 0x800) != 0 )
    {
      VerifierBugCheckIfAppropriate(0xC4u, 0xCBuLL, BugCheckParameter2, 0LL, 0LL);
    }
    VfAvlCleanupLockContext((__int64)v3);
    if ( v2 )
    {
      if ( dword_140987010 == 1 )
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v2);
      else
        VfUtilFreePoolCheckIRQL(v2);
    }
  }
}
