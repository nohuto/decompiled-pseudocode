/*
 * XREFs of KiConvertToGuiThread @ 0x1401C06A0
 * Callers:
 *     KiSystemCall64 @ 0x1401CF100 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x1406AAFA0 (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
