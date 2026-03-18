/*
 * XREFs of ??0CSpatialRemarshalerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0167F3C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0010960 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0019CE4 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 */

_QWORD *__fastcall DirectComposition::CSpatialRemarshalerMarshaler::CSpatialRemarshalerMarshaler(
        DirectComposition::CSpatialRemarshalerMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CVisualMarshaler::CVisualMarshaler(this);
  result = v1;
  *v1 = &DirectComposition::CSpatialRemarshalerMarshaler::`vftable';
  return result;
}
