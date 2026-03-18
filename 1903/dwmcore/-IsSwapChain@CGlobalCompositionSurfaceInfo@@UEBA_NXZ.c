/*
 * XREFs of ?IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x1800BD6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGlobalCompositionSurfaceInfo::IsSwapChain(CGlobalCompositionSurfaceInfo *this)
{
  bool result; // al

  result = 1;
  if ( *((_DWORD *)this + 36) <= 1u )
    return *((_DWORD *)this + 26) == 3;
  return result;
}
