/*
 * XREFs of ViDevObjAdd @ 0x1409738E4
 * Callers:
 *     VerifierIoCreateDevice @ 0x1409734F0 (VerifierIoCreateDevice.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x140154CBC (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x140154D0C (VfAvlInsertReservedTreeNode.c)
 *     VfAvlReserveNode @ 0x140154E84 (VfAvlReserveNode.c)
 *     VfAvlInitializeLockContext @ 0x140328CF0 (VfAvlInitializeLockContext.c)
 */

char __fastcall ViDevObjAdd(__int64 a1)
{
  char v1; // bl
  char *v2; // rax
  _QWORD *v3; // r8
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = 0LL;
  v5[1] = 0LL;
  v1 = 1;
  if ( ViDevObjInitialized )
  {
    v2 = VfAvlReserveNode(ViDevObjAvl, a1, 336LL);
    if ( v2 )
    {
      *((_DWORD *)v2 + 4) = 0;
      VfAvlInitializeLockContext((__int64)v5, 0);
      VfAvlInsertReservedTreeNode((__int64)ViDevObjAvl, (__int64)v5, v3);
      VfAvlCleanupLockContext((__int64)v5);
      return v1;
    }
    _InterlockedExchange(&ViDevObjAllocationFailures, 1);
  }
  return 0;
}
