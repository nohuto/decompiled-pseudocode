/*
 * XREFs of ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0103E2C
 * Callers:
 *     AllocateAndLinkHidTLCInfo @ 0x1C0004C90 (AllocateAndLinkHidTLCInfo.c)
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C0005328 (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     SearchHidTLCInfo @ 0x1C0102EF4 (SearchHidTLCInfo.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C0103D70 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     CleanupHidRequestList @ 0x1C01C4CC0 (CleanupHidRequestList.c)
 *     FreeHidTLCInfo @ 0x1C01C4D70 (FreeHidTLCInfo.c)
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
