/*
 * XREFs of ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C000FC80
 * Callers:
 *     ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x1C0001DAC (-CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHand.c)
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C00020A4 (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00896FC (-Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z.c)
 *     ??0CSpriteVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C008D520 (--0CSpriteVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CLayerVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00981F0 (--0CLayerVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CCursorVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4474 (--0CCursorVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CGlyphRunVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A45A4 (--0CGlyphRunVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CParticleEmitterVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4884 (--0CParticleEmitterVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CRedirectVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4A08 (--0CRedirectVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CSceneVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4BE0 (--0CSceneVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CShapeVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4C38 (--0CShapeVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CSpatialRemarshalerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4CC0 (--0CSpatialRemarshalerMarshaler@DirectComposition@@QEAA@XZ.c)
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
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_DWORD *)this + 72) = 0;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 78) = 0;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 84) = 0;
  return result;
}
