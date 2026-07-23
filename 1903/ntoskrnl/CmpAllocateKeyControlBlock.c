/*
 * XREFs of CmpAllocateKeyControlBlock @ 0x140654DD4
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1406545D0 (CmpCreateKeyControlBlock.c)
 *     CmpCloneToUnbackedKcb @ 0x14082AED4 (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

PSLIST_ENTRY CmpAllocateKeyControlBlock()
{
  PSLIST_ENTRY v0; // rbx

  _InterlockedIncrement64(&CmPerfCounters);
  ++dword_1404F2C14;
  v0 = RtlpInterlockedPopEntrySList(&CmpKcbLookaside);
  if ( v0
    || (++dword_1404F2C18,
        (v0 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _SLIST_HEADER *))qword_1404F2C30)(
                              (unsigned int)dword_1404F2C24,
                              (unsigned int)dword_1404F2C2C,
                              (unsigned int)dword_1404F2C28,
                              &CmpKcbLookaside)) != 0LL) )
  {
    _InterlockedIncrement64(qword_1409AEF50);
    memset(v0, 0, 0x138uLL);
  }
  return v0;
}
