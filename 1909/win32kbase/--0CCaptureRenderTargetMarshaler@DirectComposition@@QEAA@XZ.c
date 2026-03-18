/*
 * XREFs of ??0CCaptureRenderTargetMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A200C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CCaptureRenderTargetMarshaler *__fastcall DirectComposition::CCaptureRenderTargetMarshaler::CCaptureRenderTargetMarshaler(
        DirectComposition::CCaptureRenderTargetMarshaler *this)
{
  DirectComposition::CCaptureRenderTargetMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CCaptureRenderTargetMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
