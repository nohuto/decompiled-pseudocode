/*
 * XREFs of CmpEnableLazyFlush @ 0x140181F94
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x14015C0A0 (CmpEnableLazyFlushDpcRoutine.c)
 *     CmpCoalescingCallback @ 0x1402800F0 (CmpCoalescingCallback.c)
 *     CmSetLazyFlushState @ 0x14072BD9C (CmSetLazyFlushState.c)
 *     CmThawRegistry @ 0x14082E6E4 (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140007920 (CmpArmLazyWriter.c)
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
