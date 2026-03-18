/*
 * XREFs of ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C00CD2C0
 * Callers:
 *     GreConvertMemToRedirectionDC @ 0x1C00CCA98 (GreConvertMemToRedirectionDC.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C00CCC00 (NtGdiDdDDICreateDCFromMemory.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C02737C0 (DxgkEngAccumD3DPresentBounds.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C0273A80 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetClientRect @ 0x1C0274610 (DxgkEngGetClientRect.c)
 *     DxgkEngGetDC @ 0x1C0274670 (DxgkEngGetDC.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C0274710 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngIsRedirectionDC @ 0x1C0274810 (DxgkEngIsRedirectionDC.c)
 *     DxgkEngLockVisRgn @ 0x1C0274860 (DxgkEngLockVisRgn.c)
 *     GreWatchVisRgnChange @ 0x1C0299014 (GreWatchVisRgnChange.c)
 *     GreConvertRedirectionToMemDC @ 0x1C02994BC (GreConvertRedirectionToMemDC.c)
 *     GreSetPaletteEntries @ 0x1C02B0110 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C02B06A0 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

MDCOBJA *__fastcall MDCOBJA::MDCOBJA(MDCOBJA *this, HDC a2)
{
  HDC v3; // rax

  v3 = a2;
  LOBYTE(a2) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = HmgShareLockEx(v3, a2, 0LL);
  return this;
}
