/*
 * XREFs of ViDevObjRemove @ 0x1409343B8
 * Callers:
 *     VfIoDeleteDevice @ 0x140934128 (VfIoDeleteDevice.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1400922D8 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x1400F5668 (VfAvlCleanupLockContext.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14016C2F0 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x14016C358 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14016C410 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x14030B4B4 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x14092FD84 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViDevObjRemove(ULONG_PTR BugCheckParameter2)
{
  struct _SLIST_ENTRY *v2; // rbx
  _DWORD *v3; // rax
  _BYTE v4[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( ViDevObjInitialized )
  {
    v2 = 0LL;
    VfAvlInitializeLockContext((__int64)v4, 0);
    v3 = VfAvlLookupTreeNode(ViDevObjAvl, (__int64)v4, BugCheckParameter2, 0LL);
    if ( v3 )
    {
      if ( (v3[4] & 1) != 0 && (MmVerifierData & 0x800) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0xDBuLL, BugCheckParameter2, 0LL, 0LL);
      v2 = (struct _SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)ViDevObjAvl, (__int64)v4, BugCheckParameter2, 0LL);
    }
    VfAvlCleanupLockContext((__int64)v4);
    if ( v2 )
    {
      if ( dword_140987060 == 1 )
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v2);
      else
        VfUtilFreePoolCheckIRQL(v2);
    }
  }
}
