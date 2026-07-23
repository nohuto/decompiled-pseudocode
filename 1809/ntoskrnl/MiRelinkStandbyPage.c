/*
 * XREFs of MiRelinkStandbyPage @ 0x1400F0AB8
 * Callers:
 *     MiUpdatePfnPriorityByPte @ 0x14003DA70 (MiUpdatePfnPriorityByPte.c)
 *     MiUpdatePfnPriority @ 0x140082AA8 (MiUpdatePfnPriority.c)
 *     MiEmptyDecayClusterTimers @ 0x1400F0870 (MiEmptyDecayClusterTimers.c)
 *     MmSetPfnListInfo @ 0x14013FD90 (MmSetPfnListInfo.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiRestoreTransitionPte @ 0x140081000 (MiRestoreTransitionPte.c)
 */

__int64 __fastcall MiRelinkStandbyPage(ULONG_PTR BugCheckParameter2, int a2)
{
  if ( *(_WORD *)(BugCheckParameter2 + 32) )
  {
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(BugCheckParameter2 + 35) ^= (a2 ^ *(_BYTE *)(BugCheckParameter2 + 35)) & 7;
    return 1LL;
  }
  if ( (unsigned int)MiUnlinkPageFromList(BugCheckParameter2, 0) )
  {
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(BugCheckParameter2 + 35) ^= (a2 ^ *(_BYTE *)(BugCheckParameter2 + 35)) & 7;
    MiInsertPageInList(BugCheckParameter2, 4);
    return 1LL;
  }
  MiRestoreTransitionPte(BugCheckParameter2, 0);
  _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(qword_14043B808
                                                                + 8
                                                                * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL))
                                                    + (-(__int64)((*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0) & 0xFFFFFFFFFFFFFD40uLL)
                                                    + 4992));
  *(_QWORD *)(BugCheckParameter2 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(BugCheckParameter2 + 34) &= 0xC7u;
  *(_BYTE *)(BugCheckParameter2 + 35) &= ~0x20u;
  *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
  *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
  MiInsertPageInFreeOrZeroedList((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, 2);
  return 0LL;
}
