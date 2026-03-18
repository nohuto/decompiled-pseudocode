/*
 * XREFs of ??0CParticleVector3Behavior@@AEAA@PEAVCComposition@@@Z @ 0x18019BEB8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CParticleVector3Behavior *__fastcall CParticleVector3Behavior::CParticleVector3Behavior(
        CParticleVector3Behavior *this,
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
  *(_QWORD *)this = &CParticleVector3Behavior::`vftable'{for `CParticleBaseBehavior'};
  *((_QWORD *)this + 10) = &CParticleColorBehavior::`vftable'{for `Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>'};
  return this;
}
