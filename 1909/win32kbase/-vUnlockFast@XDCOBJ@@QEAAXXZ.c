/*
 * XREFs of ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003FD3C
 * Callers:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0017A1C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     GreGetClipBox @ 0x1C0017FA0 (GreGetClipBox.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C003F7D0 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     GreGetDCPoint @ 0x1C003FB00 (GreGetDCPoint.c)
 *     GreGetNearestColor @ 0x1C00508E0 (GreGetNearestColor.c)
 *     GreGetDeviceCaps @ 0x1C00511A0 (GreGetDeviceCaps.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0069D50 (pProcessDfbSurfacesInternal.c)
 *     GreSelectBrushInternal @ 0x1C00BAA60 (GreSelectBrushInternal.c)
 *     GreSelectPenInternal @ 0x1C00BAAE0 (GreSelectPenInternal.c)
 *     hbmSelectBitmapInternal @ 0x1C00BB910 (hbmSelectBitmapInternal.c)
 *     GreRestoreDCInternal @ 0x1C00BCED0 (GreRestoreDCInternal.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C01216B4 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C0122540 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C0125F80 (NtGdiGetDeviceCapsAll.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C012C72C (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C012CBD0 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiGetGammaRampCapability @ 0x1C012CDA0 (NtGdiGetGammaRampCapability.c)
 *     GreSetMagicColors @ 0x1C012D79C (GreSetMagicColors.c)
 *     GreIntersectVisRect @ 0x1C012F460 (GreIntersectVisRect.c)
 * Callees:
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C001DD10 (HmgDecrementExclusiveReferenceCountEx.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x1C001FB30 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x1C0021A40 (-RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z.c)
 *     bDeleteDCInternalEx @ 0x1C0022200 (bDeleteDCInternalEx.c)
 */

void __fastcall XDCOBJ::vUnlockFast(XDCOBJ *this)
{
  DC *v2; // rdi
  DC *v3; // rax
  struct _DC_ATTR *UserAttr; // rdx
  int *v5; // rcx
  int v6; // edx
  __int64 v7; // rdi
  int v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 2) )
  {
    v2 = *(DC **)this;
    if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
    {
      v3 = *(DC **)this;
      if ( !*((_DWORD *)this + 3) )
      {
        UserAttr = XDCOBJ::GetUserAttr(this);
        v3 = v2;
        if ( UserAttr )
        {
          DC::RestoreAttributes(v2, UserAttr);
          v3 = *(DC **)this;
        }
      }
      *((_DWORD *)v3 + 11) &= ~2u;
      *((_DWORD *)this + 2) = 0;
    }
  }
  v5 = *(int **)this;
  v6 = *((_DWORD *)this + 3);
  v8 = 0;
  v7 = *(_QWORD *)v5;
  HmgDecrementExclusiveReferenceCountEx(v5, v6, &v8);
  if ( v8 )
    bDeleteDCInternalEx(v7, 0LL);
}
