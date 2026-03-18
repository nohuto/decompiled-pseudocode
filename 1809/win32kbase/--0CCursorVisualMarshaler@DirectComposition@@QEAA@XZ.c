/*
 * XREFs of ??0CCursorVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0167E80
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0010960 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0019CE4 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CCursorVisualMarshaler::CCursorVisualMarshaler(
        DirectComposition::CCursorVisualMarshaler *this)
{
  __int64 v1; // rcx

  DirectComposition::CVisualMarshaler::CVisualMarshaler(this);
  *(_DWORD *)(v1 + 376) = 0;
  *(_QWORD *)v1 = &DirectComposition::CCursorVisualMarshaler::`vftable';
  return v1;
}
