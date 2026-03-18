/*
 * XREFs of MiUpdateTransitionPteFrame @ 0x140118984
 * Callers:
 *     MiInvalidateCollidedIos @ 0x140117D28 (MiInvalidateCollidedIos.c)
 *     MiReplaceTransitionPage @ 0x14011844C (MiReplaceTransitionPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140151F00 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSplitDirectMapPage @ 0x1402B6C24 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402C0F10 (MiSwapNumaStandbyPage.c)
 *     MiDuplicateCloneLeaf @ 0x1402C98D8 (MiDuplicateCloneLeaf.c)
 *     MiSwapHardFaultPage @ 0x1402CFE5C (MiSwapHardFaultPage.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiUpdateTransitionPteFrame(__int64 a1, __int64 a2)
{
  if ( qword_14043A0C0 )
  {
    if ( (a1 & 0x10) != 0 )
      a1 &= ~0x10uLL;
    else
      a1 &= ~qword_14043A0C0;
  }
  return MiSwizzleInvalidPte((a1 ^ (a2 << 12)) & 0xFFFFFFFFF000LL ^ a1);
}
