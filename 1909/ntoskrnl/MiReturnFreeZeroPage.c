/*
 * XREFs of MiReturnFreeZeroPage @ 0x1400C49C0
 * Callers:
 *     MiCoalesceFreePages @ 0x14002BB50 (MiCoalesceFreePages.c)
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiMigratePfn @ 0x1400B3DB0 (MiMigratePfn.c)
 *     MiTradePage @ 0x1400B9240 (MiTradePage.c)
 *     MiGetPerfectColorHeadPage @ 0x1400C21CC (MiGetPerfectColorHeadPage.c)
 *     MiReleaseFreshPage @ 0x1400F9D6C (MiReleaseFreshPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140161160 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiFreeLargeInitializationCodePages @ 0x140188C8C (MiFreeLargeInitializationCodePages.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002B2E0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIsFreeZeroPfnCold @ 0x1400C4A94 (MiIsFreeZeroPfnCold.c)
 */

void __fastcall MiReturnFreeZeroPage(__int64 a1)
{
  char v3; // cl
  char v4; // al
  int IsFreeZeroPfnCold; // eax
  __int16 v6; // r8
  ULONG_PTR v7; // r10
  __int16 v8; // r11
  __int16 v9; // dx

  v3 = *(_BYTE *)(a1 + 34);
  if ( (v3 & 7) == 6 )
  {
    *(_BYTE *)(a1 + 34) = v3 & 0xF8 | 5;
    v3 = *(_BYTE *)(a1 + 34);
  }
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  v4 = *(_BYTE *)(a1 + 35) & 0xDF;
  *(_BYTE *)(a1 + 34) = v3 & 0xC7;
  *(_BYTE *)(a1 + 35) = v4;
  *(_WORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 35) = v4 & 0xEF;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  IsFreeZeroPfnCold = MiIsFreeZeroPfnCold(
                        a1,
                        (unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
                        (unsigned int)((*(_DWORD *)(a1 + 16) & 0x3E0) != 0LL) + 1,
                        a1);
  v9 = v6 | 0x400;
  if ( !IsFreeZeroPfnCold )
    v9 = v6;
  MiInsertPageInFreeOrZeroedList(v7, v8 | v9);
}
