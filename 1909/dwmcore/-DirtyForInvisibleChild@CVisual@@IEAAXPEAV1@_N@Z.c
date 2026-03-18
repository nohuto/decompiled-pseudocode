/*
 * XREFs of ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x180078F04
 * Callers:
 *     ?SetVisible@CVisual@@QEAAX_N@Z @ 0x180020794 (-SetVisible@CVisual@@QEAAX_N@Z.c)
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x180079060 (-RemoveChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18006C430 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x180078E34 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x18007903C (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1800790C4 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x180079560 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800DD204 (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

void __fastcall CVisual::DirtyForInvisibleChild(CVisual *this, struct CVisual *a2, char a3)
{
  unsigned int v6; // edi
  int v7; // eax
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // edx
  unsigned int v12; // r8d
  char v13; // r9
  int v14; // r8d
  int v15; // r8d
  int v16; // edx
  __int128 v17; // [rsp+20h] [rbp-38h] BYREF

  v6 = 17;
  if ( (*((_BYTE *)this + 88) & 4) == 0 )
  {
    if ( !*((_DWORD *)a2 + 25) || *((float *)a2 + 40) == 0.0 && *((float *)a2 + 39) == 0.0 )
    {
      v17 = *(_OWORD *)((char *)a2 + 140);
      v7 = CVisual::AddAdditionalDirtyRects(this, (const struct MilRectF *)&v17);
      v8 = 17;
      if ( v7 < 0 )
        v8 = 21;
      v6 = v8;
    }
    else
    {
      v6 = 21;
    }
  }
  if ( g_DisplayManager )
  {
    v9 = 0LL;
    if ( *((_DWORD *)g_DisplayManager + 18) )
    {
      v10 = *((_QWORD *)g_DisplayManager + 6);
      while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v10 + 8 * v9)) )
      {
        v9 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v9 >= v12 )
          goto LABEL_16;
      }
      CVisual::ClearAllMoveTransformsInSubtree(a2);
    }
  }
LABEL_16:
  if ( !a3 )
    CVisual::NotifyMidManipulationUpdate(this, 3LL, a2);
  v13 = *((_BYTE *)a2 + 272);
  v14 = *((_DWORD *)a2 + 67) + 1;
  if ( (v13 & 2) == 0 )
    v14 = *((_DWORD *)a2 + 67);
  v15 = -v14;
  v16 = *((_DWORD *)a2 + 66) + 1;
  if ( (v13 & 1) == 0 )
    v16 = *((_DWORD *)a2 + 66);
  CVisual::PropagateBackdropUpdates(this, -v16, v15);
  CVisual::PropagateFlags((__int64)this, v6, 0);
}
