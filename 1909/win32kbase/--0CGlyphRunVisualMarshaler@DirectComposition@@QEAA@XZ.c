/*
 * XREFs of ??0CGlyphRunVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A22E4
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0010C50 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CGlyphRunVisualMarshaler::CGlyphRunVisualMarshaler(
        DirectComposition::CGlyphRunVisualMarshaler *this)
{
  __int64 v1; // rcx

  DirectComposition::CVisualMarshaler::CVisualMarshaler(this);
  *(_DWORD *)(v1 + 368) = 0;
  *(_QWORD *)v1 = &DirectComposition::CGlyphRunVisualMarshaler::`vftable';
  return v1;
}
