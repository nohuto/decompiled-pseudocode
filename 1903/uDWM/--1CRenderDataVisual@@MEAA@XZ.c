/*
 * XREFs of ??1CRenderDataVisual@@MEAA@XZ @ 0x180023120
 * Callers:
 *     ??1CThumbnailVisual@@MEAA@XZ @ 0x180023194 (--1CThumbnailVisual@@MEAA@XZ.c)
 *     ??_GCRenderDataVisual@@MEAAPEAXI@Z @ 0x180025F00 (--_GCRenderDataVisual@@MEAAPEAXI@Z.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x180029324 (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ??1CAccent@@MEAA@XZ @ 0x18002AC14 (--1CAccent@@MEAA@XZ.c)
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x180032EEC (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 *     ??_GCText@@EEAAPEAXI@Z @ 0x1800373E0 (--_GCText@@EEAAPEAXI@Z.c)
 *     ??1CImage@@EEAA@XZ @ 0x180039C54 (--1CImage@@EEAA@XZ.c)
 *     ??1CTransitionWindowSnapshot@@MEAA@XZ @ 0x18003C714 (--1CTransitionWindowSnapshot@@MEAA@XZ.c)
 *     ??1CAccentAcrylicBlurBehind@@EEAA@XZ @ 0x1800409A4 (--1CAccentAcrylicBlurBehind@@EEAA@XZ.c)
 *     ??1CDirectTouchVisual@@MEAA@XZ @ 0x1800449B4 (--1CDirectTouchVisual@@MEAA@XZ.c)
 *     ??1CLivePreview@@MEAA@XZ @ 0x18007A8A0 (--1CLivePreview@@MEAA@XZ.c)
 *     ??1CImmersiveWindowIconic@@MEAA@XZ @ 0x180082EF4 (--1CImmersiveWindowIconic@@MEAA@XZ.c)
 *     ??1CAccentBlurBehind@@EEAA@XZ @ 0x18008B58C (--1CAccentBlurBehind@@EEAA@XZ.c)
 *     ??_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z @ 0x18008F020 (--_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z.c)
 *     ??1CContactStationaryVisual@@MEAA@XZ @ 0x18009A4C8 (--1CContactStationaryVisual@@MEAA@XZ.c)
 *     ??1CTextTetherVisual@@MEAA@XZ @ 0x18009AF98 (--1CTextTetherVisual@@MEAA@XZ.c)
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x18009CBEC (--1CTouchDragVisual@@MEAA@XZ.c)
 *     ??1CTetherVisual@@MEAA@XZ @ 0x18009D8F0 (--1CTetherVisual@@MEAA@XZ.c)
 *     ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x18009E428 (--1CPenBarrelKeyVisual@@MEAA@XZ.c)
 *     ??1CFlickVisual@@MEAA@XZ @ 0x18009EA78 (--1CFlickVisual@@MEAA@XZ.c)
 *     ??1CPenPressHoldVisual@@MEAA@XZ @ 0x18009F18C (--1CPenPressHoldVisual@@MEAA@XZ.c)
 *     ??_GCPressTapVisual@@MEAAPEAXI@Z @ 0x18009F610 (--_GCPressTapVisual@@MEAAPEAXI@Z.c)
 *     ??_GCTouchVisual@@MEAAPEAXI@Z @ 0x18009FF30 (--_GCTouchVisual@@MEAAPEAXI@Z.c)
 *     ??1CScreenRotation@@MEAA@XZ @ 0x1800A506C (--1CScreenRotation@@MEAA@XZ.c)
 *     ??1CIndirectTouchVisual@@MEAA@XZ @ 0x1800A6510 (--1CIndirectTouchVisual@@MEAA@XZ.c)
 *     ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x1800B0C10 (--1CTouchPressHoldVisual@@MEAA@XZ.c)
 *     ??1CIconicAnimatedVisual@@MEAA@XZ @ 0x1800B1C0C (--1CIconicAnimatedVisual@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002204C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderDataVisual::~CRenderDataVisual(CBaseObject **this)
{
  CBaseObject *v2; // rcx

  *this = (CBaseObject *)&CDesktopWindowReplacement::`vftable';
  CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v2 = this[30];
  if ( v2 )
  {
    CBaseObject::Release(v2);
    this[30] = 0LL;
  }
  if ( this[31] != this[32] )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    this[31] = 0LL;
  }
  CVisual::~CVisual((CVisual *)this);
}
