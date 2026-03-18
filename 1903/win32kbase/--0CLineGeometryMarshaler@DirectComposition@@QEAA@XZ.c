/*
 * XREFs of ??0CLineGeometryMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4730
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CLineGeometryMarshaler *__fastcall DirectComposition::CLineGeometryMarshaler::CLineGeometryMarshaler(
        DirectComposition::CLineGeometryMarshaler *this)
{
  DirectComposition::CLineGeometryMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CLineGeometryMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
