/*
 * XREFs of ??0CEffectGroupMarshaler@DirectComposition@@QEAA@XZ @ 0x1C009DAE8
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CEffectGroupMarshaler *__fastcall DirectComposition::CEffectGroupMarshaler::CEffectGroupMarshaler(
        DirectComposition::CEffectGroupMarshaler *this)
{
  DirectComposition::CEffectGroupMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CEffectGroupMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
