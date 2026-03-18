/*
 * XREFs of ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x180180990
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x18004F6E0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x18005164C (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18007D678 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008BF40 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18008E9C0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x180170240 (-PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 *     ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x1801C45DC (-ResetVisibleRegionForAll@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x180089DA0 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMoveRenderPassInfo::ResetVisibleRegion(CMoveRenderPassInfo *this)
{
  int v1; // ebx
  __int64 v3; // rdx
  __int64 v4; // r9
  int v5; // edx
  unsigned int v6; // r8d
  __int64 v7; // rcx
  void *v8; // rcx
  HRGN RectRgn; // rax
  signed int LastError; // eax
  __int64 v11; // rcx

  v1 = 0;
  if ( g_DisplayManager )
  {
    v3 = 0LL;
    if ( *((_DWORD *)g_DisplayManager + 18) )
    {
      v4 = *((_QWORD *)g_DisplayManager + 6);
      while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v4 + 8 * v3)) )
      {
        v3 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v3 >= v6 )
          return (unsigned int)v1;
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 312LL))(*((_QWORD *)this + 9)) )
      {
        v7 = *(_QWORD *)(*((_QWORD *)this + 8) + 384LL);
        if ( *((_QWORD *)this + 3) != v7 )
        {
          *((_QWORD *)this + 3) = v7;
          v8 = (void *)*((_QWORD *)this + 2);
          if ( v8 )
            DeleteObject(v8);
          *((_QWORD *)this + 2) = *((_QWORD *)this + 1);
          SetLastError(0);
          RectRgn = CreateRectRgn(0, 0, 0, 0);
          *((_QWORD *)this + 1) = RectRgn;
          if ( !RectRgn )
          {
            LastError = GetLastError();
            v1 = LastError;
            if ( LastError > 0 )
              v1 = (unsigned __int16)LastError | 0x80070000;
            if ( v1 >= 0 )
              v1 = -2003304445;
            MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v1, 0x6Cu, 0LL);
          }
        }
      }
    }
  }
  return (unsigned int)v1;
}
