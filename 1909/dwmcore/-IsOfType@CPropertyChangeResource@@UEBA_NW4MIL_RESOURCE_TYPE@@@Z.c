/*
 * XREFs of ?IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0480
 * Callers:
 *     ?IsOfType@CGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0318 (-IsOfType@CGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0428 (-IsOfType@-$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 *     ?IsOfType@CPropertySet@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0450 (-IsOfType@CPropertySet@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C38B0 (-IsOfType@-$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@UEBA_NW4MIL_RESOURCE_TYPE@.c)
 *     ?IsOfType@CCompositionDistantLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C6E60 (-IsOfType@CCompositionDistantLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionAmbientLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C6E90 (-IsOfType@CCompositionAmbientLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C6EC0 (-IsOfType@CCompositionLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CParticleAttractor@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18019F470 (-IsOfType@CParticleAttractor@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CParticleBaseBehavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18019F494 (-IsOfType@CParticleBaseBehavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CParticleBehaviors@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18019F4C0 (-IsOfType@CParticleBehaviors@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CParticleGenerator@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18019F520 (-IsOfType@CParticleGenerator@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionCubeMap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801CEBD0 (-IsOfType@CCompositionCubeMap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionMipmapSurface@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801CFFD0 (-IsOfType@CCompositionMipmapSurface@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionPointLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801D0CC0 (-IsOfType@CCompositionPointLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPropertyChangeResource::IsOfType(__int64 a1, int a2)
{
  return a2 == 109 || a2 == 131;
}
