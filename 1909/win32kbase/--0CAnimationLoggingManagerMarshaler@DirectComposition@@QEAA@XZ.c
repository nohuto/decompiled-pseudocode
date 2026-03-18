/*
 * XREFs of ??0CAnimationLoggingManagerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0093E5C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CAnimationLoggingManagerMarshaler *__fastcall DirectComposition::CAnimationLoggingManagerMarshaler::CAnimationLoggingManagerMarshaler(
        DirectComposition::CAnimationLoggingManagerMarshaler *this)
{
  DirectComposition::CAnimationLoggingManagerMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CAnimationLoggingManagerMarshaler::`vftable';
  *((_DWORD *)this + 5) = 1;
  *((_QWORD *)this + 9) = 12LL;
  *((_BYTE *)this + 48) = 1;
  *((_QWORD *)this + 15) = 12LL;
  result = this;
  *((_BYTE *)this + 96) = 1;
  *((_BYTE *)this + 144) = 1;
  *((_QWORD *)this + 21) = 16LL;
  *((_BYTE *)this + 192) = 1;
  *((_QWORD *)this + 27) = 8LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_BYTE *)this + 240) &= 0xFCu;
  *((_DWORD *)this + 61) = 1065353216;
  return result;
}
