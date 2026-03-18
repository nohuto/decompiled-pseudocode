/*
 * XREFs of ??0CColorGradientStopMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0004318
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CColorGradientStopMarshaler *__fastcall DirectComposition::CColorGradientStopMarshaler::CColorGradientStopMarshaler(
        DirectComposition::CColorGradientStopMarshaler *this)
{
  DirectComposition::CColorGradientStopMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CColorGradientStopMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
