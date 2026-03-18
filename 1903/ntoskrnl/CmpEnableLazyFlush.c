/*
 * XREFs of CmpEnableLazyFlush @ 0x1401818A4
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x14015BA00 (CmpEnableLazyFlushDpcRoutine.c)
 *     CmpCoalescingCallback @ 0x140280390 (CmpCoalescingCallback.c)
 *     CmSetLazyFlushState @ 0x14072783C (CmSetLazyFlushState.c)
 *     CmThawRegistry @ 0x14082E868 (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140007890 (CmpArmLazyWriter.c)
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
