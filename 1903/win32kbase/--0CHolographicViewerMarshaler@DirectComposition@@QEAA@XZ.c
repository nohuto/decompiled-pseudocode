/*
 * XREFs of ??0CHolographicViewerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4674
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CHolographicViewerMarshaler *__fastcall DirectComposition::CHolographicViewerMarshaler::CHolographicViewerMarshaler(
        DirectComposition::CHolographicViewerMarshaler *this)
{
  DirectComposition::CHolographicViewerMarshaler *result; // rax

  *(_QWORD *)((char *)this + 20) = 1LL;
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = &DirectComposition::CHolographicViewerMarshaler::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)((char *)this + 60) = 0LL;
  *(_QWORD *)((char *)this + 68) = 0LL;
  *(_QWORD *)((char *)this + 76) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *(_QWORD *)((char *)this + 100) = 0LL;
  result = this;
  *((_QWORD *)this + 14) = 0LL;
  return result;
}
