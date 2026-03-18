/*
 * XREFs of ??0CContainerShapeMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A2194
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CContainerShapeMarshaler *__fastcall DirectComposition::CContainerShapeMarshaler::CContainerShapeMarshaler(
        DirectComposition::CContainerShapeMarshaler *this)
{
  DirectComposition::CContainerShapeMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CContainerShapeMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
