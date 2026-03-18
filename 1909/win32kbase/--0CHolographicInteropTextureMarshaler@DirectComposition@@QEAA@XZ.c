/*
 * XREFs of ??0CHolographicInteropTextureMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A2390
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CHolographicInteropTextureMarshaler *__fastcall DirectComposition::CHolographicInteropTextureMarshaler::CHolographicInteropTextureMarshaler(
        DirectComposition::CHolographicInteropTextureMarshaler *this)
{
  DirectComposition::CHolographicInteropTextureMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 4) |= 0x20u;
  *(_QWORD *)this = &DirectComposition::CHolographicInteropTextureMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
