/*
 * XREFs of ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C00AAFBC
 * Callers:
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00829E8 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C008CC4C (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C00A6150 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C00AD7B0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C00E1E60 (vAccNotifyDeleteSurfaceWrap.c)
 *     GreGetDeviceGammaRamp @ 0x1C0101FA4 (GreGetDeviceGammaRamp.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0102F68 (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0123D78 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     GreSetDeviceGammaRamp @ 0x1C0127F88 (GreSetDeviceGammaRamp.c)
 *     NtGdiSetPixel @ 0x1C0147670 (NtGdiSetPixel.c)
 *     ?NtGdiFastPolyPolyline@@YAHPEAUHDC__@@PEBUtagPOINT@@PEBKK@Z @ 0x1C0152ED0 (-NtGdiFastPolyPolyline@@YAHPEAUHDC__@@PEBUtagPOINT@@PEBKK@Z.c)
 *     GreExtSelectClipRgnInternal @ 0x1C0166B64 (GreExtSelectClipRgnInternal.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026AE58 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKOBJ::~DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  DEVLOCKOBJ::vDestructor(this);
  if ( *((_QWORD *)this + 4) )
    DLODCOBJ::vUnlock((DEVLOCKOBJ *)((char *)this + 32));
}
