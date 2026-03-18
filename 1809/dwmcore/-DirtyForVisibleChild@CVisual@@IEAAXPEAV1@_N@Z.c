/*
 * XREFs of ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x18006DB84
 * Callers:
 *     ?SetVisible@CVisual@@QEAAX_N@Z @ 0x18002043C (-SetVisible@CVisual@@QEAAX_N@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18006DAE4 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 * Callees:
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x18009FC60 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x1800A8C8C (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

void __fastcall CVisual::DirtyForVisibleChild(CVisual *this, struct CVisual *a2, char a3)
{
  char v6; // r9
  int v7; // r8d
  int v8; // edx

  CVisual::PropagateFlags(this, 1LL);
  CVisual::PropagateFlags(a2, 4LL);
  v6 = *((_BYTE *)a2 + 272);
  v7 = *((_DWORD *)a2 + 67) + 1;
  if ( (v6 & 2) == 0 )
    v7 = *((_DWORD *)a2 + 67);
  v8 = *((_DWORD *)a2 + 66) + 1;
  if ( (v6 & 1) == 0 )
    v8 = *((_DWORD *)a2 + 66);
  CVisual::PropagateBackdropUpdates(this, v8, v7);
  if ( !a3 )
    CVisual::NotifyMidManipulationUpdate(this, 2LL, a2);
}
