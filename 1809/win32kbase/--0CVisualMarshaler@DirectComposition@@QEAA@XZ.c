/*
 * XREFs of ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0019CE4
 * Callers:
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C00015A0 (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 *     ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x1C000191C (-CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHand.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0010960 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C007212C (-Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z.c)
 *     ??0CCursorVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0167E80 (--0CCursorVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CParticleEmitterVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0167EF4 (--0CParticleEmitterVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CRedirectVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0167F18 (--0CRedirectVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CSpatialRemarshalerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0167F3C (--0CSpatialRemarshalerMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CSpatialVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0167F60 (--0CSpatialVisualMarshaler@DirectComposition@@QEAA@XZ.c)
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
