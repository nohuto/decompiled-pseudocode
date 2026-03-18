/*
 * XREFs of ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00EE3F4
 * Callers:
 *     GreConvertMemToRedirectionDC @ 0x1C00EDEA4 (GreConvertMemToRedirectionDC.c)
 *     GreSelectRedirectionBitmap @ 0x1C00EEBB0 (GreSelectRedirectionBitmap.c)
 *     ??1MDCOBJA@@QEAA@XZ @ 0x1C0164BEC (--1MDCOBJA@@QEAA@XZ.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C0273EA0 (DxgkEngAccumD3DPresentBounds.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C0274160 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetClientRect @ 0x1C0274CD0 (DxgkEngGetClientRect.c)
 *     DxgkEngGetDC @ 0x1C0274D30 (DxgkEngGetDC.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C0274DD0 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngIsRedirectionDC @ 0x1C0274ED0 (DxgkEngIsRedirectionDC.c)
 *     DxgkEngLockVisRgn @ 0x1C0274F20 (DxgkEngLockVisRgn.c)
 *     GreWatchVisRgnChange @ 0x1C02995C4 (GreWatchVisRgnChange.c)
 *     GreCancelDC @ 0x1C0299970 (GreCancelDC.c)
 *     GreConvertRedirectionToMemDC @ 0x1C0299A6C (GreConvertRedirectionToMemDC.c)
 *     GreSetPaletteEntries @ 0x1C02B05C0 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C02B0B50 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::vAltUnlockFast(__int64 **this)
{
  __int64 *v1; // rcx
  __int64 v2; // rbx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *this;
  v3 = 0;
  v2 = *v1;
  HmgDecrementShareReferenceCountEx(v1, &v3);
  if ( v3 )
    bDeleteDCInternalEx(v2, 0LL);
}
