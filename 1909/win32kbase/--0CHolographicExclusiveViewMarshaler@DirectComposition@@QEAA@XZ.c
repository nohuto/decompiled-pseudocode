/*
 * XREFs of ??0CHolographicExclusiveViewMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A236C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CHolographicExclusiveViewMarshaler *__fastcall DirectComposition::CHolographicExclusiveViewMarshaler::CHolographicExclusiveViewMarshaler(
        DirectComposition::CHolographicExclusiveViewMarshaler *this)
{
  DirectComposition::CHolographicExclusiveViewMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 4) |= 0x20u;
  *(_QWORD *)this = &DirectComposition::CHolographicExclusiveViewMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
