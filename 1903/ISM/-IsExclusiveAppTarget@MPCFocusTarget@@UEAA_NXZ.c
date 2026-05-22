/*
 * XREFs of ?IsExclusiveAppTarget@MPCFocusTarget@@UEAA_NXZ @ 0x18000E140
 * Callers:
 *     ?IsExclusiveAppTarget@MPCFocusTarget@@WEI@EAA_NXZ @ 0x1800380C0 (-IsExclusiveAppTarget@MPCFocusTarget@@WEI@EAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall MPCFocusTarget::IsExclusiveAppTarget(MPCFocusTarget *this)
{
  return *((_BYTE *)this + 48);
}
