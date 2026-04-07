/*
 * XREFs of ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x180004EE4
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x18000491C (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180004A70 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@@@Z @ 0x180004E58 (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180024950 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
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
