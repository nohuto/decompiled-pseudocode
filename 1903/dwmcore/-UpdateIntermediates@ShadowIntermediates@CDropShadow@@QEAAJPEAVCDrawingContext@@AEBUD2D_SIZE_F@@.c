/*
 * XREFs of ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18000DEB4
 * Callers:
 *     ?PrepareForDrawing@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18000DE20 (-PrepareForDrawing@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCSpriteVisualContent@@PEAPEAVCRenderTargetImageSource@@@Z @ 0x18000D7A0 (-GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCRenderTargetImageSource@@MPEAPEAV5@@Z @ 0x18000D8B4 (-GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?IsValid@CRenderTargetImageSource@@QEBA_NXZ @ 0x18000E0E0 (-IsValid@CRenderTargetImageSource@@QEBA_NXZ.c)
 *     ?CanUseFastShadow@ShadowIntermediates@CDropShadow@@QEBA_NAEBUD2D_SIZE_F@@M@Z @ 0x18000E100 (-CanUseFastShadow@ShadowIntermediates@CDropShadow@@QEBA_NAEBUD2D_SIZE_F@@M@Z.c)
 *     ?IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ @ 0x18000E148 (-IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?UpdateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x1801CA650 (-UpdateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?UpdateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801CA894 (-UpdateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 */

__int64 __fastcall CDropShadow::ShadowIntermediates::UpdateIntermediates(
        CDropShadow::ShadowIntermediates *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        float a4)
{
  float v7; // xmm7_4
  CRenderTargetImageSource *v8; // rcx
  CRenderTargetImageSource *v9; // rcx
  CRenderTargetImageSource *v10; // rcx
  __int64 v11; // rdi
  CRenderTargetImageSource *v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rcx
  unsigned int v16; // edi
  CRenderTargetImageSource *v18; // rdx
  int v19; // eax
  unsigned int v20; // ecx
  CRenderTargetImageSource *v21; // rdx
  int v22; // eax
  unsigned int v23; // ecx
  float v24; // xmm0_4
  int updated; // eax
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  struct D2D_SIZE_F v29; // [rsp+30h] [rbp-30h] BYREF

  v7 = *(float *)&FLOAT_1_0;
  if ( !CDropShadow::ShadowIntermediates::CanUseFastShadow(this, a3, a4) )
  {
    v29 = *a3;
    if ( CDropShadow::ShadowIntermediates::IsRectangularShadow(this) )
    {
      v24 = (float)(a4 + a4) + 1.0;
      if ( v24 <= v29.width )
        v29.width = (float)(a4 + a4) + 1.0;
      if ( v24 <= v29.height )
        v29.height = (float)(a4 + a4) + 1.0;
    }
    updated = CDropShadow::ShadowIntermediates::UpdateMaskIntermediate(this, a2, &v29);
    v16 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, updated, 0x2EAu, 0LL);
      return v16;
    }
    v27 = CDropShadow::ShadowIntermediates::UpdateBlurIntermediate(this, a2, &v29, a4);
    v16 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x2EBu, 0LL);
      return v16;
    }
    goto LABEL_15;
  }
  v8 = CDropShadow::ShadowIntermediates::s_cpFastShadowMask;
  if ( CDropShadow::ShadowIntermediates::s_cpFastShadowMask )
  {
    if ( CRenderTargetImageSource::IsValid(CDropShadow::ShadowIntermediates::s_cpFastShadowMask) )
      goto LABEL_4;
    v8 = CDropShadow::ShadowIntermediates::s_cpFastShadowMask;
  }
  v18 = 0LL;
  v29.width = 33.0;
  v29.height = 33.0;
  CDropShadow::ShadowIntermediates::s_cpFastShadowMask = 0LL;
  if ( v8 )
  {
    (*(void (__fastcall **)(CRenderTargetImageSource *))(*(_QWORD *)v8 + 16LL))(v8);
    v18 = CDropShadow::ShadowIntermediates::s_cpFastShadowMask;
  }
  CDropShadow::ShadowIntermediates::s_cpFastShadowMask = 0LL;
  if ( v18 )
    (*(void (__fastcall **)(CRenderTargetImageSource *))(*(_QWORD *)v18 + 16LL))(v18);
  v19 = CDropShadow::ShadowIntermediates::GenerateMaskIntermediate(
          a2,
          &v29,
          0LL,
          &CDropShadow::ShadowIntermediates::s_cpFastShadowMask);
  v16 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x2CEu, 0LL);
    return v16;
  }
LABEL_4:
  v9 = CDropShadow::ShadowIntermediates::s_cpFastShadowBlur;
  if ( !CDropShadow::ShadowIntermediates::s_cpFastShadowBlur )
    goto LABEL_29;
  if ( !CRenderTargetImageSource::IsValid(CDropShadow::ShadowIntermediates::s_cpFastShadowBlur) )
  {
    v9 = CDropShadow::ShadowIntermediates::s_cpFastShadowBlur;
LABEL_29:
    v21 = 0LL;
    v29.width = 65.0;
    v29.height = 65.0;
    CDropShadow::ShadowIntermediates::s_cpFastShadowBlur = 0LL;
    if ( v9 )
    {
      (*(void (__fastcall **)(CRenderTargetImageSource *))(*(_QWORD *)v9 + 16LL))(v9);
      v21 = CDropShadow::ShadowIntermediates::s_cpFastShadowBlur;
    }
    CDropShadow::ShadowIntermediates::s_cpFastShadowBlur = 0LL;
    if ( v21 )
      (*(void (__fastcall **)(CRenderTargetImageSource *))(*(_QWORD *)v21 + 16LL))(v21);
    v22 = CDropShadow::ShadowIntermediates::GenerateBlurIntermediate(
            a2,
            &v29,
            CDropShadow::ShadowIntermediates::s_cpFastShadowMask,
            COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_16_0)),
            &CDropShadow::ShadowIntermediates::s_cpFastShadowBlur);
    v16 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x2D6u, 0LL);
      return v16;
    }
  }
  v10 = CDropShadow::ShadowIntermediates::s_cpFastShadowMask;
  v11 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = CDropShadow::ShadowIntermediates::s_cpFastShadowMask;
  if ( v10 )
    (*(void (__fastcall **)(CRenderTargetImageSource *))(*(_QWORD *)v10 + 8LL))(v10);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = CDropShadow::ShadowIntermediates::s_cpFastShadowBlur;
  v13 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = CDropShadow::ShadowIntermediates::s_cpFastShadowBlur;
  if ( v12 )
    (*(void (__fastcall **)(CRenderTargetImageSource *))(*(_QWORD *)v12 + 8LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  *((_DWORD *)this + 8) = 1098907648;
LABEL_15:
  if ( *((float *)this + 8) == 0.0 )
    v14 = *((_QWORD *)this + 2);
  else
    v14 = *((_QWORD *)this + 3);
  v15 = *((_QWORD *)this + 1);
  if ( v15 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 48LL))(v15, 19LL) )
    v7 = *(float *)(*((_QWORD *)this + 1) + 92LL);
  if ( *((_QWORD *)this + 5) != v14 || *((float *)this + 12) != v7 )
  {
    *((float *)this + 12) = v7;
    *((_QWORD *)this + 5) = v14;
    *((_QWORD *)this + 7) = *(_QWORD *)(*((_QWORD *)a2 + 4) + 384LL);
  }
  return 0;
}
