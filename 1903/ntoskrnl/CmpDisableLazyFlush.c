/*
 * XREFs of CmpDisableLazyFlush @ 0x14013D7E4
 * Callers:
 *     CmSetLazyFlushState @ 0x14072783C (CmSetLazyFlushState.c)
 *     CmFreezeRegistry @ 0x14082E618 (CmFreezeRegistry.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}
