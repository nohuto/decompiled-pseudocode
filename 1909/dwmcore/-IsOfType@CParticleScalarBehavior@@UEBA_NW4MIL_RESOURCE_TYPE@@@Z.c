/*
 * XREFs of ?IsOfType@CParticleScalarBehavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18019F550
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CParticleBaseBehavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18019F494 (-IsOfType@CParticleBaseBehavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CParticleScalarBehavior::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 118 )
    return 1;
  v2 = CParticleBaseBehavior::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
