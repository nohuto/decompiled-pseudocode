/*
 * XREFs of ??0CPrimitiveGroupMarshaler@DirectComposition@@QEAA@XZ @ 0x1C008B72C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CPrimitiveGroupMarshaler *__fastcall DirectComposition::CPrimitiveGroupMarshaler::CPrimitiveGroupMarshaler(
        DirectComposition::CPrimitiveGroupMarshaler *this)
{
  DirectComposition::CPrimitiveGroupMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = &DirectComposition::CPrimitiveGroupMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
