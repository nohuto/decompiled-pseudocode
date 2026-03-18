/*
 * XREFs of ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180012C70
 * Callers:
 *     ?AddOcclusionInformation@CYCbCrSurface@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1801BA3D0 (-AddOcclusionInformation@CYCbCrSurface@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180012D78 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 *     ?GetBoundsInternal@CCompositionSurfaceBitmap@@AEBAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180012FF0 (-GetBoundsInternal@CCompositionSurfaceBitmap@@AEBAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180013150 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18005E640 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x1800B1484 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::AddOcclusionInformation(
        CCompositionSurfaceBitmap *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  int BoundsInternal; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  _BYTE v15[64]; // [rsp+30h] [rbp-88h] BYREF
  int v16; // [rsp+70h] [rbp-48h]
  struct D2D_RECT_F v17; // [rsp+80h] [rbp-38h] BYREF

  BoundsInternal = CCompositionSurfaceBitmap::GetBoundsInternal(this, a3, &v17);
  v8 = BoundsInternal;
  if ( BoundsInternal < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, BoundsInternal, 0x42Bu);
  }
  else if ( !IsEmpty(&v17) )
  {
    if ( CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)((char *)this + 64))
      && (v10 = COcclusionContext::CollectRectangleForOcclusion(a2, &v17, v9, 0LL), v8 = v10, v10 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x431u);
    }
    else if ( *((_BYTE *)a2 + 817) )
    {
      v16 = 0;
      CCompositionSurfaceBitmap::CalcImageTransform(this, a3, v15, &v17);
      v12 = COcclusionContext::CheckAndRecordOverlayCandidate(
              (_DWORD)a2,
              *((_QWORD *)a2 + 101),
              ((_DWORD)this + 56) & (unsigned int)-(this != 0LL),
              (unsigned int)v15,
              0LL,
              0);
      v8 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x43Du);
    }
  }
  return v8;
}
