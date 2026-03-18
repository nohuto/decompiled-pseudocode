/*
 * XREFs of ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IK@@@@Z @ 0x1800B4A00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x180050734 (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x1800513E0 (-ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEA.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18007A99C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180085E5C (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800B55D8 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x1800B5684 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x18015F794 (McTemplateU0qq.c)
 */

__int64 __fastcall CDrawingContext::DrawImage(CDrawingContext *this, __int64 a2, __int128 *a3, __int64 a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rsi
  bool v11; // r8
  signed int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  signed int v18; // eax
  __int64 v19; // rcx
  struct IImageSource *v20; // rsi
  signed int v21; // eax
  __int64 v22; // rcx
  signed int v23; // eax
  __int64 v24; // rcx
  struct IImageSource *v25; // [rsp+40h] [rbp-69h] BYREF
  __int128 v26; // [rsp+48h] [rbp-61h] BYREF
  __int128 v27; // [rsp+58h] [rbp-51h] BYREF
  _BYTE v28[80]; // [rsp+70h] [rbp-39h] BYREF

  v8 = 0;
  if ( !CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Start,
      4LL,
      *(unsigned int *)(v9 + 6288));
  if ( a2 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, 82LL) )
  {
    v10 = (a2 - 16) & -(__int64)(a2 != 0);
    v26 = *a3;
    if ( a4 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 48LL))(a4, 138LL) )
      {
        v8 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, 0x80070057, 0x32u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, 0x80070057, 0x68u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, 0x80070057, 0x4EBu, 0LL);
        goto LABEL_11;
      }
      v26 = *(_OWORD *)(a4 + 56);
    }
    if ( (float)(*((float *)&v26 + 2) - *(float *)&v26) >= 2.220446e-16
      && (float)(*((float *)&v26 + 3) - *((float *)&v26 + 1)) >= 2.220446e-16 )
    {
      if ( CDrawingContext::IsBounding(this) )
      {
        CRectanglesShape::CRectanglesShape((CRectanglesShape *)v28, (const struct MilRectF *)&v26);
        v12 = CDrawingContext::FillShapeForBounds(this, (const struct CShape *)v28, v11);
        v8 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x50Bu, 0LL);
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v28);
      }
      else
      {
        v25 = 0LL;
        v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int128 *))(*(_QWORD *)(v10 + 8) + 120LL))(
                v10 + 8,
                0LL,
                0LL,
                &v27);
        v8 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x4F8u, 0LL);
        }
        else
        {
          v20 = (struct IImageSource *)((v10 + 8) & -(__int64)(v10 != 0));
          Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v25);
          v21 = CDrawingContext::ImageSourceToDrawListImageSource(this, v20, 0LL, &v25);
          v8 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x4FAu, 0LL);
          }
          else if ( v25 )
          {
            v23 = CDrawingContext::DrawBitmapWithPartialOcclusionAsDrawList(
                    (__int64)this,
                    (__int64)v20,
                    &v27,
                    &v26,
                    *((_DWORD *)this + 1572),
                    0,
                    0);
            v8 = v23;
            if ( v23 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x504u, 0LL);
          }
        }
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v25);
      }
    }
  }
LABEL_11:
  if ( !CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Stop,
      4LL,
      *((unsigned int *)this + 1572));
  return v8;
}
