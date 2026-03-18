/*
 * XREFs of ??0CWindowBackdropBrushMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0002C0C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CWindowBackdropBrushMarshaler *__fastcall DirectComposition::CWindowBackdropBrushMarshaler::CWindowBackdropBrushMarshaler(
        DirectComposition::CWindowBackdropBrushMarshaler *this)
{
  DirectComposition::CWindowBackdropBrushMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CWindowBackdropBrushMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
