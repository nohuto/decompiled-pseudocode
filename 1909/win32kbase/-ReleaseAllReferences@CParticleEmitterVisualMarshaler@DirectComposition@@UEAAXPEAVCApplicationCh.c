/*
 * XREFs of ?ReleaseAllReferences@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01B4630
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0014F10 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C007BD70 (-ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ClearAttractors@CParticleEmitterVisualMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01B4100 (-ClearAttractors@CParticleEmitterVisualMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel.c)
 */

void __fastcall DirectComposition::CParticleEmitterVisualMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  struct DirectComposition::CResourceMarshaler *v5; // rdx
  struct DirectComposition::CResourceMarshaler *v6; // rdx
  struct DirectComposition::CResourceMarshaler *v7; // rdx
  struct DirectComposition::CResourceMarshaler *v8; // rdx

  DirectComposition::CParticleEmitterVisualMarshaler::ClearAttractors(
    (DirectComposition::CParticleEmitterVisualMarshaler *)this,
    a2);
  DirectComposition::CApplicationChannel::ReleaseResource(a2, this[44]);
  v4 = this[45];
  this[44] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
  v5 = this[46];
  this[45] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
  v6 = this[47];
  this[46] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v6);
  v7 = this[48];
  this[47] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v7);
  v8 = this[49];
  this[48] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v8);
  this[49] = 0LL;
  DirectComposition::CVisualMarshaler::ReleaseAllReferences((DirectComposition::CVisualMarshaler *)this, a2);
}
