/*
 * XREFs of CiDecrementTotalThreadCount @ 0x1C000270C
 * Callers:
 *     CiThreadCreate @ 0x1C000A7F0 (CiThreadCreate.c)
 *     CiThreadCleanup @ 0x1C000B4D0 (CiThreadCleanup.c)
 * Callees:
 *     <none>
 */

void __fastcall CiDecrementTotalThreadCount(volatile signed __int32 *a1)
{
  _InterlockedDecrement(a1);
}
