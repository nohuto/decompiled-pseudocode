/*
 * XREFs of VerifierMmAllocateContiguousMemorySpecifyCache @ 0x140944DF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetTrackContiguousMemory @ 0x140936218 (ViTargetTrackContiguousMemory.c)
 *     VfAllocPoolNotification @ 0x140938DDC (VfAllocPoolNotification.c)
 *     VfFillAllocatedMemory @ 0x140938E18 (VfFillAllocatedMemory.c)
 *     VfFaultsInjectResourceFailure @ 0x140939308 (VfFaultsInjectResourceFailure.c)
 */

_SLIST_ENTRY *__fastcall VerifierMmAllocateContiguousMemorySpecifyCache(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        int a5)
{
  int v10; // ebp
  _SLIST_ENTRY *v11; // rbx
  unsigned __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  if ( a5 == 1 )
  {
    v10 = (MmVerifierData & 0x2000000) != 0 ? 4 : 64;
  }
  else
  {
    v10 = 516;
    if ( a5 == 2 )
      v10 = 1028;
  }
  if ( (MmVerifierData & 0x4000000) != 0 && a3 < 0x100000000LL )
    VerifierBugCheckIfAppropriate(0xC4u, 0x141uLL, a3, BugCheckParameter3, 0LL);
  v11 = (_SLIST_ENTRY *)((__int64 (__fastcall *)(ULONG_PTR, __int64, ULONG_PTR, __int64, int, unsigned int))pXdvMmAllocateContiguousNodeMemory)(
                          BugCheckParameter3,
                          a2,
                          a3,
                          a4,
                          v10,
                          0x80000000);
  VfAllocPoolNotification();
  if ( v11 )
  {
    VfFillAllocatedMemory(v11, BugCheckParameter3);
    if ( (MmVerifierData & 8) != 0 )
      ViTargetTrackContiguousMemory(retaddr, v11, BugCheckParameter3);
  }
  return v11;
}
