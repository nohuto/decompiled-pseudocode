/*
 * XREFs of ??0CColorBrushMarshaler@DirectComposition@@QEAA@XZ @ 0x1C008742C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CColorBrushMarshaler *__fastcall DirectComposition::CColorBrushMarshaler::CColorBrushMarshaler(
        DirectComposition::CColorBrushMarshaler *this)
{
  DirectComposition::CColorBrushMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CColorBrushMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
