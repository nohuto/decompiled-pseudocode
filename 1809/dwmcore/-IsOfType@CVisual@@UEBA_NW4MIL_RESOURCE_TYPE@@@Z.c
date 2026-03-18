/*
 * XREFs of ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180055690
 * Callers:
 *     ?IsOfType@CRedirectVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180175880 (-IsOfType@CRedirectVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CShapeVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180175990 (-IsOfType@CShapeVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCursorVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180193DA0 (-IsOfType@CCursorVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CParticleEmitterVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801AA8D0 (-IsOfType@CParticleEmitterVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSpatialVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801B2BE0 (-IsOfType@CSpatialVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::IsOfType(__int64 a1, int a2)
{
  __int64 v2; // rax
  bool result; // al

  result = 0;
  if ( (unsigned int)(a2 - 102) <= 0x37 )
  {
    v2 = 0x80000000002001LL;
    if ( _bittest64(&v2, (unsigned int)(a2 - 102)) )
      return 1;
  }
  return result;
}
