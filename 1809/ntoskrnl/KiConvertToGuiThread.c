/*
 * XREFs of KiConvertToGuiThread @ 0x1401C0800
 * Callers:
 *     KiSystemCall64 @ 0x1401CF200 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x1406AC240 (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
