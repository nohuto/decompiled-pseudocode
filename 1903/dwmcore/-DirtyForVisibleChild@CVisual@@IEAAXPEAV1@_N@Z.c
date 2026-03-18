/*
 * XREFs of ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1801C2E94
 * Callers:
 *     ?SetVisible@CVisual@@QEAAX_N@Z @ 0x180022364 (-SetVisible@CVisual@@QEAAX_N@Z.c)
 * Callees:
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x180089BCC (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x18008B9E4 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18008E9C0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

void __fastcall CVisual::DirtyForVisibleChild(CVisual *this, struct CVisual *a2, char a3)
{
  char v6; // r9
  int v7; // r8d
  int v8; // edx

  CVisual::PropagateFlags((__int64)this, 1u, 0);
  CVisual::PropagateFlags((__int64)a2, 4u, 0);
  v6 = *((_BYTE *)a2 + 272);
  v7 = *((_DWORD *)a2 + 67) + 1;
  if ( (v6 & 2) == 0 )
    v7 = *((_DWORD *)a2 + 67);
  v8 = *((_DWORD *)a2 + 66) + 1;
  if ( (v6 & 1) == 0 )
    v8 = *((_DWORD *)a2 + 66);
  CVisual::PropagateBackdropUpdates(this, v8, v7);
  if ( !a3 )
    CVisual::NotifyMidManipulationUpdate((__int64)this, 2u, (__int64)a2);
}
