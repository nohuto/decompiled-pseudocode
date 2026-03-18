/*
 * XREFs of ??0CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4E0C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *__fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::CVirtualMonitorCaptureRenderTargetMarshaler(
        DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *this)
{
  DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
