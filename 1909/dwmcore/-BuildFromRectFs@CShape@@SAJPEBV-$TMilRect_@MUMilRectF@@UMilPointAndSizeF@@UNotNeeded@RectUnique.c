/*
 * XREFs of ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x180249C7C
 * Callers:
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCSpriteVisualContent@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCRenderTargetImageSource@@@Z @ 0x1802576E4 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 * Callees:
 *     ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x18000B160 (-IsPixelAligned@@YA_NAEBUMilRectF@@@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18004AF40 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18004E5C4 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800573D0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800698D0 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x18008E080 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x180158654 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ?BuildFromRectFs@CRectanglesShape@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1802496C8 (-BuildFromRectFs@CRectanglesShape@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 */

__int64 __fastcall CShape::BuildFromRectFs(char *a1, __int64 a2, CRegionShape **a3)
{
  CRegionShape *v3; // rdi
  _QWORD *v4; // rbx
  int v7; // r9d
  struct CRectanglesShape *v8; // rcx
  int v9; // r9d
  CRegionShape *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // esi
  signed int v13; // eax
  __int64 v14; // rcx
  struct CObjectCache *ObjectCache; // rax
  __int64 v16; // rcx
  int v17; // edx
  unsigned int v19; // [rsp+20h] [rbp-88h]
  int v20[4]; // [rsp+30h] [rbp-78h] BYREF
  char v21[64]; // [rsp+40h] [rbp-68h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v7 = 0;
  while ( IsPixelAligned((const struct MilRectF *)&a1[16 * v7]) )
  {
    v7 = v9 + 1;
    if ( v7 )
    {
      `vector constructor iterator'(
        v21,
        16LL,
        4LL,
        (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
      *(_OWORD *)v21 = *(_OWORD *)CMilRectLFromMilRectF(v20, (__int64)a1);
      v10 = (CRegionShape *)DefaultHeap::Alloc(0x60uLL);
      v3 = v10;
      if ( v10 )
      {
        *((_QWORD *)v10 + 1) = 0LL;
        *(_QWORD *)v10 = &CRegionShape::`vftable';
        *((_QWORD *)v10 + 2) = (char *)v10 + 24;
        *((_DWORD *)v10 + 6) = 0;
        *((_QWORD *)v10 + 11) = 0LL;
      }
      else
      {
        v3 = 0LL;
      }
      if ( !v3 )
      {
        v12 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, 0x8007000E, 0x5Du, 0LL);
        goto LABEL_23;
      }
      v13 = CRegionShape::BuildFromRects((__int64)v3, (__int64)v21, 1);
      v12 = v13;
      if ( v13 >= 0 )
      {
        *a3 = v3;
        v3 = 0LL;
        goto LABEL_23;
      }
      v19 = 97;
      goto LABEL_22;
    }
  }
  ObjectCache = CThreadContext::GetObjectCache(v8);
  v17 = *((_DWORD *)ObjectCache + 1);
  if ( v17 )
  {
    v4 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v4;
    v16 = (unsigned int)(v17 - 1);
    *((_DWORD *)ObjectCache + 1) = v16;
  }
  if ( v4 || (v4 = DefaultHeap::Alloc(0x48uLL)) != 0LL )
  {
    v4[1] = 0LL;
    *v4 = &CRectanglesShape::`vftable';
    *((_DWORD *)v4 + 10) = 0;
    v4[2] = v4 + 6;
    v4[3] = v4 + 6;
    *((_DWORD *)v4 + 8) = 1;
    *((_DWORD *)v4 + 9) = 1;
    v4[8] = 0LL;
  }
  if ( !v4 )
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, 0x8007000E, 0x68u, 0LL);
    goto LABEL_23;
  }
  v13 = CRectanglesShape::BuildFromRectFs((CRectanglesShape *)v4, a1, 1u);
  v12 = v13;
  if ( v13 >= 0 )
  {
    *a3 = (CRegionShape *)v4;
    v4 = 0LL;
    goto LABEL_23;
  }
  v19 = 109;
LABEL_22:
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, v19, 0LL);
LABEL_23:
  operator delete(0LL);
  if ( v3 )
    CRegionShape::`vector deleting destructor'(v3, 1);
  if ( v4 )
    CRectanglesShape::`scalar deleting destructor'((CRectanglesShape *)v4, 1);
  return v12;
}
