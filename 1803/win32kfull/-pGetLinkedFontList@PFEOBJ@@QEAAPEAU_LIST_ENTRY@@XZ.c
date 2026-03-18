/*
 * XREFs of ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C00CCBE8
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C000399C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C003FCE0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C0086598 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?jMapCharset@@YAEEAEAVPFEOBJ@@@Z @ 0x1C00CABFC (-jMapCharset@@YAEEAEAVPFEOBJ@@@Z.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C01280D0 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02775D8 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall PFEOBJ::pGetLinkedFontList(PFEOBJ *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  if ( v1 )
    return (struct _LIST_ENTRY *)(v1 + 16);
  else
    return &NullListHead;
}
