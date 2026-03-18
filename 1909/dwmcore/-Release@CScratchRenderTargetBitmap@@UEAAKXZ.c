/*
 * XREFs of ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x180049F70
 * Callers:
 *     ?ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x18002C1D8 (-ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x180049DF4 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x18004A260 (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRend.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x1800632A0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800CFB3C (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 *     ?Release@CScratchRenderTargetBitmap@@WGA@EAAKXZ @ 0x1800F0AA0 (-Release@CScratchRenderTargetBitmap@@WGA@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WJA@EAAKXZ @ 0x1800F0AB0 (-Release@CScratchRenderTargetBitmap@@WJA@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WJI@EAAKXZ @ 0x1800F0AC0 (-Release@CScratchRenderTargetBitmap@@WJI@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WKA@EAAKXZ @ 0x1800F0AD0 (-Release@CScratchRenderTargetBitmap@@WKA@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WKI@EAAKXZ @ 0x1800F0AE0 (-Release@CScratchRenderTargetBitmap@@WKI@EAAKXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCScratchRenderTargetBitmap@@@@YAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x180160E4C (--$ReleaseInterfaceNoNULL@VCScratchRenderTargetBitmap@@@@YAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 * Callees:
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x180049FF8 (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
