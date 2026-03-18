/*
 * XREFs of ?IsOfType@CParticleBaseBehavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A0D54
 * Callers:
 *     ?IsOfType@CParticleColorBehavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A0DB0 (-IsOfType@CParticleColorBehavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CParticleScalarBehavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A0E10 (-IsOfType@CParticleScalarBehavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CParticleVector2Behavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A0E40 (-IsOfType@CParticleVector2Behavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CParticleVector3Behavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A0E70 (-IsOfType@CParticleVector3Behavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CParticleVector4Behavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A0EA0 (-IsOfType@CParticleVector4Behavior@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ?IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800BFE80 (-IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
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
