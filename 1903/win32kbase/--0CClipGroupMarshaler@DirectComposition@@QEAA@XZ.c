/*
 * XREFs of ??0CClipGroupMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A42EC
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CClipGroupMarshaler *__fastcall DirectComposition::CClipGroupMarshaler::CClipGroupMarshaler(
        DirectComposition::CClipGroupMarshaler *this)
{
  DirectComposition::CClipGroupMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CClipGroupMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
