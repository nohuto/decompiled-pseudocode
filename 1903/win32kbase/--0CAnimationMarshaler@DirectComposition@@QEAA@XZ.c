/*
 * XREFs of ??0CAnimationMarshaler@DirectComposition@@QEAA@XZ @ 0x1C008FCC0
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CAnimationMarshaler *__fastcall DirectComposition::CAnimationMarshaler::CAnimationMarshaler(
        DirectComposition::CAnimationMarshaler *this)
{
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 9) = 1;
  *(_QWORD *)this = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
  *((_QWORD *)this + 2) = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CNotifiedDeletionResource'};
  return this;
}
