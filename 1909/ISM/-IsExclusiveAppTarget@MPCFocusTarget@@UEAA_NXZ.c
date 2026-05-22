/*
 * XREFs of ?IsExclusiveAppTarget@MPCFocusTarget@@UEAA_NXZ @ 0x18000E1B0
 * Callers:
 *     ?IsExclusiveAppTarget@MPCFocusTarget@@WEI@EAA_NXZ @ 0x180037BD0 (-IsExclusiveAppTarget@MPCFocusTarget@@WEI@EAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall MPCFocusTarget::IsExclusiveAppTarget(MPCFocusTarget *this)
{
  return *((_BYTE *)this + 48);
}
