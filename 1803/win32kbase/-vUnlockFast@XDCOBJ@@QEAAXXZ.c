/*
 * XREFs of ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002AAF0
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C002F158 (-vCleanupDCs@@YAXK@Z.c)
 *     NtGdiDdDDIOpenAdapterFromHdc @ 0x1C0048150 (NtGdiDdDDIOpenAdapterFromHdc.c)
 *     GreGetNearestColor @ 0x1C005CCA0 (GreGetNearestColor.c)
 *     GreGetDCPoint @ 0x1C0061630 (GreGetDCPoint.c)
 *     GreCleanDC @ 0x1C0064110 (GreCleanDC.c)
 *     GreSetLayout @ 0x1C0064810 (GreSetLayout.c)
 *     NtGdiCreateMetafileDC @ 0x1C0068A50 (NtGdiCreateMetafileDC.c)
 *     GreSelectBrushInternal @ 0x1C0075E50 (GreSelectBrushInternal.c)
 *     GreSelectPenInternal @ 0x1C0075ED0 (GreSelectPenInternal.c)
 *     hbmSelectBitmapInternal @ 0x1C0076C90 (hbmSelectBitmapInternal.c)
 *     GreRestoreDCInternal @ 0x1C0077D70 (GreRestoreDCInternal.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C00CF188 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C00D6CC0 (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C00D7190 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiGetGammaRampCapability @ 0x1C00D73F0 (NtGdiGetGammaRampCapability.c)
 *     GreSetMagicColors @ 0x1C00D820C (GreSetMagicColors.c)
 * Callees:
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C00290B0 (HmgDecrementExclusiveReferenceCountEx.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002AB40 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     bDeleteDCInternalEx @ 0x1C0030D10 (bDeleteDCInternalEx.c)
 */

void __fastcall XDCOBJ::vUnlockFast(XDCOBJ *this)
{
  int *v2; // rcx
  int v3; // edx
  HDC v4; // rdi
  int v5; // [rsp+30h] [rbp+8h] BYREF

  XDCOBJ::RestoreAttributes(this);
  v2 = *(int **)this;
  v3 = *((_DWORD *)this + 3);
  v5 = 0;
  v4 = *(HDC *)v2;
  HmgDecrementExclusiveReferenceCountEx(v2, v3, &v5);
  if ( v5 )
    bDeleteDCInternalEx(v4, 0LL);
}
