/*
 * XREFs of ??0CSharedSectionWrapperMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4C60
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CSharedSectionWrapperMarshaler *__fastcall DirectComposition::CSharedSectionWrapperMarshaler::CSharedSectionWrapperMarshaler(
        DirectComposition::CSharedSectionWrapperMarshaler *this)
{
  DirectComposition::CSharedSectionWrapperMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CSharedSectionWrapperMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
