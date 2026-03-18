/*
 * XREFs of ??0CNineGridBrushMarshaler@DirectComposition@@QEAA@XZ @ 0x1C008B7BC
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CNineGridBrushMarshaler *__fastcall DirectComposition::CNineGridBrushMarshaler::CNineGridBrushMarshaler(
        DirectComposition::CNineGridBrushMarshaler *this)
{
  DirectComposition::CNineGridBrushMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CNineGridBrushMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
