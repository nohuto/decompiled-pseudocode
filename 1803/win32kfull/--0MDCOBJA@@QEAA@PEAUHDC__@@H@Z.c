/*
 * XREFs of ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0009328
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0008900 (NtGdiDdDDICreateDCFromMemory.c)
 *     GreConvertMemToRedirectionDC @ 0x1C00E8F3C (GreConvertMemToRedirectionDC.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C0242890 (DxgkEngAccumD3DPresentBounds.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C0242B00 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetClientRect @ 0x1C02435C0 (DxgkEngGetClientRect.c)
 *     DxgkEngGetDC @ 0x1C0243620 (DxgkEngGetDC.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C02436B0 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngIsRedirectionDC @ 0x1C0243790 (DxgkEngIsRedirectionDC.c)
 *     DxgkEngLockVisRgn @ 0x1C02437E0 (DxgkEngLockVisRgn.c)
 *     GreWatchVisRgnChange @ 0x1C026EBEC (GreWatchVisRgnChange.c)
 *     GreConvertRedirectionToMemDC @ 0x1C0270544 (GreConvertRedirectionToMemDC.c)
 *     GreSetPaletteEntries @ 0x1C0287A50 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C0287F00 (NtGdiResizePalette.c)
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
