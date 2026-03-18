/*
 * XREFs of VfDevObjIsDeviceRemoved @ 0x1409735E8
 * Callers:
 *     VfWmiVerifyIrpStackUpward @ 0x140980910 (VfWmiVerifyIrpStackUpward.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14015461C (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14017E8C4 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x1403292A0 (VfAvlInitializeLockContext.c)
 */

char VfDevObjIsDeviceRemoved()
{
  bool v1; // bl
  unsigned __int64 v2; // r8
  _BYTE *v3; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = 0LL;
  v4[1] = 0LL;
  if ( (MmVerifierData & 0x10) == 0 )
    return 1;
  v1 = 1;
  VfAvlInitializeLockContext((__int64)v4, 1);
  v3 = VfAvlLookupTreeNode(ViDevObjAvl, (__int64)v4, v2, 0LL);
  if ( v3 )
    v1 = (v3[16] & 2) != 0;
  VfAvlCleanupLockContext((__int64)v4);
  return v1;
}
