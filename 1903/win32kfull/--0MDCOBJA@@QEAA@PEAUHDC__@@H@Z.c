/*
 * XREFs of ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C00EE53C
 * Callers:
 *     GreConvertMemToRedirectionDC @ 0x1C00EDEA4 (GreConvertMemToRedirectionDC.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C00EE010 (NtGdiDdDDICreateDCFromMemory.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C0273EA0 (DxgkEngAccumD3DPresentBounds.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C0274160 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetClientRect @ 0x1C0274CD0 (DxgkEngGetClientRect.c)
 *     DxgkEngGetDC @ 0x1C0274D30 (DxgkEngGetDC.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C0274DD0 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngIsRedirectionDC @ 0x1C0274ED0 (DxgkEngIsRedirectionDC.c)
 *     DxgkEngLockVisRgn @ 0x1C0274F20 (DxgkEngLockVisRgn.c)
 *     GreWatchVisRgnChange @ 0x1C02995C4 (GreWatchVisRgnChange.c)
 *     GreConvertRedirectionToMemDC @ 0x1C0299A6C (GreConvertRedirectionToMemDC.c)
 *     GreSetPaletteEntries @ 0x1C02B05C0 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C02B0B50 (NtGdiResizePalette.c)
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
