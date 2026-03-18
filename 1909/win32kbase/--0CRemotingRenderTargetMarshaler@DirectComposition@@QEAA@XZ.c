/*
 * XREFs of ??0CRemotingRenderTargetMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A276C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CRemotingRenderTargetMarshaler *__fastcall DirectComposition::CRemotingRenderTargetMarshaler::CRemotingRenderTargetMarshaler(
        DirectComposition::CRemotingRenderTargetMarshaler *this)
{
  DirectComposition::CRemotingRenderTargetMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CRemotingRenderTargetMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
