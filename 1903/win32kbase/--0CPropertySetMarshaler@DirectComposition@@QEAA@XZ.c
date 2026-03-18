/*
 * XREFs of ??0CPropertySetMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00111D8
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CPropertySetMarshaler *__fastcall DirectComposition::CPropertySetMarshaler::CPropertySetMarshaler(
        DirectComposition::CPropertySetMarshaler *this)
{
  DirectComposition::CPropertySetMarshaler *result; // rax

  *(_QWORD *)((char *)this + 20) = 1LL;
  *(_QWORD *)this = &DirectComposition::CPropertySetMarshaler::`vftable';
  result = this;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  return result;
}
