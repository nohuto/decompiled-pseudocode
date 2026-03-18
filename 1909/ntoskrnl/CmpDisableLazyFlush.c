/*
 * XREFs of CmpDisableLazyFlush @ 0x14013DD24
 * Callers:
 *     CmSetLazyFlushState @ 0x14072BD9C (CmSetLazyFlushState.c)
 *     CmFreezeRegistry @ 0x14082E494 (CmFreezeRegistry.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}
