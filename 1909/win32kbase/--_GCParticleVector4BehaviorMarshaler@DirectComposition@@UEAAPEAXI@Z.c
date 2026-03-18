/*
 * XREFs of ??_GCParticleVector4BehaviorMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A3080
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ??1CParticleBaseBehaviorMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01AF580 (--1CParticleBaseBehaviorMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CParticleVector4BehaviorMarshaler *__fastcall DirectComposition::CParticleVector4BehaviorMarshaler::`scalar deleting destructor'(
        DirectComposition::CParticleVector4BehaviorMarshaler *this,
        char a2)
{
  DirectComposition::CParticleBaseBehaviorMarshaler::~CParticleBaseBehaviorMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
