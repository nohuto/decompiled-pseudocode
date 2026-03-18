/*
 * XREFs of VfCheckForLookaside @ 0x14097E808
 * Callers:
 *     ExpCheckForLookaside @ 0x14033BE78 (ExpCheckForLookaside.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14015461C (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14017E8C4 (VfAvlLookupTreeNode.c)
 *     VfPoolIsInternalFree @ 0x14032926C (VfPoolIsInternalFree.c)
 *     VfAvlInitializeLockContext @ 0x1403292A0 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfCheckForLookaside(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 result; // rax
  ULONG_PTR *v5; // rax
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF

  result = 0LL;
  v6[0] = 0LL;
  v6[1] = 0LL;
  if ( ViLookasideInitialized )
  {
    if ( !(unsigned int)VfPoolIsInternalFree() )
    {
      VfAvlInitializeLockContext((__int64)v6, 1);
      v5 = (ULONG_PTR *)VfAvlLookupTreeNode(ViLookasideAvl, (__int64)v6, BugCheckParameter3, a2);
      if ( v5 )
      {
        if ( (MmVerifierData & 0x800) != 0 )
          VerifierBugCheckIfAppropriate(0xC4u, 0xCCuLL, *v5, BugCheckParameter3, a2);
      }
      VfAvlCleanupLockContext((__int64)v6);
    }
    return 1LL;
  }
  return result;
}
