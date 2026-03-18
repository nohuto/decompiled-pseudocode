/*
 * XREFs of ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00CD178
 * Callers:
 *     GreConvertMemToRedirectionDC @ 0x1C00CCA98 (GreConvertMemToRedirectionDC.c)
 *     GreSelectRedirectionBitmap @ 0x1C00CF9B0 (GreSelectRedirectionBitmap.c)
 *     ??1MDCOBJA@@QEAA@XZ @ 0x1C016618C (--1MDCOBJA@@QEAA@XZ.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C02737C0 (DxgkEngAccumD3DPresentBounds.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C0273A80 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetClientRect @ 0x1C0274610 (DxgkEngGetClientRect.c)
 *     DxgkEngGetDC @ 0x1C0274670 (DxgkEngGetDC.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C0274710 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngIsRedirectionDC @ 0x1C0274810 (DxgkEngIsRedirectionDC.c)
 *     DxgkEngLockVisRgn @ 0x1C0274860 (DxgkEngLockVisRgn.c)
 *     GreWatchVisRgnChange @ 0x1C0299014 (GreWatchVisRgnChange.c)
 *     GreCancelDC @ 0x1C02993C0 (GreCancelDC.c)
 *     GreConvertRedirectionToMemDC @ 0x1C02994BC (GreConvertRedirectionToMemDC.c)
 *     GreSetPaletteEntries @ 0x1C02B0110 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C02B06A0 (NtGdiResizePalette.c)
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
