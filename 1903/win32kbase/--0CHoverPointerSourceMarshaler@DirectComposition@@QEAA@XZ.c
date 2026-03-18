/*
 * XREFs of ??0CHoverPointerSourceMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00A8A6C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CHoverPointerSourceMarshaler *__fastcall DirectComposition::CHoverPointerSourceMarshaler::CHoverPointerSourceMarshaler(
        DirectComposition::CHoverPointerSourceMarshaler *this)
{
  DirectComposition::CHoverPointerSourceMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CHoverPointerSourceMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
