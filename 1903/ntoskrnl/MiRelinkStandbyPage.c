/*
 * XREFs of MiRelinkStandbyPage @ 0x14000E990
 * Callers:
 *     MiEmptyDecayClusterTimers @ 0x14000E780 (MiEmptyDecayClusterTimers.c)
 *     MiUpdatePfnPriority @ 0x14008DD04 (MiUpdatePfnPriority.c)
 *     MiUpdatePfnPriorityByPte @ 0x1400C4A00 (MiUpdatePfnPriorityByPte.c)
 *     MmSetPfnListInfo @ 0x14017801C (MmSetPfnListInfo.c)
 * Callees:
 *     MiInsertPageInList @ 0x1400262A0 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     MiRestoreTransitionPte @ 0x1400DB6B0 (MiRestoreTransitionPte.c)
 */

__int64 __fastcall MiRelinkStandbyPage(ULONG_PTR BugCheckParameter2, int a2)
{
  if ( *(_WORD *)(BugCheckParameter2 + 32) )
  {
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(BugCheckParameter2 + 35) ^= (a2 ^ *(_BYTE *)(BugCheckParameter2 + 35)) & 7;
    return 1LL;
  }
  if ( (unsigned int)MiUnlinkPageFromList(BugCheckParameter2) )
  {
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(BugCheckParameter2 + 35) ^= (a2 ^ *(_BYTE *)(BugCheckParameter2 + 35)) & 7;
    MiInsertPageInList(BugCheckParameter2);
    return 1LL;
  }
  MiRestoreTransitionPte(BugCheckParameter2);
  *(_QWORD *)(BugCheckParameter2 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(BugCheckParameter2 + 34) &= 0xC7u;
  *(_BYTE *)(BugCheckParameter2 + 35) &= ~0x20u;
  *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
  *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
  MiInsertPageInFreeOrZeroedList((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
  return 0LL;
}
