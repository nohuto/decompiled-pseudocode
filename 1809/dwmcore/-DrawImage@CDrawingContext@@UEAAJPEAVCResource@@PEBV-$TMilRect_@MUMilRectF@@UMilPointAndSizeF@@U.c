/*
 * XREFs of ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0HJ@@@@Z @ 0x18008D560
 * Callers:
 *     <none>
 * Callees:
 *     ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x180014DB0 (-ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEA.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x18008DA68 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x18008DAB4 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18008DCB4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x1800B18C8 (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800C1EF4 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x180148FA4 (McTemplateU0qq.c)
 */

__int64 __fastcall CDrawingContext::DrawImage(CDrawingContext *this, __int64 a2, __int128 *a3, __int64 a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rsi
  bool v11; // r8
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  struct IImageSource *v20; // rsi
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // ecx
  char v25; // [rsp+30h] [rbp-79h]
  struct IImageSource *v26; // [rsp+40h] [rbp-69h] BYREF
  __int128 v27; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v28[24]; // [rsp+58h] [rbp-51h] BYREF
  _BYTE v29[80]; // [rsp+70h] [rbp-39h] BYREF

  v8 = 0;
  if ( !CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Start,
      4LL,
      *(unsigned int *)(v9 + 6288));
  if ( a2 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, 78LL) )
  {
    v10 = (a2 - 16) & -(__int64)(a2 != 0);
    v27 = *a3;
    if ( a4 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 48LL))(a4, 121LL) )
      {
        v8 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024809, 0x32u);
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024809, 0x68u);
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024809, 0x4EEu);
        goto LABEL_11;
      }
      v27 = *(_OWORD *)(a4 + 56);
    }
    if ( (float)(*((float *)&v27 + 2) - *(float *)&v27) >= 2.220446e-16
      && (float)(*((float *)&v27 + 3) - *((float *)&v27 + 1)) >= 2.220446e-16 )
    {
      if ( CDrawingContext::IsBounding(this) )
      {
        CRectanglesShape::CRectanglesShape((CRectanglesShape *)v29, (const struct MilRectF *)&v27);
        v12 = CDrawingContext::FillShapeForBounds(this, (const struct CShape *)v29, v11);
        v8 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x50Eu);
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v29);
      }
      else
      {
        v26 = 0LL;
        v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)(v10 + 8) + 120LL))(
                v10 + 8,
                0LL,
                0LL,
                v28);
        v8 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x4FBu);
        }
        else
        {
          v20 = (struct IImageSource *)((v10 + 8) & -(__int64)(v10 != 0));
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v26);
          v21 = CDrawingContext::ImageSourceToDrawListImageSource(this, v20, 0LL, &v26);
          v8 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x4FDu);
          }
          else if ( v26 )
          {
            v25 = 0;
            v23 = CDrawingContext::DrawBitmapWithPartialOcclusionAsDrawList(
                    this,
                    v20,
                    v28,
                    &v27,
                    *((_DWORD *)this + 1572),
                    0,
                    v25);
            v8 = v23;
            if ( v23 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x507u);
          }
        }
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v26);
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
