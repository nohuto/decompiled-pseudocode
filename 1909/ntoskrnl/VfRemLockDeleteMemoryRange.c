/*
 * XREFs of VfRemLockDeleteMemoryRange @ 0x140973D18
 * Callers:
 *     VfDriverUnloadImage @ 0x140960480 (VfDriverUnloadImage.c)
 *     VfFreeMemoryNotification @ 0x14096414C (VfFreeMemoryNotification.c)
 *     VfFreePoolNotification @ 0x14097D3B0 (VfFreePoolNotification.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x140154CBC (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14017EFB4 (VfAvlLookupTreeNode.c)
 *     VfPoolIsInternalFree @ 0x140328CBC (VfPoolIsInternalFree.c)
 *     VfAvlInitializeLockContext @ 0x140328CF0 (VfAvlInitializeLockContext.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140973E10 (ViRemLockDeleteFirstTreeNode.c)
 */

char __fastcall VfRemLockDeleteMemoryRange(unsigned __int64 a1, __int64 a2)
{
  int IsInternalFree; // eax
  PVOID v5; // rbx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v7[0] = 0LL;
  v7[1] = 0LL;
  LOBYTE(IsInternalFree) = ViRemLockInitialized;
  if ( ViRemLockInitialized )
  {
    LOBYTE(IsInternalFree) = qword_1409C9370;
    if ( qword_1409C9370 )
    {
      IsInternalFree = VfPoolIsInternalFree();
      if ( !IsInternalFree )
      {
        VfAvlInitializeLockContext((__int64)v7, 1);
        v5 = VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)v7, a1, a2);
        LOBYTE(IsInternalFree) = VfAvlCleanupLockContext((__int64)v7);
        if ( v5 )
        {
          do
            IsInternalFree = ViRemLockDeleteFirstTreeNode(a1, a2);
          while ( IsInternalFree );
        }
      }
    }
  }
  return IsInternalFree;
}
