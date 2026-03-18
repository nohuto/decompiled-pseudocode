/*
 * XREFs of ?bLinkedGlyphs@ESTROBJ@@QEBAHXZ @ 0x1C0196F7C
 * Callers:
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C028BD5C (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ESTROBJ::bLinkedGlyphs(ESTROBJ *this)
{
  return (*((_DWORD *)this + 58) & 0x1400) != 0;
}
