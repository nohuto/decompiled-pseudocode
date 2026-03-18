/*
 * XREFs of ??0CGenericInkMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A2284
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CGenericInkMarshaler *__fastcall DirectComposition::CGenericInkMarshaler::CGenericInkMarshaler(
        DirectComposition::CGenericInkMarshaler *this)
{
  DirectComposition::CGenericInkMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CGenericInkMarshaler::`vftable';
  *((_DWORD *)this + 5) = 1;
  result = this;
  *((_BYTE *)this + 48) = 1;
  *((_QWORD *)this + 9) = 1LL;
  *((_BYTE *)this + 88) = 1;
  *((_QWORD *)this + 14) = 1LL;
  return result;
}
