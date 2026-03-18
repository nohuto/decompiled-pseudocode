/*
 * XREFs of ??1PFFREFOBJ@@QEAA@XZ @ 0x1C01655C4
 * Callers:
 *     NtGdiGetFontFileInfo @ 0x1C0131520 (NtGdiGetFontFileInfo.c)
 *     NtGdiGetFontFileData @ 0x1C02B4400 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C00752FC (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 */

void __fastcall PFFREFOBJ::~PFFREFOBJ(PFFREFOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    if ( !*((_DWORD *)this + 4) )
      PFFOBJ::vDeleteRFONTRef(this);
  }
}
