/*
 * XREFs of VfPoolIsInternalFree @ 0x140328CBC
 * Callers:
 *     VfRemLockDeleteMemoryRange @ 0x140973D18 (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForLookaside @ 0x14097E808 (VfCheckForLookaside.c)
 *     VfCheckForResource @ 0x14097F76C (VfCheckForResource.c)
 * Callees:
 *     <none>
 */

__int64 VfPoolIsInternalFree()
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v1; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = (struct _KTHREAD **)&unk_1405050A8;
  while ( CurrentThread != *v1 )
  {
    v1 += 8;
    if ( (__int64)v1 >= (__int64)&ViAvlNodeLookaside.L.Tag )
      return 0LL;
  }
  return 1LL;
}
