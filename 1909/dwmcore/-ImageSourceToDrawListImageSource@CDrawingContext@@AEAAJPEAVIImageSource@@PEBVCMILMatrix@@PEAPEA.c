/*
 * XREFs of ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x18006A1DC
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800151CC (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U-$TMIL.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800426F0 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180068B40 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IK@@@@Z @ 0x1800D1560 (-DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18016B5BC (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18016CB64 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x180199DD0 (-DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x180012E14 (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18006A564 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::ImageSourceToDrawListImageSource(
        CDrawingContext *this,
        struct IImageSource *a2,
        const struct CMILMatrix *a3,
        struct IImageSource **a4)
{
  int (__fastcall **v4)(struct IImageSource *, GUID *, __int64 *); // rax
  struct IImageSource *v9; // rbx
  __int64 (__fastcall *v10)(struct IImageSource *, __int64 *); // r14
  int v11; // r14d
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ecx
  struct IImageSource *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r10
  __int64 v22; // [rsp+30h] [rbp-30h] BYREF
  __int64 v23; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v24[16]; // [rsp+40h] [rbp-20h] BYREF

  v4 = *(int (__fastcall ***)(struct IImageSource *, GUID *, __int64 *))a2;
  v22 = 0LL;
  v23 = 0LL;
  v9 = 0LL;
  if ( (*v4)(a2, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v22) >= 0 )
  {
    LOBYTE(v19) = CDrawingContext::IsNormalDesktopRender(this);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(v20 + 176))(v21, *((_QWORD *)this + 52), 0LL, v19);
  }
  v10 = *(__int64 (__fastcall **)(struct IImageSource *, __int64 *))(*(_QWORD *)a2 + 80LL);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  v11 = v10(a2, &v23);
  if ( v11 < 0 )
    goto LABEL_14;
  if ( a2 )
    (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)a2 + 8LL))(a2);
  v9 = a2;
  if ( !a2 )
    goto LABEL_14;
  v12 = 0LL;
  if ( *((_BYTE *)this + 6048) )
  {
    if ( *((_BYTE *)this + 6049) )
      v12 = *((_QWORD *)this + 417);
    else
      v12 = *(_QWORD *)(*((_QWORD *)this + 757) + 24LL);
  }
  v13 = (*(__int64 (__fastcall **)(struct IImageSource *, _QWORD, __int64, _BYTE *))(*(_QWORD *)a2 + 120LL))(
          a2,
          0LL,
          (v12 + 132) & -(__int64)(v12 != 0),
          v24);
  v11 = v13;
  if ( v13 >= 0 )
  {
    CDrawingContext::RecordBitmapContentInfo(this, a3);
LABEL_14:
    v15 = v9;
    v9 = 0LL;
    *a4 = v15;
    goto LABEL_15;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x2159u, 0LL);
LABEL_15:
  if ( v9 )
    (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)v9 + 16LL))(v9);
  v16 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return (unsigned int)v11;
}
