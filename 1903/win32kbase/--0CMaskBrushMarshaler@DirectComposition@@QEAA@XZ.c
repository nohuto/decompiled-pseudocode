/*
 * XREFs of ??0CMaskBrushMarshaler@DirectComposition@@QEAA@XZ @ 0x1C008B8AC
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CMaskBrushMarshaler *__fastcall DirectComposition::CMaskBrushMarshaler::CMaskBrushMarshaler(
        DirectComposition::CMaskBrushMarshaler *this)
{
  DirectComposition::CMaskBrushMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CMaskBrushMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
