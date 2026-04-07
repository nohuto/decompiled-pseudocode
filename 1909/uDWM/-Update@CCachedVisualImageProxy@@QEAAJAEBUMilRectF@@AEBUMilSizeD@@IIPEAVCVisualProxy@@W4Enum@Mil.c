/*
 * XREFs of ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@IIPEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x1800266B0
 * Callers:
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@111PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x180023AAC (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@111PEAPEAVCC.c)
 *     ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z @ 0x180026504 (-CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x180031260 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180031410 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x18007D680 (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 *     ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x18008B4FC (-EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x1800AFCDC (-_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImageProxy::Update(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        int a7)
{
  int v7; // r10d

  v7 = 0;
  if ( a6 )
    v7 = *(_DWORD *)(*(_QWORD *)(a6 + 16) + 24LL);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int, int, int, int))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 16LL)
                                                                                         + 912LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
           *(unsigned int *)(*(_QWORD *)(a1 + 16) + 24LL),
           a2,
           a3,
           a4,
           a5,
           v7,
           a7);
}
