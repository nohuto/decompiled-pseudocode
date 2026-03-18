/*
 * XREFs of ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C010DBDC
 * Callers:
 *     AllocateAndLinkHidTLCInfo @ 0x1C00075E8 (AllocateAndLinkHidTLCInfo.c)
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C0007F0C (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     AllocateProcessHidTable @ 0x1C010CB9C (AllocateProcessHidTable.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C010CEB0 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     SearchHidTLCInfo @ 0x1C010DB6C (SearchHidTLCInfo.c)
 *     CleanupHidRequestList @ 0x1C01D80B0 (CleanupHidRequestList.c)
 *     FreeHidTLCInfo @ 0x1C01D8160 (FreeHidTLCInfo.c)
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
