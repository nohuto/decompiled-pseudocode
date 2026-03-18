/*
 * XREFs of ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00E7F5C
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

void __fastcall RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded(RIMLOCKExclusiveIfNeeded *this)
{
  if ( *(_QWORD *)this )
  {
    RIMUnlockExclusive();
    *(_QWORD *)this = 0LL;
  }
}
