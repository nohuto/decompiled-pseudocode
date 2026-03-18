/*
 * XREFs of VfCheckForLookaside @ 0x14093EF78
 * Callers:
 *     ExpCheckForLookaside @ 0x14031CB04 (ExpCheckForLookaside.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400F5668 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14016C410 (VfAvlLookupTreeNode.c)
 *     VfPoolIsInternalFree @ 0x14030B088 (VfPoolIsInternalFree.c)
 *     VfAvlInitializeLockContext @ 0x14030B4B4 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x14092FD84 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfCheckForLookaside(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG_PTR *v5; // rax
  _BYTE v6[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( !ViLookasideInitialized )
    return 0LL;
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
