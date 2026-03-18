/*
 * XREFs of CmpDisableLazyFlush @ 0x14013BBC0
 * Callers:
 *     CmSetLazyFlushState @ 0x1406E0540 (CmSetLazyFlushState.c)
 *     CmFreezeRegistry @ 0x1407F5844 (CmFreezeRegistry.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}
