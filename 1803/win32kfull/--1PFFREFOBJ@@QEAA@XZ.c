/*
 * XREFs of ??1PFFREFOBJ@@QEAA@XZ @ 0x1C01394F8
 * Callers:
 *     NtGdiGetFontFileInfo @ 0x1C0106780 (NtGdiGetFontFileInfo.c)
 *     NtGdiGetFontFileData @ 0x1C0289C20 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0081170 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 */

void __fastcall PFFREFOBJ::~PFFREFOBJ(PFFREFOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    if ( !*((_DWORD *)this + 4) )
      PFFOBJ::vDeleteRFONTRef(this);
  }
}
