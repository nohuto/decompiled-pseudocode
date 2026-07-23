/*
 * XREFs of VfPoolIsInternalFree @ 0x14030B378
 * Callers:
 *     VfRemLockDeleteMemoryRange @ 0x140935768 (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForLookaside @ 0x14093FF78 (VfCheckForLookaside.c)
 *     VfCheckForResource @ 0x140940ECC (VfCheckForResource.c)
 * Callees:
 *     <none>
 */

__int64 VfPoolIsInternalFree()
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v1; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = (struct _KTHREAD **)&unk_1404DB778;
  while ( CurrentThread != *v1 )
  {
    v1 += 8;
    if ( (__int64)v1 >= (__int64)&qword_1404DB7F8 )
      return 0LL;
  }
  return 1LL;
}
