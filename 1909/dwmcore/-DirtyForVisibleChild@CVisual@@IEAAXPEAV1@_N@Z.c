/*
 * XREFs of ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1801C16F4
 * Callers:
 *     ?SetVisible@CVisual@@QEAAX_N@Z @ 0x180020794 (-SetVisible@CVisual@@QEAAX_N@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18006C430 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x180078E34 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1800790C4 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
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
