/*
 * XREFs of ??0CSceneVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4BE0
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C000FC80 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 */

_QWORD *__fastcall DirectComposition::CSceneVisualMarshaler::CSceneVisualMarshaler(
        DirectComposition::CSceneVisualMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CVisualMarshaler::CVisualMarshaler(this);
  result = v1;
  *v1 = &DirectComposition::CSceneVisualMarshaler::`vftable';
  return result;
}
