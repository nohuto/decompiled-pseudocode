/*
 * XREFs of ??0CScreenCursorMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00A82D4
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CScreenCursorMarshaler *__fastcall DirectComposition::CScreenCursorMarshaler::CScreenCursorMarshaler(
        DirectComposition::CScreenCursorMarshaler *this)
{
  DirectComposition::CScreenCursorMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CScreenCursorMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
