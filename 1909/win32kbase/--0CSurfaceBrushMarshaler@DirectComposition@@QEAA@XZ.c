/*
 * XREFs of ??0CSurfaceBrushMarshaler@DirectComposition@@QEAA@XZ @ 0x1C008751C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CSurfaceBrushMarshaler *__fastcall DirectComposition::CSurfaceBrushMarshaler::CSurfaceBrushMarshaler(
        DirectComposition::CSurfaceBrushMarshaler *this)
{
  DirectComposition::CSurfaceBrushMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CSurfaceBrushMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
