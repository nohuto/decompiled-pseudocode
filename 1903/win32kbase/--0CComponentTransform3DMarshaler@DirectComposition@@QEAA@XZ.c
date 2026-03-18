/*
 * XREFs of ??0CComponentTransform3DMarshaler@DirectComposition@@QEAA@XZ @ 0x1C008FF48
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CComponentTransform3DMarshaler *__fastcall DirectComposition::CComponentTransform3DMarshaler::CComponentTransform3DMarshaler(
        DirectComposition::CComponentTransform3DMarshaler *this)
{
  DirectComposition::CComponentTransform3DMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CComponentTransform3DMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
