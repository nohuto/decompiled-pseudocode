/*
 * XREFs of ??0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z @ 0x1801AA818
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800CFCE4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18004D428 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800A59B0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ??2CParticleEmitter@@SAPEAX_K@Z @ 0x180173D48 (--2CParticleEmitter@@SAPEAX_K@Z.c)
 *     ??0CParticleEmitter@@QEAA@PEAVCComposition@@@Z @ 0x1801C4964 (--0CParticleEmitter@@QEAA@PEAVCComposition@@@Z.c)
 */

CParticleEmitterVisual *__fastcall CParticleEmitterVisual::CParticleEmitterVisual(
        CParticleEmitterVisual *this,
        struct CComposition *a2)
{
  CParticleEmitter *v4; // rcx
  struct CContent *v5; // rax

  CVisual::CVisual(this, a2);
  *(_QWORD *)this = &CParticleEmitterVisual::`vftable';
  v4 = (CParticleEmitter *)CParticleEmitter::operator new();
  v5 = 0LL;
  if ( v4 )
    v5 = CParticleEmitter::CParticleEmitter(v4, a2);
  CVisual::SetContent((struct CResource **)this, v5);
  return this;
}
