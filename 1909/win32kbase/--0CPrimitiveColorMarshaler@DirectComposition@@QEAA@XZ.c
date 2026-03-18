/*
 * XREFs of ??0CPrimitiveColorMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A26AC
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CPrimitiveColorMarshaler *__fastcall DirectComposition::CPrimitiveColorMarshaler::CPrimitiveColorMarshaler(
        DirectComposition::CPrimitiveColorMarshaler *this)
{
  DirectComposition::CPrimitiveColorMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CPrimitiveColorMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
