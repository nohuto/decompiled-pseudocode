/*
 * XREFs of ??0CTranslateTransformMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00A1A08
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CTranslateTransformMarshaler *__fastcall DirectComposition::CTranslateTransformMarshaler::CTranslateTransformMarshaler(
        DirectComposition::CTranslateTransformMarshaler *this)
{
  DirectComposition::CTranslateTransformMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CTranslateTransformMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
