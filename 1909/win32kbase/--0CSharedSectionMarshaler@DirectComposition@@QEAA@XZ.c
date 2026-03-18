/*
 * XREFs of ??0CSharedSectionMarshaler@DirectComposition@@QEAA@XZ @ 0x1C009AAD8
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CSharedSectionMarshaler *__fastcall DirectComposition::CSharedSectionMarshaler::CSharedSectionMarshaler(
        DirectComposition::CSharedSectionMarshaler *this)
{
  DirectComposition::CSharedSectionMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CSharedSectionMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
