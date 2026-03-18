/*
 * XREFs of ??0CViewBoxMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4DEC
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CViewBoxMarshaler *__fastcall DirectComposition::CViewBoxMarshaler::CViewBoxMarshaler(
        DirectComposition::CViewBoxMarshaler *this)
{
  DirectComposition::CViewBoxMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CViewBoxMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
