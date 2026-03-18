/*
 * XREFs of CiDecrementTotalThreadCount @ 0x1C0001140
 * Callers:
 *     CiThreadCleanup @ 0x1C000A630 (CiThreadCleanup.c)
 *     CiThreadCreate @ 0x1C000AE70 (CiThreadCreate.c)
 * Callees:
 *     <none>
 */

void __fastcall CiDecrementTotalThreadCount(volatile signed __int32 *a1)
{
  _InterlockedDecrement(a1);
}
