/*
 * XREFs of ??0CTransformGroupMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00042EC
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CTransformGroupMarshaler *__fastcall DirectComposition::CTransformGroupMarshaler::CTransformGroupMarshaler(
        DirectComposition::CTransformGroupMarshaler *this)
{
  DirectComposition::CTransformGroupMarshaler *result; // rax

  *(_QWORD *)((char *)this + 20) = 1LL;
  *(_QWORD *)this = &DirectComposition::CTransformGroupMarshaler::`vftable';
  result = this;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  return result;
}
