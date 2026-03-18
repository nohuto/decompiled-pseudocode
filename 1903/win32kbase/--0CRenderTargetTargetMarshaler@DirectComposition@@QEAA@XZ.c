/*
 * XREFs of ??0CRenderTargetTargetMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00A895C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CRenderTargetTargetMarshaler *__fastcall DirectComposition::CRenderTargetTargetMarshaler::CRenderTargetTargetMarshaler(
        DirectComposition::CRenderTargetTargetMarshaler *this)
{
  DirectComposition::CRenderTargetTargetMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 4) |= 0x20u;
  *(_QWORD *)this = &DirectComposition::CRenderTargetTargetMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
