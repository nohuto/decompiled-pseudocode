/*
 * XREFs of ??0CTranslateTransform3DMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A2AD8
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CTranslateTransform3DMarshaler *__fastcall DirectComposition::CTranslateTransform3DMarshaler::CTranslateTransform3DMarshaler(
        DirectComposition::CTranslateTransform3DMarshaler *this)
{
  DirectComposition::CTranslateTransform3DMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CTranslateTransform3DMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
