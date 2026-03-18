/*
 * XREFs of ??0CParticleVector2Behavior@@AEAA@PEAVCComposition@@@Z @ 0x18019D734
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CParticleVector2Behavior *__fastcall CParticleVector2Behavior::CParticleVector2Behavior(
        CParticleVector2Behavior *this,
        struct CComposition *a2)
{
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *(_QWORD *)this = &CParticleVector2Behavior::`vftable'{for `CParticleBaseBehavior'};
  *((_QWORD *)this + 10) = &CParticleVector2Behavior::`vftable'{for `Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float2>'};
  return this;
}
