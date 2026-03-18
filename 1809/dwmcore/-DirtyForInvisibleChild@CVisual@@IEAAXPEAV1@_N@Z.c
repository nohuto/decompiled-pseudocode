/*
 * XREFs of ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800A8CC8
 * Callers:
 *     ?SetVisible@CVisual@@QEAAX_N@Z @ 0x18002043C (-SetVisible@CVisual@@QEAAX_N@Z.c)
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800A8C28 (-RemoveChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18007F878 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x1800A8C8C (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800A8E54 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800A9C8C (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800EA3F8 (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1801EBCCC (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 */

void __fastcall CVisual::DirtyForInvisibleChild(CComposition **this, struct CVisual *a2, char a3)
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
  struct D2D_RECT_F v17; // [rsp+20h] [rbp-38h] BYREF

  v6 = 17;
  if ( ((_BYTE)this[11] & 4) == 0 )
  {
    if ( !*((_DWORD *)a2 + 25) || *((float *)a2 + 40) == 0.0 && *((float *)a2 + 39) == 0.0 )
    {
      v17 = *(struct D2D_RECT_F *)((char *)a2 + 140);
      v7 = CVisual::AddAdditionalDirtyRects((CVisual *)this, &v17);
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
  if ( qword_180308258 )
  {
    v9 = 0LL;
    if ( *((_DWORD *)qword_180308258 + 18) )
    {
      v10 = *((_QWORD *)qword_180308258 + 6);
      while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v10 + 8 * v9)) )
      {
        v9 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v9 >= v12 )
          goto LABEL_13;
      }
      CVisual::ClearAllMoveTransformsInSubtree(a2);
    }
  }
LABEL_13:
  if ( !a3 && (*((_BYTE *)a2 + 94) & 2) != 0 )
  {
    *(_QWORD *)&v17.left = 0LL;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v17);
    if ( (int)CComposition::GetManipulationManager(this[2], (struct CManipulationManager **)&v17) >= 0 )
      CManipulationManager::QueueMidManipulationUpdate(*(_QWORD *)&v17.left, 3LL, a2);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v17);
  }
  v13 = *((_BYTE *)a2 + 272);
  v14 = *((_DWORD *)a2 + 67) + 1;
  if ( (v13 & 2) == 0 )
    v14 = *((_DWORD *)a2 + 67);
  v15 = -v14;
  v16 = *((_DWORD *)a2 + 66) + 1;
  if ( (v13 & 1) == 0 )
    v16 = *((_DWORD *)a2 + 66);
  CVisual::PropagateBackdropUpdates((CVisual *)this, -v16, v15);
  CVisual::PropagateFlags(this, v6);
}
