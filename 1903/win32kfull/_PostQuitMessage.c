/*
 * XREFs of _PostQuitMessage @ 0x1C00DA2D0
 * Callers:
 *     <none>
 * Callees:
 *     IPostQuitMessage @ 0x1C00DA2F0 (IPostQuitMessage.c)
 */

__int64 __fastcall PostQuitMessage(unsigned int a1)
{
  return IPostQuitMessage(gptiCurrent, a1);
}
