/*
 * XREFs of ??0CProjectedShadowCasterMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00052EC
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CProjectedShadowCasterMarshaler *__fastcall DirectComposition::CProjectedShadowCasterMarshaler::CProjectedShadowCasterMarshaler(
        DirectComposition::CProjectedShadowCasterMarshaler *this)
{
  DirectComposition::CProjectedShadowCasterMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CProjectedShadowCasterMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
