/*
 * XREFs of ??0CManipulationTransformMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0094E20
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CManipulationTransformMarshaler *__fastcall DirectComposition::CManipulationTransformMarshaler::CManipulationTransformMarshaler(
        DirectComposition::CManipulationTransformMarshaler *this)
{
  DirectComposition::CManipulationTransformMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CManipulationTransformMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
