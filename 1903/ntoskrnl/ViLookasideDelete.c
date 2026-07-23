/*
 * XREFs of ViLookasideDelete @ 0x14097E9CC
 * Callers:
 *     VerifierExDeleteLookasideListEx @ 0x14097E400 (VerifierExDeleteLookasideListEx.c)
 *     VerifierExDeleteNPagedLookasideList @ 0x14097E430 (VerifierExDeleteNPagedLookasideList.c)
 *     VerifierExDeletePagedLookasideList @ 0x14097E460 (VerifierExDeletePagedLookasideList.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x14015461C (VfAvlCleanupLockContext.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14017E7A0 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x14017E808 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14017E8C4 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x1403292A0 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViLookasideDelete(ULONG_PTR BugCheckParameter2)
{
  _SLIST_ENTRY *v2; // rbx
  _QWORD v3[3]; // [rsp+30h] [rbp-18h] BYREF

  v3[0] = 0LL;
  v3[1] = 0LL;
  if ( ViLookasideInitialized )
  {
    v2 = 0LL;
    VfAvlInitializeLockContext((__int64)v3, 0);
    if ( VfAvlLookupTreeNode(ViLookasideAvl, (__int64)v3, BugCheckParameter2, 0LL) )
    {
      v2 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)ViLookasideAvl, (__int64)v3, BugCheckParameter2, 0LL);
    }
    else if ( !ViLookasideAllocationFailures && !ViLookasideAlreadyLoadedDrivers && (MmVerifierData & 0x800) != 0 )
    {
      VerifierBugCheckIfAppropriate(0xC4u, 0xCBuLL, BugCheckParameter2, 0LL, 0LL);
    }
    VfAvlCleanupLockContext((__int64)v3);
    if ( v2 )
    {
      if ( dword_1409C9360 == 1 )
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v2);
      else
        VfUtilFreePoolCheckIRQL(v2);
    }
  }
}
