/*
 * XREFs of ??0CLayerVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00981F0
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C000FC80 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CLayerVisualMarshaler::CLayerVisualMarshaler(
        DirectComposition::CLayerVisualMarshaler *this)
{
  __int64 v1; // rcx

  DirectComposition::CVisualMarshaler::CVisualMarshaler(this);
  *(_DWORD *)(v1 + 364) = 0;
  *(_QWORD *)v1 = &DirectComposition::CLayerVisualMarshaler::`vftable';
  return v1;
}
