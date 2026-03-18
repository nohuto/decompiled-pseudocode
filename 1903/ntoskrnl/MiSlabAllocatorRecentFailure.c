/*
 * XREFs of MiSlabAllocatorRecentFailure @ 0x1402DCF14
 * Callers:
 *     MiAllocateSlabEntry @ 0x1402DB498 (MiAllocateSlabEntry.c)
 *     MiGetSlabPage @ 0x1402DC4E4 (MiGetSlabPage.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140082998 (KiQueryUnbiasedInterruptTime.c)
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
