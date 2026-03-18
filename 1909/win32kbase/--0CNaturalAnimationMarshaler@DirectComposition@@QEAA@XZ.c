/*
 * XREFs of ??0CNaturalAnimationMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A24F8
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CNaturalAnimationMarshaler *__fastcall DirectComposition::CNaturalAnimationMarshaler::CNaturalAnimationMarshaler(
        DirectComposition::CNaturalAnimationMarshaler *this)
{
  *(_QWORD *)((char *)this + 20) = 1LL;
  *(_QWORD *)this = &DirectComposition::CNaturalAnimationMarshaler::`vftable';
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((LARGE_INTEGER *)this + 22) = KeQueryPerformanceCounter(0LL);
  return this;
}
