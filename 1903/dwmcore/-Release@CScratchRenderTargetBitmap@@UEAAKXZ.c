/*
 * XREFs of ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800474C0
 * Callers:
 *     ?ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x180024318 (-ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x180047328 (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRend.c)
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800477B0 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180058B80 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800B22BC (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 *     ?Release@CScratchRenderTargetBitmap@@WGA@EAAKXZ @ 0x1800ECDE0 (-Release@CScratchRenderTargetBitmap@@WGA@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WJA@EAAKXZ @ 0x1800ECDF0 (-Release@CScratchRenderTargetBitmap@@WJA@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WJI@EAAKXZ @ 0x1800ECE00 (-Release@CScratchRenderTargetBitmap@@WJI@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WKA@EAAKXZ @ 0x1800ECE10 (-Release@CScratchRenderTargetBitmap@@WKA@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WKI@EAAKXZ @ 0x1800ECE20 (-Release@CScratchRenderTargetBitmap@@WKI@EAAKXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCScratchRenderTargetBitmap@@@@YAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x18016253C (--$ReleaseInterfaceNoNULL@VCScratchRenderTargetBitmap@@@@YAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 * Callees:
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x180047548 (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CScratchRenderTargetBitmap::Release(CScratchRenderTargetBitmap *this)
{
  _DWORD *v2; // rcx
  unsigned __int32 v3; // ebx

  if ( *((_BYTE *)this + 216)
    && *((_DWORD *)this + 26) == 1
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 32LL))(*((_QWORD *)this + 17)) )
  {
    CRenderTargetBitmapCache::ReturnRenderTargetBitmap(
      (CRenderTargetBitmapCache *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 17) + 16LL) + 80LL) + 520LL),
      this);
  }
  v2 = (_DWORD *)((char *)this + 96);
  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 26);
  if ( !v3 )
  {
    --v2[2];
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
  }
  return v3;
}
