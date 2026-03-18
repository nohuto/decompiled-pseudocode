/*
 * XREFs of ?IsOfType@CParticleVector3Behavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18019F5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CParticleBaseBehavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18019F494 (-IsOfType@CParticleBaseBehavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CParticleVector3Behavior::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 120 )
    return 1;
  v2 = CParticleBaseBehavior::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
