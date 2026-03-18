/*
 * XREFs of _PostQuitMessage @ 0x1C00EAD60
 * Callers:
 *     <none>
 * Callees:
 *     IPostQuitMessage @ 0x1C00EAD80 (IPostQuitMessage.c)
 */

__int64 __fastcall PostQuitMessage(unsigned int a1)
{
  return IPostQuitMessage(gptiCurrent, a1);
}
