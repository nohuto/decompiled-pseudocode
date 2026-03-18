/*
 * XREFs of ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C0103DFC
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

void __fastcall RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded(RIMLOCKExclusiveIfNeeded *this)
{
  if ( *(_QWORD *)this )
  {
    RIMUnlockExclusive();
    *(_QWORD *)this = 0LL;
  }
}
