/*
 * XREFs of MiReturnFreeZeroPage @ 0x14008228C
 * Callers:
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiCoalesceFreePages @ 0x1400390D0 (MiCoalesceFreePages.c)
 *     MiMigratePfn @ 0x14003C640 (MiMigratePfn.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiTradePage @ 0x14009C030 (MiTradePage.c)
 *     MiReleaseFreshPage @ 0x1400E1084 (MiReleaseFreshPage.c)
 *     MiGetPerfectColorHeadPage @ 0x1400EE0C8 (MiGetPerfectColorHeadPage.c)
 *     MiFinalizeImageHeaderPage @ 0x14012DE80 (MiFinalizeImageHeaderPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140152020 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIsFreeZeroPfnCold @ 0x140082360 (MiIsFreeZeroPfnCold.c)
 */

__int64 __fastcall MiReturnFreeZeroPage(__int64 a1)
{
  char v2; // cl
  char v3; // al
  int IsFreeZeroPfnCold; // eax
  __int16 v5; // r8
  ULONG_PTR v6; // r10
  __int16 v7; // r11
  __int16 v8; // dx

  v2 = *(_BYTE *)(a1 + 34);
  if ( (v2 & 7) == 6 )
  {
    *(_BYTE *)(a1 + 34) = v2 & 0xF8 | 5;
    v2 = *(_BYTE *)(a1 + 34);
  }
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  v3 = *(_BYTE *)(a1 + 35) & 0xDF;
  *(_BYTE *)(a1 + 34) = v2 & 0xC7;
  *(_BYTE *)(a1 + 35) = v3;
  *(_WORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 35) = v3 & 0xEF;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  IsFreeZeroPfnCold = MiIsFreeZeroPfnCold(a1);
  v8 = v5 | 0x400;
  if ( !IsFreeZeroPfnCold )
    v8 = v5;
  return MiInsertPageInFreeOrZeroedList(v6, v7 | v8);
}
