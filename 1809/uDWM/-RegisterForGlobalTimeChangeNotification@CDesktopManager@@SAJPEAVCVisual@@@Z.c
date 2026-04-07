/*
 * XREFs of ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180039E24
 * Callers:
 *     ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x180006D5C (-ActivateTimeline@CButton@@AEAAJPEAPEAV-$CTimeline@M@@NMMW4InterpolationMode@@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18000D720 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180012FC0 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x18007560C (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180075684 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?StartIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18008804C (-StartIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x180088088 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 *     ?RegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x18008F730 (-RegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     ?RegisterGlobalTimer@CRippleEffect@@AEAAJXZ @ 0x1800901F4 (-RegisterGlobalTimer@CRippleEffect@@AEAAJXZ.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18009B63C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x1800A1554 (-SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@PEAVCVisual@@$0A@@@QEAAJPEFBQEAVCVisual@@I@Z @ 0x1800393C4 (-AddMultipleAndSet@-$DynArray@PEAVCVisual@@$0A@@@QEAAJPEFBQEAVCVisual@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDesktopManager::RegisterForGlobalTimeChangeNotification(struct CVisual *a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  struct CVisual *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1;
  v1 = DynArray<CVisual *,0>::AddMultipleAndSet((__int64)CDesktopManager::s_pDesktopManagerInstance + 576, &v4, 1u);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x6EBu);
  else
    _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
  return v2;
}
