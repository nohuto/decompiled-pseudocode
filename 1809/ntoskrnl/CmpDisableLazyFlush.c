/*
 * XREFs of CmpDisableLazyFlush @ 0x14013BBE0
 * Callers:
 *     CmSetLazyFlushState @ 0x1406E0520 (CmSetLazyFlushState.c)
 *     CmFreezeRegistry @ 0x1407F5824 (CmFreezeRegistry.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}
