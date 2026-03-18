/*
 * XREFs of ??0CExpressionMarshaler@DirectComposition@@QEAA@XZ @ 0x1C008B584
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CExpressionMarshaler *__fastcall DirectComposition::CExpressionMarshaler::CExpressionMarshaler(
        DirectComposition::CExpressionMarshaler *this)
{
  DirectComposition::CExpressionMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CExpressionMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
