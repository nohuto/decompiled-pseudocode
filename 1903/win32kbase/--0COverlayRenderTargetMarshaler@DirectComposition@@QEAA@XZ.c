/*
 * XREFs of ??0COverlayRenderTargetMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4804
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::COverlayRenderTargetMarshaler *__fastcall DirectComposition::COverlayRenderTargetMarshaler::COverlayRenderTargetMarshaler(
        DirectComposition::COverlayRenderTargetMarshaler *this)
{
  DirectComposition::COverlayRenderTargetMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::COverlayRenderTargetMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
