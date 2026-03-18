/*
 * XREFs of ??0CTableTransferEffectMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4D04
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CTableTransferEffectMarshaler *__fastcall DirectComposition::CTableTransferEffectMarshaler::CTableTransferEffectMarshaler(
        DirectComposition::CTableTransferEffectMarshaler *this)
{
  *(_QWORD *)((char *)this + 20) = 1LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *(_QWORD *)this = &DirectComposition::CTableTransferEffectMarshaler::`vftable';
  return this;
}
