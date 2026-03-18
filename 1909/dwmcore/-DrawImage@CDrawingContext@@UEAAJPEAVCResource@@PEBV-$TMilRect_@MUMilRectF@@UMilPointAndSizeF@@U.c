/*
 * XREFs of ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IK@@@@Z @ 0x1800D1560
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18003F594 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800427AC (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x180042858 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180042950 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x180069C68 (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x18006A1DC (-ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x18015E0B4 (McTemplateU0qq.c)
 */

__int64 __fastcall CDrawingContext::DrawImage(CDrawingContext *this, __int64 a2, __int128 *a3, __int64 a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rsi
  signed int v11; // eax
  __int64 v12; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  signed int v17; // eax
  __int64 v18; // rcx
  struct IImageSource *v19; // rsi
  signed int v20; // eax
  __int64 v21; // rcx
  signed int v22; // eax
  __int64 v23; // rcx
  struct IImageSource *v24; // [rsp+40h] [rbp-69h] BYREF
  __int128 v25; // [rsp+48h] [rbp-61h] BYREF
  __int128 v26; // [rsp+58h] [rbp-51h] BYREF
  _BYTE v27[80]; // [rsp+70h] [rbp-39h] BYREF

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
    v25 = *a3;
    if ( a4 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 48LL))(a4, 138LL) )
      {
        v8 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, 0x80070057, 0x32u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, 0x80070057, 0x68u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, 0x80070057, 0x4EBu, 0LL);
        goto LABEL_11;
      }
      v25 = *(_OWORD *)(a4 + 56);
    }
    if ( (float)(*((float *)&v25 + 2) - *(float *)&v25) >= 2.220446e-16
      && (float)(*((float *)&v25 + 3) - *((float *)&v25 + 1)) >= 2.220446e-16 )
    {
      if ( CDrawingContext::IsBounding(this) )
      {
        CRectanglesShape::CRectanglesShape((CRectanglesShape *)v27, (const struct MilRectF *)&v25);
        v11 = CDrawingContext::FillShapeForBounds(this, (const struct CShape *)v27);
        v8 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x50Bu, 0LL);
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v27);
      }
      else
      {
        v24 = 0LL;
        v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int128 *))(*(_QWORD *)(v10 + 8) + 120LL))(
                v10 + 8,
                0LL,
                0LL,
                &v26);
        v8 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x4F8u, 0LL);
        }
        else
        {
          v19 = (struct IImageSource *)((v10 + 8) & -(__int64)(v10 != 0));
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v24);
          v20 = CDrawingContext::ImageSourceToDrawListImageSource(this, v19, 0LL, &v24);
          v8 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x4FAu, 0LL);
          }
          else if ( v24 )
          {
            v22 = CDrawingContext::DrawBitmapWithPartialOcclusionAsDrawList(
                    (__int64)this,
                    (__int64)v19,
                    &v26,
                    &v25,
                    *((_DWORD *)this + 1572),
                    0,
                    0);
            v8 = v22;
            if ( v22 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x504u, 0LL);
          }
        }
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v24);
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
