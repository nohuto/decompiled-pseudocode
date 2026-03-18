/*
 * XREFs of ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0057424
 * Callers:
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C005604C (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     NtGdiSetPixel @ 0x1C0056E90 (NtGdiSetPixel.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0057DD0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     GreGetDeviceGammaRamp @ 0x1C0094D9C (GreGetDeviceGammaRamp.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C0096D68 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     GreSetDeviceGammaRamp @ 0x1C0097500 (GreSetDeviceGammaRamp.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0098F00 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     NtGdiGetDCObject @ 0x1C0099E10 (NtGdiGetDCObject.c)
 *     GreRectVisible @ 0x1C009F264 (GreRectVisible.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00A0A94 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C00ED6B8 (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 *     GreGetAppClipBox @ 0x1C00FA8EC (GreGetAppClipBox.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C00FEAD0 (vAccNotifyDeleteSurfaceWrap.c)
 *     GreGetRandomRgn @ 0x1C010DA60 (GreGetRandomRgn.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C011E898 (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     NtGdiOffsetClipRgn @ 0x1C01229A0 (NtGdiOffsetClipRgn.c)
 *     ?NtGdiFastPolyPolyline@@YAHPEAUHDC__@@PEBUtagPOINT@@PEBKK@Z @ 0x1C013D130 (-NtGdiFastPolyPolyline@@YAHPEAUHDC__@@PEBUtagPOINT@@PEBKK@Z.c)
 *     GreExtSelectClipRgnInternal @ 0x1C0160E74 (GreExtSelectClipRgnInternal.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0251D18 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     NtGdiPtVisible @ 0x1C02832D0 (NtGdiPtVisible.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKOBJ::~DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  DEVLOCKOBJ::vDestructor(this);
  DCOBJ::~DCOBJ((DEVLOCKOBJ *)((char *)this + 32));
}
