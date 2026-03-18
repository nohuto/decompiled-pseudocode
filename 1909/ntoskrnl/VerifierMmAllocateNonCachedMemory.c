/*
 * XREFs of VerifierMmAllocateNonCachedMemory @ 0x140983C80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ViTargetTrackContiguousMemory @ 0x140974824 (ViTargetTrackContiguousMemory.c)
 *     VfFaultsInjectResourceFailure @ 0x140979C20 (VfFaultsInjectResourceFailure.c)
 *     VfAllocPoolNotification @ 0x14097D2F0 (VfAllocPoolNotification.c)
 *     VfFillAllocatedMemory @ 0x14097D32C (VfFillAllocatedMemory.c)
 */

_SLIST_ENTRY *__fastcall VerifierMmAllocateNonCachedMemory(size_t a1)
{
  _SLIST_ENTRY *v3; // rbx
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  v3 = (_SLIST_ENTRY *)((__int64 (__fastcall *)(size_t))pXdvMmAllocateNonCachedMemory)(a1);
  VfAllocPoolNotification();
  if ( v3 )
  {
    VfFillAllocatedMemory(v3, a1);
    if ( (MmVerifierData & 8) != 0 )
      ViTargetTrackContiguousMemory(retaddr, v3, a1);
  }
  return v3;
}
