/*
 * XREFs of ??0CRenderTargetGroupMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00A34D8
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CRenderTargetGroupMarshaler *__fastcall DirectComposition::CRenderTargetGroupMarshaler::CRenderTargetGroupMarshaler(
        DirectComposition::CRenderTargetGroupMarshaler *this)
{
  DirectComposition::CRenderTargetGroupMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CRenderTargetGroupMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
