/*
 * XREFs of ??0CHolographicCompositionMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A45CC
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CHolographicCompositionMarshaler *__fastcall DirectComposition::CHolographicCompositionMarshaler::CHolographicCompositionMarshaler(
        DirectComposition::CHolographicCompositionMarshaler *this)
{
  DirectComposition::CHolographicCompositionMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CHolographicCompositionMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
