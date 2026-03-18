/*
 * XREFs of ??0CTransform3DGroupMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A2AAC
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CTransform3DGroupMarshaler *__fastcall DirectComposition::CTransform3DGroupMarshaler::CTransform3DGroupMarshaler(
        DirectComposition::CTransform3DGroupMarshaler *this)
{
  DirectComposition::CTransform3DGroupMarshaler *result; // rax

  *(_QWORD *)((char *)this + 20) = 1LL;
  *(_QWORD *)this = &DirectComposition::CTransform3DGroupMarshaler::`vftable';
  result = this;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  return result;
}
