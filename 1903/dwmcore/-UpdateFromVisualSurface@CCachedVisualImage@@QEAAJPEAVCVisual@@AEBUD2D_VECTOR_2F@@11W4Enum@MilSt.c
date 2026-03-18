/*
 * XREFs of ?UpdateFromVisualSurface@CCachedVisualImage@@QEAAJPEAVCVisual@@AEBUD2D_VECTOR_2F@@11W4Enum@MilStretch@@@Z @ 0x1801C9948
 * Callers:
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJPEBVCDrawingContext@@AEBUD2D_VECTOR_2F@@PEAU3@PEAPEAVCCachedVisualImage@@@Z @ 0x1801FE06C (-GetCVIForRealizationSize@CVisualSurface@@QEAAJPEBVCDrawingContext@@AEBUD2D_VECTOR_2F@@PEAU3@PEA.c)
 *     ?ProcessFreeze@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_FREEZE@@@Z @ 0x1801FE31C (-ProcessFreeze@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_FREEZE@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A8A0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x18002B8B4 (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CCachedVisualImage::UpdateFromVisualSurface(
        __int64 a1,
        struct CResource *a2,
        float *a3,
        float *a4,
        float *a5,
        int a6)
{
  struct CResource *v7; // rdx
  unsigned int v8; // edi
  float v10; // xmm8_4
  float v11; // xmm9_4
  char v12; // al
  float v13; // xmm7_4
  float v14; // xmm6_4
  signed int v15; // eax
  __int64 v16; // rcx
  float v17; // xmm0_4
  float v18; // xmm2_4
  float v19; // xmm2_4
  float v20; // xmm2_4
  float v21; // xmm5_4
  float v22; // xmm2_4
  float v23; // xmm2_4
  float v25[12]; // [rsp+30h] [rbp-58h]

  v7 = *(struct CResource **)(a1 + 192);
  v8 = 0;
  v10 = *a3;
  v11 = a3[1];
  v12 = 0;
  v25[0] = *a3;
  v25[1] = v11;
  v13 = v11 + a4[1];
  v14 = *a3 + *a4;
  v25[3] = v13;
  v25[2] = v14;
  if ( v7 != a2 )
  {
    if ( v7 )
    {
      CResource::UnRegisterNotifierInternal((CResource *)(a1 + 16), v7);
      *(_QWORD *)(a1 + 192) = 0LL;
      ReleaseInterface<CVisualTree>((CDirtyRegion **)(a1 + 232));
    }
    if ( *(_BYTE *)(a1 + 378) )
      *(_BYTE *)(a1 + 378) = 0;
    if ( *(_BYTE *)(a1 + 376) )
      *(_BYTE *)(a1 + 376) = 0;
    *(_QWORD *)(a1 + 192) = a2;
    v15 = CResource::RegisterNotifier((CResource *)(a1 + 16), a2);
    v8 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x85Au, 0LL);
      return v8;
    }
    v12 = 1;
  }
  v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 144) - v10)) & _xmm);
  if ( v17 > 0.0000011920929
    || (v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 148) - v11)) & _xmm), v18 > 0.0000011920929)
    || (v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 152) - v14)) & _xmm), v19 > 0.0000011920929)
    || (v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 156) - v13)) & _xmm), v20 > 0.0000011920929) )
  {
    v12 = 1;
    *(_OWORD *)(a1 + 144) = *(_OWORD *)v25;
  }
  v21 = a5[1];
  v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*(double *)(a1 + 168) - *a5)) & _xmm);
  if ( v22 > 0.0000011920929
    || (v23 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*(double *)(a1 + 176) - v21)) & _xmm),
        v23 > 0.0000011920929) )
  {
    v12 = 1;
    *(double *)(a1 + 168) = *a5;
    *(double *)(a1 + 176) = v21;
  }
  if ( *(_DWORD *)(a1 + 224) != a6 )
  {
    *(_DWORD *)(a1 + 224) = a6;
    v12 = 1;
  }
  if ( v12 )
    CResource::NotifyOnChanged(a1 + 16, 0, 0LL);
  return v8;
}
