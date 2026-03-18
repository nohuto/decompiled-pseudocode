/*
 * XREFs of ??0CPathGeometryMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A268C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CPathGeometryMarshaler *__fastcall DirectComposition::CPathGeometryMarshaler::CPathGeometryMarshaler(
        DirectComposition::CPathGeometryMarshaler *this)
{
  DirectComposition::CPathGeometryMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CPathGeometryMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
