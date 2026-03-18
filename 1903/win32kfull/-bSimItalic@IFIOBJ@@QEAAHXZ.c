/*
 * XREFs of ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C0155A08
 * Callers:
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C004CC08 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C00A7780 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C0104EE8 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C011E46C (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IFIOBJ::bSimItalic(IFIOBJ *this)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(_QWORD *)this;
  result = 0LL;
  v3 = *(int *)(*(_QWORD *)this + 24LL);
  if ( (_DWORD)v3 )
  {
    if ( (*(_BYTE *)(v1 + 52) & 0x20) != 0 )
      return *(unsigned int *)(v3 + v1 + 8);
    else
      return *(unsigned int *)(v3 + v1 + 4);
  }
  return result;
}
