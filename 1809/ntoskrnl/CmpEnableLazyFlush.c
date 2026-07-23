/*
 * XREFs of CmpEnableLazyFlush @ 0x14017806C
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x140178030 (CmpEnableLazyFlushDpcRoutine.c)
 *     CmpCoalescingCallback @ 0x14026CB00 (CmpCoalescingCallback.c)
 *     CmSetLazyFlushState @ 0x1406E17C0 (CmSetLazyFlushState.c)
 *     CmThawRegistry @ 0x1407F6C74 (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x14008CC94 (CmpArmLazyWriter.c)
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
