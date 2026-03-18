/*
 * XREFs of ??0CSaturationEffectMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A27CC
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CSaturationEffectMarshaler *__fastcall DirectComposition::CSaturationEffectMarshaler::CSaturationEffectMarshaler(
        DirectComposition::CSaturationEffectMarshaler *this)
{
  *(_QWORD *)((char *)this + 20) = 1LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *(_QWORD *)this = &DirectComposition::CSaturationEffectMarshaler::`vftable';
  return this;
}
