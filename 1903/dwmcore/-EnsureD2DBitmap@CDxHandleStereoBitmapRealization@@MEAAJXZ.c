/*
 * XREFs of ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x180263370
 * Callers:
 *     ?GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180263430 (-GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilR.c)
 *     ?GetDXGIResource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x180263540 (-GetDXGIResource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@.c)
 *     ?GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802635F0 (-GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTex.c)
 * Callees:
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x18003EEE0 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?CreateSubResourceD2DBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z @ 0x18016A934 (-CreateSubResourceD2DBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z.c)
 *     ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x1802637D0 (-ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::EnsureD2DBitmap(CD2DBitmap **this, __int64 a2, __int64 a3)
{
  signed int v4; // eax
  int v5; // edx
  __int64 v6; // rcx
  int v7; // ebx
  signed int SubResourceD2DBitmap; // eax
  __int64 v9; // rcx

  v4 = CDxHandleBitmapRealization::EnsureD2DBitmap((CDxHandleBitmapRealization *)this, a2, a3);
  v7 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v4, 0xE6u, 0LL);
  }
  else if ( !this[54] )
  {
    SubResourceD2DBitmap = CD2DBitmap::CreateSubResourceD2DBitmap(this[52], v5, this + 54);
    v7 = SubResourceD2DBitmap;
    if ( SubResourceD2DBitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, SubResourceD2DBitmap, 0xEEu, 0LL);
    else
      (*((void (__fastcall **)(char *, unsigned __int64))this[57] + 3))(
        (char *)this + 456,
        ((unsigned __int64)this[54] + 112) & -(__int64)(this[54] != 0LL));
  }
  if ( v7 < 0 )
    CDxHandleStereoBitmapRealization::ReleaseD2DBitmap((CDxHandleStereoBitmapRealization *)this);
  return (unsigned int)v7;
}
