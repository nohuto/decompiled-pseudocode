/*
 * XREFs of VfRemLockDeleteMemoryRange @ 0x140935768
 * Callers:
 *     VfDriverUnloadImage @ 0x1409223DC (VfDriverUnloadImage.c)
 *     VfFreeMemoryNotification @ 0x140926CB8 (VfFreeMemoryNotification.c)
 *     VfFreePoolNotification @ 0x140938E9C (VfFreePoolNotification.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400F5708 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14016C530 (VfAvlLookupTreeNode.c)
 *     VfPoolIsInternalFree @ 0x14030B378 (VfPoolIsInternalFree.c)
 *     VfAvlInitializeLockContext @ 0x14030B7A4 (VfAvlInitializeLockContext.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140935854 (ViRemLockDeleteFirstTreeNode.c)
 */

char __fastcall VfRemLockDeleteMemoryRange(unsigned __int64 a1, __int64 a2)
{
  int IsInternalFree; // eax
  PVOID v5; // rbx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  LOBYTE(IsInternalFree) = ViRemLockInitialized;
  if ( ViRemLockInitialized )
  {
    LOBYTE(IsInternalFree) = qword_140988020;
    if ( qword_140988020 )
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
