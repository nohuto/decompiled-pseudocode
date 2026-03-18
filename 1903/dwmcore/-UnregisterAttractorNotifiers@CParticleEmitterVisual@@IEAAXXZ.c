/*
 * XREFs of ?UnregisterAttractorNotifiers@CParticleEmitterVisual@@IEAAXXZ @ 0x1801EE85C
 * Callers:
 *     ??1CParticleEmitterVisual@@MEAA@XZ @ 0x1801EB4DC (--1CParticleEmitterVisual@@MEAA@XZ.c)
 *     ?ProcessSetAttractors@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETATTRACTORS@@PEBXI@Z @ 0x1801ED9D0 (-ProcessSetAttractors@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMI.c)
 * Callees:
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x1800B9D7C (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 */

void __fastcall CParticleEmitterVisual::UnregisterAttractorNotifiers(struct CResource ***this)
{
  CResource::UnRegisterNNotifiersInternal((CResource *)this, this[132], (unsigned int)(this[133] - this[132]));
  this[133] = this[132];
}
