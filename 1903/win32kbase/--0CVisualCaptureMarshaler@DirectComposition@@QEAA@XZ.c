/*
 * XREFs of ??0CVisualCaptureMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4E2C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CVisualCaptureMarshaler *__fastcall DirectComposition::CVisualCaptureMarshaler::CVisualCaptureMarshaler(
        DirectComposition::CVisualCaptureMarshaler *this)
{
  DirectComposition::CVisualCaptureMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CVisualCaptureMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
