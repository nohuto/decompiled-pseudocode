/*
 * XREFs of ??0CSkewTransformMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4C80
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CSkewTransformMarshaler *__fastcall DirectComposition::CSkewTransformMarshaler::CSkewTransformMarshaler(
        DirectComposition::CSkewTransformMarshaler *this)
{
  DirectComposition::CSkewTransformMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CSkewTransformMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
