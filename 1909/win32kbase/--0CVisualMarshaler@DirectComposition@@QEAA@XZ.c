/*
 * XREFs of ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0010C50
 * Callers:
 *     ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x1C0001DAC (-CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHand.c)
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C00020A4 (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 *     ??0CSpriteVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0010528 (--0CSpriteVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C008543C (-Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z.c)
 *     ??0CLayerVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0096A20 (--0CLayerVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CCursorVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A21B4 (--0CCursorVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CGlyphRunVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A22E4 (--0CGlyphRunVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CParticleEmitterVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A25C4 (--0CParticleEmitterVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CRedirectVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A2748 (--0CRedirectVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CSceneVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A2920 (--0CSceneVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CShapeVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A2978 (--0CShapeVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CSpatialRemarshalerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A2A00 (--0CSpatialRemarshalerMarshaler@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

DirectComposition::CVisualMarshaler *__fastcall DirectComposition::CVisualMarshaler::CVisualMarshaler(
        DirectComposition::CVisualMarshaler *this)
{
  DirectComposition::CVisualMarshaler *result; // rax

  *(_QWORD *)((char *)this + 20) = 1LL;
  *(_QWORD *)this = &DirectComposition::CVisualMarshaler::`vftable';
  result = this;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_DWORD *)this + 74) = 0;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 80) = 0;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_DWORD *)this + 86) = 0;
  return result;
}
