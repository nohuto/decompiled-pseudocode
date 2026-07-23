/*
 * XREFs of ViDevObjRemove @ 0x140973968
 * Callers:
 *     VfIoDeleteDevice @ 0x140973760 (VfIoDeleteDevice.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140084498 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x140154CBC (VfAvlCleanupLockContext.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14017EE90 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x14017EEF8 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14017EFB4 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x140328CF0 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViDevObjRemove(ULONG_PTR BugCheckParameter2)
{
  _SLIST_ENTRY *v2; // rbx
  _DWORD *v3; // rax
  _QWORD v4[3]; // [rsp+30h] [rbp-18h] BYREF

  v4[0] = 0LL;
  v4[1] = 0LL;
  if ( ViDevObjInitialized )
  {
    v2 = 0LL;
    VfAvlInitializeLockContext((__int64)v4, 0);
    v3 = VfAvlLookupTreeNode(ViDevObjAvl, (__int64)v4, BugCheckParameter2, 0LL);
    if ( v3 )
    {
      if ( (v3[4] & 1) != 0 && (MmVerifierData & 0x800) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0xDBuLL, BugCheckParameter2, 0LL, 0LL);
      v2 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)ViDevObjAvl, (__int64)v4, BugCheckParameter2, 0LL);
    }
    VfAvlCleanupLockContext((__int64)v4);
    if ( v2 )
    {
      if ( dword_1409C93B0 == 1 )
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v2);
      else
        VfUtilFreePoolCheckIRQL(v2);
    }
  }
}
