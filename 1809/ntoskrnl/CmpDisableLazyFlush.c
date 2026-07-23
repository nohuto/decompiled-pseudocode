/*
 * XREFs of CmpDisableLazyFlush @ 0x14013BCE0
 * Callers:
 *     CmSetLazyFlushState @ 0x1406E17C0 (CmSetLazyFlushState.c)
 *     CmFreezeRegistry @ 0x1407F6A24 (CmFreezeRegistry.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}
