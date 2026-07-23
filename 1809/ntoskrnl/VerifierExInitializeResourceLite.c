/*
 * XREFs of VerifierExInitializeResourceLite @ 0x140940C40
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x1400F5708 (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x1400F5758 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlReserveNode @ 0x1400F58D0 (VfAvlReserveNode.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14016C410 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x14016C478 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14016C530 (VfAvlLookupTreeNode.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VfAvlInitializeLockContext @ 0x14030B7A4 (VfAvlInitializeLockContext.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140927400 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierExInitializeResourceLite(ULONG_PTR BugCheckParameter2)
{
  int v2; // ebp
  char *v3; // r14
  _SLIST_ENTRY *v4; // rsi
  _BYTE v6[24]; // [rsp+30h] [rbp-18h] BYREF

  VfUtilSynchronizationObjectSanityChecks((PVOID)BugCheckParameter2, 0x68uLL);
  v2 = ((__int64 (__fastcall *)(ULONG_PTR))pXdvExInitializeResourceLite)(BugCheckParameter2);
  if ( v2 >= 0 )
  {
    if ( (MmVerifierData & 0x800) != 0 )
    {
      if ( !ViResourceInitialized )
        return (unsigned int)v2;
      v3 = VfAvlReserveNode(&ViResourceAvl, BugCheckParameter2, 0LL);
      if ( !v3 )
        goto LABEL_4;
      v4 = 0LL;
      VfAvlInitializeLockContext((__int64)v6, 0);
      if ( VfAvlLookupTreeNode(&ViResourceAvl, (__int64)v6, BugCheckParameter2, 0LL) )
      {
        if ( !ViResourcesAlreadyLoadedDrivers && (MmVerifierData & 0x800) != 0 )
          VerifierBugCheckIfAppropriate(0xC4u, 0xD0uLL, BugCheckParameter2, 0LL, 0LL);
        _InterlockedAdd(&ViResourceStaleNodes, 1u);
        v4 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)&ViResourceAvl, (__int64)v6, BugCheckParameter2, 0LL);
      }
      VfAvlInsertReservedTreeNode((__int64)&ViResourceAvl, (__int64)v6, v3);
      VfAvlCleanupLockContext((__int64)v6);
      if ( v4 )
      {
        if ( dword_140986DE0 == 1 )
          ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v4);
        else
          VfUtilFreePoolCheckIRQL(v4);
      }
    }
    else if ( !ViResourceNotTracked )
    {
LABEL_4:
      _InterlockedExchange(&ViResourceNotTracked, 1);
    }
  }
  return (unsigned int)v2;
}
