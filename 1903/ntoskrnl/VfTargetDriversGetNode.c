/*
 * XREFs of VfTargetDriversGetNode @ 0x140328A8C
 * Callers:
 *     VfTargetDriversGetVerifierData @ 0x140973FBC (VfTargetDriversGetVerifierData.c)
 *     ViThunkApplyThunksCurrentSession @ 0x14097647C (ViThunkApplyThunksCurrentSession.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14015461C (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14017E8C4 (VfAvlLookupTreeNode.c)
 */

PVOID __fastcall VfTargetDriversGetNode(unsigned __int64 a1)
{
  PVOID v1; // rbx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0LL;
  if ( !VfSafeMode && ViTargetInitialized )
  {
    v3[0] = 0LL;
    v3[1] = 0LL;
    v1 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v3, a1, 1LL);
    VfAvlCleanupLockContext((__int64)v3);
  }
  return v1;
}
