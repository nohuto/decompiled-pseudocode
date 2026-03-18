/*
 * XREFs of KiConvertToGuiThread @ 0x1401C7780
 * Callers:
 *     KiSystemCall64 @ 0x1401D4E80 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x1406CBD50 (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
