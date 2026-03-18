/*
 * XREFs of ??0CBackdropBrushMarshaler@DirectComposition@@QEAA@XZ @ 0x1C009E67C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CBackdropBrushMarshaler *__fastcall DirectComposition::CBackdropBrushMarshaler::CBackdropBrushMarshaler(
        DirectComposition::CBackdropBrushMarshaler *this)
{
  DirectComposition::CBackdropBrushMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CBackdropBrushMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
