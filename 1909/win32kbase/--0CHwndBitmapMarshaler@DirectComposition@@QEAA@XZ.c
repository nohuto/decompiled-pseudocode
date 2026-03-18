/*
 * XREFs of ??0CHwndBitmapMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A2430
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
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
