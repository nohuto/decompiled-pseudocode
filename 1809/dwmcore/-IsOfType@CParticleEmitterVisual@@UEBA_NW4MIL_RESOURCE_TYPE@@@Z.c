/*
 * XREFs of ?IsOfType@CParticleEmitterVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801AA8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180055690 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CParticleEmitterVisual::IsOfType(__int64 a1, int a2)
{
  bool v2; // al
  char v3; // cl

  if ( a2 == 105 )
    return 1;
  v2 = CVisual::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
