/*
 * XREFs of ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180033B00
 * Callers:
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x180019990 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800212F4 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x1800253F0 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x180025F08 (-RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x180029CEC (-Initialize@CImmersiveState@@AEAAJ_K@Z.c)
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18002B054 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180033790 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180036AD8 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Reset@CAnimationResource@@UEAAJXZ @ 0x18003D000 (-Reset@CAnimationResource@@UEAAJXZ.c)
 *     ?CleanupThemeStatics@CTopLevelWindow@@SAXXZ @ 0x18004B918 (-CleanupThemeStatics@CTopLevelWindow@@SAXXZ.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x18007B35C (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x18007B41C (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x18007B4DC (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x18007C794 (-_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ.c)
 *     ?_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV?$DynArray@PEAVCProjectionBorderVisual@@$0A@@@@Z @ 0x180089D2C (-_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV-$DynArray@PEAVCProjectionBorderVisual@@$0A@@.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18008BCF4 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180092CD0 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x18009B6D8 (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 *     ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UMilPoint3F@@$0A@@@PEAV?$DynArray@UMilPoint2D@@$0A@@@PEAV?$DynArray@I$0A@@@PEAV?$DynArray@K$0A@@@@Z @ 0x18009BBFC (-TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEB.c)
 *     ??0Mesh2D@@QEAA@PEBUtagRECT@@@Z @ 0x18009C7C4 (--0Mesh2D@@QEAA@PEBUtagRECT@@@Z.c)
 *     ?_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ @ 0x1800AA8E0 (-_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800AF7B8 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 * Callees:
 *     memcpy_0 @ 0x18004FAFA (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DynArrayImpl<0>::ShrinkToSize(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  const void *v4; // rdx
  void *v5; // rcx
  unsigned __int64 v6; // r8
  const void *v7; // [rsp+30h] [rbp+8h] BYREF

  result = a2;
  v4 = *(const void **)a1;
  v5 = *(void **)(a1 + 8);
  if ( v4 != v5 )
  {
    v6 = result * *(unsigned int *)(a1 + 24);
    result = 0xFFFFFFFFLL;
    if ( v6 <= 0xFFFFFFFF )
    {
      if ( *(_DWORD *)(a1 + 24) <= *(_DWORD *)(a1 + 16) )
      {
        memcpy_0(v5, v4, (unsigned int)v6);
        (*(void (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *(_QWORD *)a1);
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
        result = *(unsigned int *)(a1 + 16);
LABEL_6:
        *(_DWORD *)(a1 + 20) = result;
        return result;
      }
      v7 = v4;
      result = (*(__int64 (__fastcall **)(WPF::HeapBase *, const void **))(*(_QWORD *)WPF::g_pProcessHeap + 24LL))(
                 WPF::g_pProcessHeap,
                 &v7);
      if ( (int)result >= 0 )
      {
        *(_QWORD *)a1 = v7;
        result = *(unsigned int *)(a1 + 24);
        goto LABEL_6;
      }
    }
  }
  return result;
}
