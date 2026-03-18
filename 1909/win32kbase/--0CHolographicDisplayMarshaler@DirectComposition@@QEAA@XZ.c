/*
 * XREFs of ??0CHolographicDisplayMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A232C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CHolographicDisplayMarshaler *__fastcall DirectComposition::CHolographicDisplayMarshaler::CHolographicDisplayMarshaler(
        DirectComposition::CHolographicDisplayMarshaler *this)
{
  DirectComposition::CHolographicDisplayMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CHolographicDisplayMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
