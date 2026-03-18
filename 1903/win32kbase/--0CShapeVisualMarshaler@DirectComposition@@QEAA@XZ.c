/*
 * XREFs of ??0CShapeVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4C38
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C000FC80 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CShapeVisualMarshaler::CShapeVisualMarshaler(
        DirectComposition::CShapeVisualMarshaler *this)
{
  __int64 v1; // rcx

  DirectComposition::CVisualMarshaler::CVisualMarshaler(this);
  *(_DWORD *)(v1 + 368) = 0;
  *(_QWORD *)v1 = &DirectComposition::CShapeVisualMarshaler::`vftable';
  return v1;
}
