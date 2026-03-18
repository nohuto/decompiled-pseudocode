/*
 * XREFs of ??0CComponentTransform2DMarshaler@DirectComposition@@QEAA@XZ @ 0x1C008CC14
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CComponentTransform2DMarshaler *__fastcall DirectComposition::CComponentTransform2DMarshaler::CComponentTransform2DMarshaler(
        DirectComposition::CComponentTransform2DMarshaler *this)
{
  DirectComposition::CComponentTransform2DMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CComponentTransform2DMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
