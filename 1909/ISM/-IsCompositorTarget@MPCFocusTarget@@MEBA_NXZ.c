/*
 * XREFs of ?IsCompositorTarget@MPCFocusTarget@@MEBA_NXZ @ 0x18000E1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCFocusTarget::IsCompositorTarget(MPCFocusTarget *this)
{
  return *((_BYTE *)this + 96);
}
