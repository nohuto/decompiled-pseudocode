/*
 * XREFs of NtGdiSetIcmMode @ 0x1C00BF320
 * Callers:
 *     <none>
 * Callees:
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C00BF0A4 (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 */

__int64 __fastcall NtGdiSetIcmMode(HDC a1, int a2, unsigned int a3)
{
  return GreSetICMMode(a1, a2, a3);
}
