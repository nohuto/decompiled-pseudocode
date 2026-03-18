/*
 * XREFs of ?bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z @ 0x1C000462C
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C000399C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z @ 0x1C0127E64 (-AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RFONTOBJ::bCheckEudcFontCaps(RFONTOBJ *this, struct IFIOBJ *a2)
{
  int v2; // r8d
  __int64 v4; // r9

  if ( (ulFontLinkControl & 0xF0) != 0 )
  {
    v4 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 76LL) )
    {
      if ( (ulFontLinkControl & 0x80u) != 0 )
        return 0LL;
    }
    else if ( (ulFontLinkControl & 0x40) != 0 && (*(_DWORD *)(v4 + 460) & 1) != 0
           || (ulFontLinkControl & 0x20) != 0 && (*(_DWORD *)(v4 + 460) & 4) != 0
           || (ulFontLinkControl & 0x10) != 0 && (*(_DWORD *)(v4 + 460) & 2) != 0 )
    {
      return 0LL;
    }
  }
  v2 = *(_DWORD *)(*(_QWORD *)a2 + 48LL);
  return (v2 & 0x10) != 0 || (v2 & 0x200000) != 0 && !(*(_DWORD *)(*(_QWORD *)this + 380LL) % 0x384u);
}
