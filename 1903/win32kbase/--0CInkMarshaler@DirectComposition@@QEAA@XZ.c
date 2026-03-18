/*
 * XREFs of ??0CInkMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A71FC
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CInkMarshaler *__fastcall DirectComposition::CInkMarshaler::CInkMarshaler(
        DirectComposition::CInkMarshaler *this)
{
  DirectComposition::CInkMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CInkMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  *((_BYTE *)this + 104) = 1;
  *((_QWORD *)this + 16) = 36LL;
  return result;
}
