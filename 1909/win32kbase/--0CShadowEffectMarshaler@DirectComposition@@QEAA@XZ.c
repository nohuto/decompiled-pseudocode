/*
 * XREFs of ??0CShadowEffectMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A2944
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CShadowEffectMarshaler *__fastcall DirectComposition::CShadowEffectMarshaler::CShadowEffectMarshaler(
        DirectComposition::CShadowEffectMarshaler *this)
{
  *(_QWORD *)((char *)this + 20) = 1LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *(_QWORD *)this = &DirectComposition::CShadowEffectMarshaler::`vftable';
  return this;
}
