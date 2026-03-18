/*
 * XREFs of VerifierMmAllocateContiguousMemory @ 0x140943D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x14092FD84 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetTrackContiguousMemory @ 0x140935218 (ViTargetTrackContiguousMemory.c)
 *     VfAllocPoolNotification @ 0x140937DDC (VfAllocPoolNotification.c)
 *     VfFillAllocatedMemory @ 0x140937E18 (VfFillAllocatedMemory.c)
 *     VfFaultsInjectResourceFailure @ 0x140938308 (VfFaultsInjectResourceFailure.c)
 */

_SLIST_ENTRY *__fastcall VerifierMmAllocateContiguousMemory(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter2)
{
  int v5; // edi
  _SLIST_ENTRY *v6; // rbx
  unsigned __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  v5 = (MmVerifierData & 0x2000000) != 0 ? 4 : 64;
  if ( (MmVerifierData & 0x4000000) != 0 && BugCheckParameter2 < 0x100000000LL )
    VerifierBugCheckIfAppropriate(0xC4u, 0x141uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  v6 = (_SLIST_ENTRY *)((__int64 (__fastcall *)(ULONG_PTR, _QWORD, ULONG_PTR, _QWORD, int, unsigned int))pXdvMmAllocateContiguousNodeMemory)(
                         BugCheckParameter3,
                         0LL,
                         BugCheckParameter2,
                         0LL,
                         v5,
                         0x80000000);
  VfAllocPoolNotification();
  if ( v6 )
  {
    VfFillAllocatedMemory(v6, BugCheckParameter3);
    if ( (MmVerifierData & 8) != 0 )
      ViTargetTrackContiguousMemory(retaddr, v6, BugCheckParameter3);
  }
  return v6;
}
