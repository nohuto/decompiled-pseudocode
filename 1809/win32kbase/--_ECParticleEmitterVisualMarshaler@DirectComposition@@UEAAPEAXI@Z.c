/*
 * XREFs of ??_ECParticleEmitterVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0168330
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0019C9C (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

DirectComposition::CParticleEmitterVisualMarshaler *__fastcall DirectComposition::CParticleEmitterVisualMarshaler::`vector deleting destructor'(
        DirectComposition::CParticleEmitterVisualMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CParticleEmitterVisualMarshaler::`vftable';
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
