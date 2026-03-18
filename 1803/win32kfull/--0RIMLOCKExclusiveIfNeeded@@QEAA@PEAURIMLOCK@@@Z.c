/*
 * XREFs of ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C005A71C
 * Callers:
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C000585C (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     AllocateAndLinkHidTLCInfo @ 0x1C0005AA4 (AllocateAndLinkHidTLCInfo.c)
 *     SearchHidTLCInfo @ 0x1C0057E78 (SearchHidTLCInfo.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C005A690 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     CleanupHidRequestList @ 0x1C01A3040 (CleanupHidRequestList.c)
 *     FreeHidTLCInfo @ 0x1C01A30EC (FreeHidTLCInfo.c)
 * Callees:
 *     <none>
 */

RIMLOCKExclusiveIfNeeded *__fastcall RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
        RIMLOCKExclusiveIfNeeded *this,
        struct _KTHREAD **a2)
{
  *(_QWORD *)this = 0LL;
  if ( a2[1] != KeGetCurrentThread() )
  {
    *(_QWORD *)this = a2;
    RIMLockExclusive(a2);
  }
  return this;
}
