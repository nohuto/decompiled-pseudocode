/*
 * XREFs of ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800DABA0
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180036EE0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800924C4 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800DAA24 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800DAC2C (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRend.c)
 *     ?ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x1800E9210 (-ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WKA@EAAKXZ @ 0x1800F1290 (-Release@CScratchRenderTargetBitmap@@WKA@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WNA@EAAKXZ @ 0x1800F12A0 (-Release@CScratchRenderTargetBitmap@@WNA@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WNI@EAAKXZ @ 0x1800F12B0 (-Release@CScratchRenderTargetBitmap@@WNI@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WOA@EAAKXZ @ 0x1800F12C0 (-Release@CScratchRenderTargetBitmap@@WOA@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WOI@EAAKXZ @ 0x1800F12D0 (-Release@CScratchRenderTargetBitmap@@WOI@EAAKXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCScratchRenderTargetBitmap@@@@YAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1802013A0 (--$ReleaseInterfaceNoNULL@VCScratchRenderTargetBitmap@@@@YAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 * Callees:
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800DADCC (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CScratchRenderTargetBitmap::Release(CScratchRenderTargetBitmap *this)
{
  _DWORD *v2; // rcx
  unsigned __int32 v3; // ebx

  if ( *((_BYTE *)this + 280)
    && *((_DWORD *)this + 42) == 1
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 32LL))(*((_QWORD *)this + 25)) )
  {
    CRenderTargetBitmapCache::ReturnRenderTargetBitmap(
      (CRenderTargetBitmapCache *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 25) + 16LL) + 80LL) + 520LL),
      this);
  }
  v2 = (_DWORD *)((char *)this + 160);
  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 42);
  if ( !v3 )
  {
    --v2[2];
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
  }
  return v3;
}
