/*
 * XREFs of ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x180028BC0
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x180001C34 (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@@@Z @ 0x180002C20 (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180010728 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180028188 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAccent::s_IsPolicyActive(const struct ACCENT_POLICY *a1)
{
  bool result; // al

  result = 0;
  if ( *(_DWORD *)a1 )
    return *(_DWORD *)a1 != 6;
  return result;
}
