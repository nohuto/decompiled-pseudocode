/*
 * XREFs of ?IsOfType@CParticleBaseBehavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18019F494
 * Callers:
 *     ?IsOfType@CParticleColorBehavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18019F4F0 (-IsOfType@CParticleColorBehavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CParticleScalarBehavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18019F550 (-IsOfType@CParticleScalarBehavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CParticleVector2Behavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18019F580 (-IsOfType@CParticleVector2Behavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CParticleVector3Behavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18019F5B0 (-IsOfType@CParticleVector3Behavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CParticleVector4Behavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18019F5E0 (-IsOfType@CParticleVector4Behavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ?IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0480 (-IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CParticleBaseBehavior::IsOfType(__int64 a1, int a2)
{
  bool v2; // al
  char v3; // cl

  if ( a2 == 112 )
    return 1;
  v2 = CPropertyChangeResource::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
