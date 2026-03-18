/*
 * XREFs of ??0CConditionalExpressionMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4434
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CConditionalExpressionMarshaler *__fastcall DirectComposition::CConditionalExpressionMarshaler::CConditionalExpressionMarshaler(
        DirectComposition::CConditionalExpressionMarshaler *this)
{
  DirectComposition::CConditionalExpressionMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CConditionalExpressionMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
