/*
 * XREFs of KiConvertToGuiThread @ 0x1401C8300
 * Callers:
 *     KiSystemCall64 @ 0x1401D5A80 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x1406CAB80 (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
