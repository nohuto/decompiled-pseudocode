/*
 * XREFs of ?AreSurfaceUpdatesSupressed@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x1800DB880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGlobalCompositionSurfaceInfo::AreSurfaceUpdatesSupressed(CGlobalCompositionSurfaceInfo *this)
{
  return *((_BYTE *)this + 108);
}
