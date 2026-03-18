/*
 * XREFs of ??0CEffectBrushMarshaler@DirectComposition@@QEAA@XZ @ 0x1C008747C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CEffectBrushMarshaler *__fastcall DirectComposition::CEffectBrushMarshaler::CEffectBrushMarshaler(
        DirectComposition::CEffectBrushMarshaler *this)
{
  DirectComposition::CEffectBrushMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CEffectBrushMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
