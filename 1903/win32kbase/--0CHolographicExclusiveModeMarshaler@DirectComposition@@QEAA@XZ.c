/*
 * XREFs of ??0CHolographicExclusiveModeMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A460C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CHolographicExclusiveModeMarshaler *__fastcall DirectComposition::CHolographicExclusiveModeMarshaler::CHolographicExclusiveModeMarshaler(
        DirectComposition::CHolographicExclusiveModeMarshaler *this)
{
  DirectComposition::CHolographicExclusiveModeMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CHolographicExclusiveModeMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
