/*
 * XREFs of ?ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA?AW4CPFlags@1@XZ @ 0x140058DB4
 * Callers:
 *     ?IsProperlyInitialized@CSpatialCrossProcessClientEndpoint@@MEAAJXZ @ 0x140058860 (-IsProperlyInitialized@CSpatialCrossProcessClientEndpoint@@MEAAJXZ.c)
 *     ?CheckResourceLimits@CSpatialCrossProcessBaseEndpoint@@IEAAXI@Z @ 0x14005B880 (-CheckResourceLimits@CSpatialCrossProcessBaseEndpoint@@IEAAXI@Z.c)
 *     ?GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14005BEFC (-GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?ValidateAndGetFlags@CSpatialCrossProcessBaseEndpoint@@AEBA_NAEAW4CPFlags@1@@Z @ 0x14005D298 (-ValidateAndGetFlags@CSpatialCrossProcessBaseEndpoint@@AEBA_NAEAW4CPFlags@1@@Z.c)
 *     ?IsValidFlags@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005D710 (-IsValidFlags@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z @ 0x14005DD90 (-SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z.c)
 *     ?GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x14005F8A0 (-GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::ReadCPFlags(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v2; // edx

  v1 = *(_QWORD *)(a1 + 896);
  v2 = 0;
  if ( v1 )
    return (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v1 + 72), 0, 0);
  return v2;
}
