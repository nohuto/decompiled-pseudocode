/*
 * XREFs of ??0CProjectedShadowCasterMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0172A10
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0010960 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CProjectedShadowCasterMarshaler *__fastcall DirectComposition::CProjectedShadowCasterMarshaler::CProjectedShadowCasterMarshaler(
        DirectComposition::CProjectedShadowCasterMarshaler *this)
{
  DirectComposition::CProjectedShadowCasterMarshaler *result; // rax

  *(_QWORD *)((char *)this + 20) = 1LL;
  *(_QWORD *)this = &DirectComposition::CProjectedShadowCasterMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 14) = 1091567616;
  *((_BYTE *)this + 72) = 0;
  *((_QWORD *)this + 11) = 1065353216LL;
  return result;
}
