/*
 * XREFs of ViDevObjAdd @ 0x140934340
 * Callers:
 *     VerifierIoCreateDevice @ 0x140933ED0 (VerifierIoCreateDevice.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400F5668 (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x1400F56B8 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlReserveNode @ 0x1400F5830 (VfAvlReserveNode.c)
 *     VfAvlInitializeLockContext @ 0x14030B4B4 (VfAvlInitializeLockContext.c)
 */

char __fastcall ViDevObjAdd(__int64 a1)
{
  char v1; // bl
  char *v2; // rax
  _QWORD *v3; // r8
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

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
