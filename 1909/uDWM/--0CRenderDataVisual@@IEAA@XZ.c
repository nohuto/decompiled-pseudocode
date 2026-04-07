/*
 * XREFs of ??0CRenderDataVisual@@IEAA@XZ @ 0x180022D7C
 * Callers:
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180025BC0 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CTopLevelWindow3D@@IEAA@XZ @ 0x180026284 (--0CTopLevelWindow3D@@IEAA@XZ.c)
 *     ??0CText@@AEAA@XZ @ 0x180027698 (--0CText@@AEAA@XZ.c)
 *     ??0CThumbnailVisual@@IEAA@XZ @ 0x180027934 (--0CThumbnailVisual@@IEAA@XZ.c)
 *     ??0CAccent@@IEAA@XZ @ 0x180029938 (--0CAccent@@IEAA@XZ.c)
 *     ??0CAnimatedTransitionVisual@@IEAA@XZ @ 0x18002E308 (--0CAnimatedTransitionVisual@@IEAA@XZ.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x1800390E4 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x18003C2B4 (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 *     ??0CAccentAcrylicBlurBehind@@QEAA@XZ @ 0x1800408F0 (--0CAccentAcrylicBlurBehind@@QEAA@XZ.c)
 *     ??0CLivePreview@@IEAA@XZ @ 0x180044CE4 (--0CLivePreview@@IEAA@XZ.c)
 *     ?Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z @ 0x180045500 (-Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180045AA8 (--0CTouchVisual@@IEAA@_K@Z.c)
 *     ??0CImmersiveWindowIconic@@IEAA@XZ @ 0x180082B4C (--0CImmersiveWindowIconic@@IEAA@XZ.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x180085A64 (-Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CAccentBlurBehind@@SAJPEAPEAV1@@Z @ 0x18008B2B4 (-Create@CAccentBlurBehind@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x18008F4F4 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CScreenRotation@@SAJPEAPEAV1@@Z @ 0x18008F604 (-Create@CScreenRotation@@SAJPEAPEAV1@@Z.c)
 *     ??0CIconicAnimatedVisual@@IEAA@XZ @ 0x1800B183C (--0CIconicAnimatedVisual@@IEAA@XZ.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x180019DE0 (--0CVisual@@IEAA@XZ.c)
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
