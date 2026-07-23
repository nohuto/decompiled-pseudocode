/*
 * XREFs of MiSlabAllocatorRecentFailure @ 0x1402C2EEC
 * Callers:
 *     MiAllocateSlabEntry @ 0x1402C1E8C (MiAllocateSlabEntry.c)
 *     MiGetSlabPage @ 0x1402C2BCC (MiGetSlabPage.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 */

__int64 __fastcall MiSlabAllocatorRecentFailure(__int64 a1)
{
  __int64 UnbiasedInterruptTime; // rax
  __int64 v2; // r11

  if ( *(_QWORD *)(a1 + 64) )
  {
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    if ( (unsigned __int64)(UnbiasedInterruptTime - *(_QWORD *)(v2 + 64)) < 0x11E1A300 )
      return 1LL;
    *(_QWORD *)(v2 + 64) = 0LL;
  }
  return 0LL;
}
