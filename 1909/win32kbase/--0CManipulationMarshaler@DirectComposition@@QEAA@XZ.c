/*
 * XREFs of ??0CManipulationMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A24C4
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CManipulationMarshaler *__fastcall DirectComposition::CManipulationMarshaler::CManipulationMarshaler(
        DirectComposition::CManipulationMarshaler *this)
{
  DirectComposition::CManipulationMarshaler *result; // rax

  *((_BYTE *)this + 92) &= 0xF8u;
  *(_QWORD *)this = &DirectComposition::CManipulationMarshaler::`vftable';
  *((_QWORD *)this + 12) = 0LL;
  result = this;
  *((_DWORD *)this + 26) = 0;
  *(_QWORD *)((char *)this + 20) = 1LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  return result;
}
