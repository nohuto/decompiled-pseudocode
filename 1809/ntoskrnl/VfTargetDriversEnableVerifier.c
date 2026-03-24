/*
 * XREFs of VfTargetDriversEnableVerifier @ 0x140934944
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x1409377A4 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400F5688 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14016C430 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x14030B5B4 (VfAvlInitializeLockContext.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140934ED4 (ViTargetDriversAllocateVerifiedData.c)
 */

__int64 __fastcall VfTargetDriversEnableVerifier(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  void *VerifiedData; // rdi
  _QWORD *v5; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( !VfSafeMode )
  {
    if ( ViTargetInitialized )
    {
      VerifiedData = (void *)ViTargetDriversAllocateVerifiedData(a2);
      if ( VerifiedData )
      {
        VfAvlInitializeLockContext((__int64)v7, 0);
        v5 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v7, a1, 1LL);
        if ( v5 )
        {
          v5[7] = VerifiedData;
          v2 = 1;
          ++dword_14040D708;
        }
        VfAvlCleanupLockContext((__int64)v7);
        if ( !v2 )
          ExFreePoolWithTag(VerifiedData, 0x44566656u);
      }
    }
  }
  return v2;
}
