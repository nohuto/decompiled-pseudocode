/*
 * XREFs of VfCheckForResource @ 0x14097F76C
 * Callers:
 *     ExpCheckForResource @ 0x14033AB64 (ExpCheckForResource.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x14015461C (VfAvlCleanupLockContext.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14017E7A0 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x14017E808 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14017E8C4 (VfAvlLookupTreeNode.c)
 *     VfPoolIsInternalFree @ 0x14032926C (VfPoolIsInternalFree.c)
 *     VfAvlInitializeLockContext @ 0x1403292A0 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfCheckForResource(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG_PTR *v4; // rax
  ULONG_PTR *v5; // rbx
  _SLIST_ENTRY *v6; // rbx
  _QWORD v8[2]; // [rsp+30h] [rbp-10h] BYREF
  ULONG_PTR v9; // [rsp+60h] [rbp+20h] BYREF

  v8[0] = 0LL;
  v8[1] = 0LL;
  if ( !ViResourceInitialized )
    return 0LL;
  if ( !(unsigned int)VfPoolIsInternalFree() && qword_1409C8110 )
  {
    v9 = 0LL;
    VfAvlInitializeLockContext((__int64)v8, 1);
    v4 = (ULONG_PTR *)VfAvlLookupTreeNode(&ViResourceAvl, (__int64)v8, BugCheckParameter3, a2);
    v5 = v4;
    if ( v4 )
    {
      if ( !ViResourcesAlreadyLoadedDrivers && (MmVerifierData & 0x800) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0xD2uLL, *v4, BugCheckParameter3, a2);
      v9 = *v5;
    }
    VfAvlCleanupLockContext((__int64)v8);
    if ( v9 )
    {
      _InterlockedIncrement(&ViResourceStaleNodes);
      VfAvlInitializeLockContext((__int64)v8, 0);
      v6 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)&ViResourceAvl, (__int64)v8, (unsigned __int64)&v9, 0LL);
      VfAvlCleanupLockContext((__int64)v8);
      if ( v6 )
      {
        if ( dword_1409C8128 == 1 )
          ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v6);
        else
          VfUtilFreePoolCheckIRQL(v6);
      }
      return 0LL;
    }
  }
  return 1LL;
}
