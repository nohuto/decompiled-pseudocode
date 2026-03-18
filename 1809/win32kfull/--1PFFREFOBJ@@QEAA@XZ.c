/*
 * XREFs of ??1PFFREFOBJ@@QEAA@XZ @ 0x1C0161750
 * Callers:
 *     NtGdiGetFontFileInfo @ 0x1C0125FD0 (NtGdiGetFontFileInfo.c)
 *     NtGdiGetFontFileData @ 0x1C029D8B0 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0086DC0 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 */

void __fastcall PFFREFOBJ::~PFFREFOBJ(PFFREFOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    if ( !*((_DWORD *)this + 4) )
      PFFOBJ::vDeleteRFONTRef(this);
  }
}
