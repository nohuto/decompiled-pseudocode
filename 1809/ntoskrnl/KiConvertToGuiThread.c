/*
 * XREFs of KiConvertToGuiThread @ 0x1401C0680
 * Callers:
 *     KiSystemCall64 @ 0x1401CF000 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x1406AAFC0 (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
