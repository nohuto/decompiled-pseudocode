/*
 * XREFs of ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00E7F8C
 * Callers:
 *     AllocateAndLinkHidTLCInfo @ 0x1C00075E8 (AllocateAndLinkHidTLCInfo.c)
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C0007F0C (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     AllocateProcessHidTable @ 0x1C00E6F18 (AllocateProcessHidTable.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C00E7230 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     SearchHidTLCInfo @ 0x1C00E7EEC (SearchHidTLCInfo.c)
 *     CleanupHidRequestList @ 0x1C01D7F30 (CleanupHidRequestList.c)
 *     FreeHidTLCInfo @ 0x1C01D7FE0 (FreeHidTLCInfo.c)
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
