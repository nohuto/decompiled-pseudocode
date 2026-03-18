/*
 * XREFs of ??0CTextBrushMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A2A78
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CTextBrushMarshaler *__fastcall DirectComposition::CTextBrushMarshaler::CTextBrushMarshaler(
        DirectComposition::CTextBrushMarshaler *this)
{
  DirectComposition::CTextBrushMarshaler *result; // rax

  *(_QWORD *)((char *)this + 20) = 1LL;
  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)this = &DirectComposition::CTextBrushMarshaler::`vftable';
  result = this;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  return result;
}
