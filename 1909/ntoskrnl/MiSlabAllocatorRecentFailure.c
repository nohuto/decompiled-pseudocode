/*
 * XREFs of MiSlabAllocatorRecentFailure @ 0x1402DCC74
 * Callers:
 *     MiAllocateSlabEntry @ 0x1402DB1F8 (MiAllocateSlabEntry.c)
 *     MiGetSlabPage @ 0x1402DC244 (MiGetSlabPage.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140082D98 (KiQueryUnbiasedInterruptTime.c)
 */

__int64 __fastcall MiSlabAllocatorRecentFailure(__int64 a1)
{
  __int64 UnbiasedInterruptTime; // rax
  __int64 v2; // r11

  if ( *(_QWORD *)(a1 + 112) )
  {
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    if ( (unsigned __int64)(UnbiasedInterruptTime - *(_QWORD *)(v2 + 112)) < 0x11E1A300 )
      return 1LL;
    *(_QWORD *)(v2 + 112) = 0LL;
  }
  return 0LL;
}
