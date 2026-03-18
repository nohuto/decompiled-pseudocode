/*
 * XREFs of VfPoolIsInternalFree @ 0x14030B088
 * Callers:
 *     VfRemLockDeleteMemoryRange @ 0x140934768 (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForLookaside @ 0x14093EF78 (VfCheckForLookaside.c)
 *     VfCheckForResource @ 0x14093FECC (VfCheckForResource.c)
 * Callees:
 *     <none>
 */

__int64 VfPoolIsInternalFree()
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v1; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = (struct _KTHREAD **)&unk_1404DA6B8;
  while ( CurrentThread != *v1 )
  {
    v1 += 8;
    if ( (__int64)v1 >= (__int64)&qword_1404DA738 )
      return 0LL;
  }
  return 1LL;
}
