/*
 * XREFs of VfDevObjMarkDeviceRemoved @ 0x140973660
 * Callers:
 *     IovpCallDriver1 @ 0x14096D504 (IovpCallDriver1.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x140154CBC (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14017EFB4 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x140328CF0 (VfAvlInitializeLockContext.c)
 */

unsigned __int8 VfDevObjMarkDeviceRemoved()
{
  unsigned __int8 result; // al
  unsigned __int64 v1; // r8
  volatile signed __int32 *v2; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 0LL;
  v3[1] = 0LL;
  result = MmVerifierData;
  if ( (MmVerifierData & 0x10) != 0 )
  {
    VfAvlInitializeLockContext((__int64)v3, 1);
    v2 = (volatile signed __int32 *)VfAvlLookupTreeNode(ViDevObjAvl, (__int64)v3, v1, 0LL);
    if ( v2 )
      _InterlockedOr(v2 + 4, 2u);
    return VfAvlCleanupLockContext((__int64)v3);
  }
  return result;
}
