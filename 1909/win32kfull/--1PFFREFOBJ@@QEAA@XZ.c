/*
 * XREFs of ??1PFFREFOBJ@@QEAA@XZ @ 0x1C01671F0
 * Callers:
 *     NtGdiGetFontFileInfo @ 0x1C010C020 (NtGdiGetFontFileInfo.c)
 *     NtGdiGetFontFileData @ 0x1C02B3F50 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C009674C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 */

void __fastcall PFFREFOBJ::~PFFREFOBJ(PFFREFOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    if ( !*((_DWORD *)this + 4) )
      PFFOBJ::vDeleteRFONTRef(this);
  }
}
