/*
 * XREFs of wil_details_StagingConfigFeature_HasUniqueState @ 0x1402A3C9C
 * Callers:
 *     wil_details_StagingConfig_QueryFeatureState @ 0x1402A3FB8 (wil_details_StagingConfig_QueryFeatureState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall wil_details_StagingConfigFeature_HasUniqueState(_DWORD *a1)
{
  unsigned int v1; // edx
  _BOOL8 result; // rax

  result = 0;
  if ( *a1 )
  {
    v1 = a1[1];
    if ( ((v1 | ((v1 | (v1 >> 2)) >> 2)) & 0x300) != 0 || (v1 & 0x3F000000) != 0 || (v1 & 2) != 0 )
      return 1;
  }
  return result;
}
