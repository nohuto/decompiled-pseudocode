/*
 * XREFs of ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003DDAC
 * Callers:
 *     GreGetDeviceCaps @ 0x1C0018CC0 (GreGetDeviceCaps.c)
 *     hbmSelectBitmap @ 0x1C001A230 (hbmSelectBitmap.c)
 *     GreGetNearestColor @ 0x1C003A9A0 (GreGetNearestColor.c)
 *     GreGetClipBox @ 0x1C003AC40 (GreGetClipBox.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003AE48 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C003B540 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     GreGetDCPoint @ 0x1C003DB70 (GreGetDCPoint.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0058BB0 (pProcessDfbSurfacesInternal.c)
 *     GreSelectBrush @ 0x1C009E300 (GreSelectBrush.c)
 *     GreSelectPen @ 0x1C0122F20 (GreSelectPen.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C0123F24 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C0124DB0 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C012EEDC (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C012F380 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiGetGammaRampCapability @ 0x1C012F550 (NtGdiGetGammaRampCapability.c)
 *     GreSetMagicColors @ 0x1C012FF4C (GreSetMagicColors.c)
 *     GreIntersectVisRect @ 0x1C0131B00 (GreIntersectVisRect.c)
 * Callees:
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C001C9D0 (HmgDecrementExclusiveReferenceCountEx.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x1C001E7F0 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x1C00215A0 (-RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z.c)
 *     bDeleteDCInternalEx @ 0x1C0021720 (bDeleteDCInternalEx.c)
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
