/*
 * XREFs of ??0CHwndBitmapMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A46F0
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CHwndBitmapMarshaler *__fastcall DirectComposition::CHwndBitmapMarshaler::CHwndBitmapMarshaler(
        DirectComposition::CHwndBitmapMarshaler *this)
{
  DirectComposition::CHwndBitmapMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CHwndBitmapMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
