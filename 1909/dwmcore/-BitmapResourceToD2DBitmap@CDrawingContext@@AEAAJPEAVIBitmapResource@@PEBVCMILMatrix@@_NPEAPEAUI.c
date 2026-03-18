/*
 * XREFs of ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18016ACDC
 * Callers:
 *     ?ImageSourceToD2DBitmap@CDrawingContext@@UEAAJPEAVIImageSource@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18016E690 (-ImageSourceToD2DBitmap@CDrawingContext@@UEAAJPEAVIImageSource@@PEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x180012E14 (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18003F594 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18006A564 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::BitmapResourceToD2DBitmap(
        CDrawingContext *this,
        struct IBitmapResource *a2,
        const struct CMILMatrix *a3,
        char a4,
        struct ID2D1Bitmap1 **a5)
{
  int (__fastcall ***v8)(struct IBitmapResource *, GUID *, __int64 *); // rdx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // r9
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+38h] [rbp-28h] BYREF
  __int64 v16; // [rsp+40h] [rbp-20h] BYREF
  __int128 v17; // [rsp+48h] [rbp-18h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  *a5 = 0LL;
  if ( a2 && !CDrawingContext::IsBounding(this) )
  {
    if ( (**v8)(a2, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v14) >= 0 )
    {
      LOBYTE(v9) = CDrawingContext::IsNormalDesktopRender(this);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(v10 + 176))(v11, *((_QWORD *)this + 52), 0LL, v9);
    }
    if ( (*(int (__fastcall **)(struct IBitmapResource *, __int64 *))(*(_QWORD *)a2 + 80LL))(a2, &v15) >= 0 )
    {
      LOBYTE(v12) = a4;
      (*(void (__fastcall **)(__int64, char *, _QWORD, __int64, struct ID2D1Bitmap1 **))(*(_QWORD *)v15 + 136LL))(
        v15,
        (char *)this + 392,
        0LL,
        v12,
        a5);
    }
    if ( *a5 )
    {
      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a5 + 32LL))(*a5, &v16);
      *(_QWORD *)&v17 = 0LL;
      *((_QWORD *)&v17 + 1) = v16;
      CDrawingContext::RecordBitmapContentInfo(this, (__int64)a2, v14, &v17, 0LL);
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return 0LL;
}
