/*
 * XREFs of CmpAllocateKeyControlBlock @ 0x140667ED4
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1406676D0 (CmpCreateKeyControlBlock.c)
 *     CmpCloneToUnbackedKcb @ 0x14082A5D4 (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

PSLIST_ENTRY CmpAllocateKeyControlBlock()
{
  PSLIST_ENTRY v0; // rbx

  _InterlockedIncrement64(&CmPerfCounters);
  ++dword_1404F2954;
  v0 = RtlpInterlockedPopEntrySList(&CmpKcbLookaside);
  if ( v0
    || (++dword_1404F2958,
        (v0 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _SLIST_HEADER *))qword_1404F2970)(
                              (unsigned int)dword_1404F2964,
                              (unsigned int)dword_1404F296C,
                              (unsigned int)dword_1404F2968,
                              &CmpKcbLookaside)) != 0LL) )
  {
    _InterlockedIncrement64(qword_1409AEF50);
    memset(v0, 0, 0x138uLL);
  }
  return v0;
}
