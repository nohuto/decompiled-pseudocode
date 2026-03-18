/*
 * XREFs of ??0CProjectedShadowReceiverMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0005760
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CProjectedShadowReceiverMarshaler *__fastcall DirectComposition::CProjectedShadowReceiverMarshaler::CProjectedShadowReceiverMarshaler(
        DirectComposition::CProjectedShadowReceiverMarshaler *this)
{
  DirectComposition::CProjectedShadowReceiverMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CProjectedShadowReceiverMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  *((_DWORD *)this + 16) = 1;
  return result;
}
