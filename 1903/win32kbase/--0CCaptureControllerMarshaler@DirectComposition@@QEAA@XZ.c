/*
 * XREFs of ??0CCaptureControllerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A42A4
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CCaptureControllerMarshaler *__fastcall DirectComposition::CCaptureControllerMarshaler::CCaptureControllerMarshaler(
        DirectComposition::CCaptureControllerMarshaler *this)
{
  DirectComposition::CCaptureControllerMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CCaptureControllerMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  *((_WORD *)this + 28) = 257;
  return result;
}
