/*
 * XREFs of NtGdiSetIcmMode @ 0x1C0099FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C0099FE4 (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 */

__int64 __fastcall NtGdiSetIcmMode(HDC a1, unsigned int a2, unsigned int a3)
{
  return GreSetICMMode(a1, a2, a3);
}
