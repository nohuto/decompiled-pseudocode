/*
 * XREFs of HamDisconnectForFullTrust @ 0x180005B40
 * Callers:
 *     <none>
 * Callees:
 *     HampConnectionDestroy @ 0x180005B58 (HampConnectionDestroy.c)
 */

__int64 HamDisconnectForFullTrust()
{
  HampConnectionDestroy();
  return 0LL;
}
