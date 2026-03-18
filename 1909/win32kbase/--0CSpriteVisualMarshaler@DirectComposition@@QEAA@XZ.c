/*
 * XREFs of ??0CSpriteVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0010528
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0010C50 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CSpriteVisualMarshaler::CSpriteVisualMarshaler(
        DirectComposition::CSpriteVisualMarshaler *this)
{
  __int64 v1; // rcx

  DirectComposition::CVisualMarshaler::CVisualMarshaler(this);
  *(_DWORD *)(v1 + 368) = 0;
  *(_QWORD *)v1 = &DirectComposition::CSpriteVisualMarshaler::`vftable';
  return v1;
}
