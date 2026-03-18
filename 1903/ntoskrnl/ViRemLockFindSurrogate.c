/*
 * XREFs of ViRemLockFindSurrogate @ 0x140973EBC
 * Callers:
 *     VerifierIoAcquireRemoveLockEx @ 0x140973A40 (VerifierIoAcquireRemoveLockEx.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140973AD0 (VerifierIoInitializeRemoveLockEx.c)
 *     VerifierIoReleaseRemoveLockAndWaitEx @ 0x140973C40 (VerifierIoReleaseRemoveLockAndWaitEx.c)
 *     VerifierIoReleaseRemoveLockEx @ 0x140973CB0 (VerifierIoReleaseRemoveLockEx.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14015461C (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14017E8C4 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x1403292A0 (VfAvlInitializeLockContext.c)
 */

PVOID ViRemLockFindSurrogate()
{
  int v0; // edx
  unsigned __int64 v1; // r8
  PVOID v2; // rbx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = 0LL;
  v4[1] = 0LL;
  VfAvlInitializeLockContext((__int64)v4, 1);
  v2 = VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)v4, v1, (unsigned int)(v0 + 31));
  VfAvlCleanupLockContext((__int64)v4);
  return v2;
}
