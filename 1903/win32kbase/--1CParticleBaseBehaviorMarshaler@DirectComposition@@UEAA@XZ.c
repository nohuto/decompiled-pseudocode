/*
 * XREFs of ??1CParticleBaseBehaviorMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01B1520
 * Callers:
 *     ??_GCParticleVector4BehaviorMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A5340 (--_GCParticleVector4BehaviorMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CParticleBaseBehaviorMarshaler::~CParticleBaseBehaviorMarshaler(
        DirectComposition::CParticleBaseBehaviorMarshaler *this)
{
  __int64 v1; // rcx

  *(_QWORD *)this = &DirectComposition::CParticleBaseBehaviorMarshaler::`vftable';
  v1 = *((_QWORD *)this + 8);
  if ( v1 )
    Win32FreePool(v1);
}
