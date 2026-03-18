/*
 * XREFs of ViTargetFreeContiguousMemory @ 0x140974560
 * Callers:
 *     VerifierMmFreeContiguousMemory @ 0x140984100 (VerifierMmFreeContiguousMemory.c)
 *     VerifierMmFreeContiguousMemorySpecifyCache @ 0x140984140 (VerifierMmFreeContiguousMemorySpecifyCache.c)
 *     VerifierMmFreeNonCachedMemory @ 0x1409841A0 (VerifierMmFreeNonCachedMemory.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x140154CBC (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14017EFB4 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x140328CF0 (VfAvlInitializeLockContext.c)
 *     ViTargetFreeContiguousMemoryFromNode @ 0x140974608 (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetUpdateTreeAllowed @ 0x14097493C (ViTargetUpdateTreeAllowed.c)
 *     VfAvlEnumerateNodes @ 0x14097D96C (VfAvlEnumerateNodes.c)
 */

char __fastcall ViTargetFreeContiguousMemory(__int64 a1, __int64 a2)
{
  int updated; // eax
  int v4; // edx
  unsigned __int64 v5; // r8
  PVOID v6; // rax
  __int64 v7; // rcx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v9[0] = 0LL;
  v9[1] = 0LL;
  updated = ViTargetUpdateTreeAllowed(a1, a2, a1);
  if ( updated )
  {
    VfAvlInitializeLockContext((__int64)v9, 0);
    v6 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v9, v5, (unsigned int)(v4 + 1));
    if ( !v6 || !(unsigned int)ViTargetFreeContiguousMemoryFromNode(a2, v6) )
      ((void (__fastcall *)(__int64, _QWORD *, __int64 (__fastcall *)(), __int64))VfAvlEnumerateNodes)(
        v7,
        v9,
        ViTargetFreeContiguousMemoryCallback,
        a2);
    LOBYTE(updated) = VfAvlCleanupLockContext((__int64)v9);
  }
  return updated;
}
