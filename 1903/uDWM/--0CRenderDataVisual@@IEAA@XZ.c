/*
 * XREFs of ??0CRenderDataVisual@@IEAA@XZ @ 0x180022E18
 * Callers:
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x1800253D8 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CTopLevelWindow3D@@IEAA@XZ @ 0x180026744 (--0CTopLevelWindow3D@@IEAA@XZ.c)
 *     ??0CAccent@@IEAA@XZ @ 0x18002ACF8 (--0CAccent@@IEAA@XZ.c)
 *     ??0CAnimatedTransitionVisual@@IEAA@XZ @ 0x180032CE8 (--0CAnimatedTransitionVisual@@IEAA@XZ.c)
 *     ??0CText@@AEAA@XZ @ 0x180037464 (--0CText@@AEAA@XZ.c)
 *     ??0CThumbnailVisual@@IEAA@XZ @ 0x180038F44 (--0CThumbnailVisual@@IEAA@XZ.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x180039B54 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x18003C814 (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 *     ??0CAccentAcrylicBlurBehind@@QEAA@XZ @ 0x180040A30 (--0CAccentAcrylicBlurBehind@@QEAA@XZ.c)
 *     ?Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z @ 0x180044470 (-Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180044A18 (--0CTouchVisual@@IEAA@_K@Z.c)
 *     ??0CLivePreview@@IEAA@XZ @ 0x18004A6A4 (--0CLivePreview@@IEAA@XZ.c)
 *     ??0CImmersiveWindowIconic@@IEAA@XZ @ 0x180082EAC (--0CImmersiveWindowIconic@@IEAA@XZ.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x180085DC4 (-Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CAccentBlurBehind@@SAJPEAPEAV1@@Z @ 0x18008B614 (-Create@CAccentBlurBehind@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x18008F854 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CScreenRotation@@SAJPEAPEAV1@@Z @ 0x18008F964 (-Create@CScreenRotation@@SAJPEAPEAV1@@Z.c)
 *     ??0CIconicAnimatedVisual@@IEAA@XZ @ 0x1800B1B9C (--0CIconicAnimatedVisual@@IEAA@XZ.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x180019640 (--0CVisual@@IEAA@XZ.c)
 */

CRenderDataVisual *__fastcall CRenderDataVisual::CRenderDataVisual(CRenderDataVisual *this)
{
  __int64 v1; // rcx

  CVisual::CVisual(this);
  *(_QWORD *)v1 = &CDesktopWindowReplacement::`vftable';
  *(_QWORD *)(v1 + 248) = 0LL;
  *(_QWORD *)(v1 + 256) = 0LL;
  *(_QWORD *)(v1 + 264) = 0LL;
  *(_DWORD *)(v1 + 272) = 0;
  *(_QWORD *)(v1 + 240) = 0LL;
  return (CRenderDataVisual *)v1;
}
