/*
 * XREFs of VfRemLockDeleteMemoryRange @ 0x140934768
 * Callers:
 *     VfDriverUnloadImage @ 0x1409213DC (VfDriverUnloadImage.c)
 *     VfFreeMemoryNotification @ 0x140925CB8 (VfFreeMemoryNotification.c)
 *     VfFreePoolNotification @ 0x140937E9C (VfFreePoolNotification.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400F5668 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14016C410 (VfAvlLookupTreeNode.c)
 *     VfPoolIsInternalFree @ 0x14030B088 (VfPoolIsInternalFree.c)
 *     VfAvlInitializeLockContext @ 0x14030B4B4 (VfAvlInitializeLockContext.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140934854 (ViRemLockDeleteFirstTreeNode.c)
 */

char __fastcall VfRemLockDeleteMemoryRange(unsigned __int64 a1, __int64 a2)
{
  int IsInternalFree; // eax
  PVOID v5; // rbx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  LOBYTE(IsInternalFree) = ViRemLockInitialized;
  if ( ViRemLockInitialized )
  {
    LOBYTE(IsInternalFree) = qword_140987020;
    if ( qword_140987020 )
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
