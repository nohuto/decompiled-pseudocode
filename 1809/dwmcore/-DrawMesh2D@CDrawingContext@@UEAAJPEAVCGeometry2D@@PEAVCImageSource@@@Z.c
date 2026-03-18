/*
 * XREFs of ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x180163220
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x180014DB0 (-ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEA.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180038F00 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x18008DA68 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x18008DAB4 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18008DCB4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800C1EF4 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x180148FA4 (McTemplateU0qq.c)
 *     ?DrawMesh2DInternal@CDrawingContext@@AEAAJPEAVCGeometry2D@@PEAVIBitmapRealization@@@Z @ 0x180163444 (-DrawMesh2DInternal@CDrawingContext@@AEAAJPEAVCGeometry2D@@PEAVIBitmapRealization@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawMesh2D(CDrawingContext *this, struct CGeometry2D *a2, struct CImageSource *a3)
{
  unsigned int v3; // edi
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  CDrawingContext *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  struct IBitmapRealization *v20; // [rsp+30h] [rbp-49h] BYREF
  struct IImageSource *v21; // [rsp+38h] [rbp-41h] BYREF
  _BYTE v22[16]; // [rsp+40h] [rbp-39h] BYREF
  void *v23[10]; // [rsp+50h] [rbp-29h] BYREF

  v3 = 0;
  v21 = 0LL;
  v20 = 0LL;
  if ( !CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Start,
      7,
      *(_DWORD *)(v7 + 6288));
  if ( a2 )
  {
    if ( a3 )
    {
      v8 = (*(__int64 (__fastcall **)(struct CGeometry2D *))(*(_QWORD *)a2 + 152LL))(a2);
      v9 = (*(__int64 (__fastcall **)(struct CGeometry2D *))(*(_QWORD *)a2 + 160LL))(a2);
      if ( v8 )
      {
        if ( v9 )
        {
          v21 = 0LL;
          v10 = CDrawingContext::ImageSourceToDrawListImageSource(
                  this,
                  (struct IImageSource *)(((unsigned __int64)a3 + 8) & -(__int64)(a3 != 0LL)),
                  0LL,
                  &v21);
          v3 = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xFB4u);
          }
          else
          {
            v20 = 0LL;
            v12 = (*(__int64 (__fastcall **)(struct IImageSource *, struct IBitmapRealization **))(*(_QWORD *)v21 + 80LL))(
                    v21,
                    &v20);
            v3 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xFB6u);
            }
            else
            {
              v14 = CDrawingContext::ApplyRenderStateInternal(this, 0);
              v3 = v14;
              if ( v14 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xFB8u);
              }
              else if ( CDrawingContext::IsBounding(this) )
              {
                (*(void (__fastcall **)(struct CGeometry2D *, _BYTE *))(*(_QWORD *)a2 + 168LL))(a2, v22);
                CRectanglesShape::CRectanglesShape((CRectanglesShape *)v23, (const struct MilRectF *)v22);
                CDrawingContext::FillShapeForBounds(this, (const struct CShape *)v23);
                CRectanglesShape::~CRectanglesShape(v23);
              }
              else
              {
                v17 = CDrawingContext::DrawMesh2DInternal(v16, a2, v20);
                v3 = v17;
                if ( v17 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xFCBu);
              }
            }
          }
        }
      }
    }
  }
  if ( !CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Stop,
      7,
      *((_DWORD *)this + 1572));
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v20);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v21);
  return v3;
}
