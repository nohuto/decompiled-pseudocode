/*
 * XREFs of CmpEnableLazyFlush @ 0x140177F4C
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x140177F10 (CmpEnableLazyFlushDpcRoutine.c)
 *     CmpCoalescingCallback @ 0x14026C810 (CmpCoalescingCallback.c)
 *     CmSetLazyFlushState @ 0x1406E0540 (CmSetLazyFlushState.c)
 *     CmThawRegistry @ 0x1407F5A94 (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x14008CD54 (CmpArmLazyWriter.c)
 */

void __fastcall CmpEnableLazyFlush(int a1)
{
  unsigned int i; // ebx

  _m_prefetchw(&CmpHoldLazyFlush);
  if ( _InterlockedAnd(&CmpHoldLazyFlush, ~a1) == a1 )
  {
    for ( i = 0; i < 3; ++i )
      CmpArmLazyWriter(i, 0LL, 1);
  }
}
