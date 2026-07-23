/*
 * XREFs of ViRemLockDeleteFirstTreeNode @ 0x140935854
 * Callers:
 *     VerifierIoInitializeRemoveLockEx @ 0x140935520 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockDeleteMemoryRange @ 0x140935768 (VfRemLockDeleteMemoryRange.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x1400F5708 (VfAvlCleanupLockContext.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14016C410 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x14016C478 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14016C530 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x14030B7A4 (VfAvlInitializeLockContext.c)
 */

__int64 ViRemLockDeleteFirstTreeNode()
{
  _SLIST_ENTRY *v0; // rbx
  unsigned __int64 v1; // r8
  __int64 v2; // r9
  unsigned __int64 *v3; // rax
  unsigned __int64 *v4; // rdi
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v0 = 0LL;
  VfAvlInitializeLockContext((__int64)v6, 0);
  v3 = (unsigned __int64 *)VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)v6, v1, v2);
  v4 = v3;
  if ( v3 )
    v0 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)&ViRemLockAvl, (__int64)v6, *v3, 0LL);
  VfAvlCleanupLockContext((__int64)v6);
  if ( !v4 )
    return 0LL;
  if ( v0 )
  {
    if ( dword_140988038 == 1 )
      ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v0);
    else
      VfUtilFreePoolCheckIRQL(v0);
  }
  return 1LL;
}
