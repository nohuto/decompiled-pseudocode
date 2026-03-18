/*
 * XREFs of ??0CRedirectVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0167F18
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0010960 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0019CE4 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 */

_QWORD *__fastcall DirectComposition::CRedirectVisualMarshaler::CRedirectVisualMarshaler(
        DirectComposition::CRedirectVisualMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CVisualMarshaler::CVisualMarshaler(this);
  result = v1;
  *v1 = &DirectComposition::CRedirectVisualMarshaler::`vftable';
  return result;
}
