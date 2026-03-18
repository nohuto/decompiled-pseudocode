/*
 * XREFs of ??0CRectangleClipMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00942D0
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CRectangleClipMarshaler *__fastcall DirectComposition::CRectangleClipMarshaler::CRectangleClipMarshaler(
        DirectComposition::CRectangleClipMarshaler *this)
{
  DirectComposition::CRectangleClipMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CRectangleClipMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
