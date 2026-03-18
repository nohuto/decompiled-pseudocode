/*
 * XREFs of ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x18017ED50
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A100 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18004E574 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x1800A93D8 (-ResetVisibleRegionForAll@CVisual@@QEAAJXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x1800ADF38 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@@Z @ 0x1800AF8B0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x180165D14 (-PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800A8E54 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1801E8800 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CMoveRenderPassInfo::ResetVisibleRegion(CMoveRenderPassInfo *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rdx
  __int64 v4; // r9
  int v5; // edx
  unsigned int v6; // r8d
  __int64 v7; // rcx
  void *v8; // rcx
  HRGN RectRgn; // rax
  signed int LastError; // eax
  int v11; // edx
  __int64 v12; // rcx
  int v13; // r8d

  v1 = 0;
  if ( qword_180308258 )
  {
    v3 = 0LL;
    if ( *((_DWORD *)qword_180308258 + 18) )
    {
      v4 = *((_QWORD *)qword_180308258 + 6);
      while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v4 + 8 * v3)) )
      {
        v3 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v3 >= v6 )
          return v1;
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 272LL))(*((_QWORD *)this + 9)) )
      {
        v7 = *(_QWORD *)(*((_QWORD *)this + 8) + 368LL);
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
            if ( (v1 & 0x80000000) == 0 )
              v1 = CheckGUIHandleQuota(v12, v11, v13);
            MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v1, 0x6Cu);
          }
        }
      }
    }
  }
  return v1;
}
