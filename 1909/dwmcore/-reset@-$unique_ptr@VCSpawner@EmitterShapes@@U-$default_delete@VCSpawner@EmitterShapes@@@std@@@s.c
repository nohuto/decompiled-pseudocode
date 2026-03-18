/*
 * XREFs of ?reset@?$unique_ptr@VCSpawner@EmitterShapes@@U?$default_delete@VCSpawner@EmitterShapes@@@std@@@std@@QEAAXPEAVCSpawner@EmitterShapes@@@Z @ 0x1801A1D5C
 * Callers:
 *     ?ProcessSetEmitFrom@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETEMITFROM@@@Z @ 0x18019FA24 (-ProcessSetEmitFrom@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITT.c)
 *     ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x1801EB2D0 (-EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ.c)
 *     ?NotifyOnChanged@CParticleEmitterVisual@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801EC1A0 (-NotifyOnChanged@CParticleEmitterVisual@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetEmitterShape@CParticleEmitterVisual@@QEAAJPEAVCResource@@@Z @ 0x1801EC678 (-SetEmitterShape@CParticleEmitterVisual@@QEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<EmitterShapes::CSpawner>::reset(void **a1, void *a2)
{
  void *v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    operator delete(v2);
}
