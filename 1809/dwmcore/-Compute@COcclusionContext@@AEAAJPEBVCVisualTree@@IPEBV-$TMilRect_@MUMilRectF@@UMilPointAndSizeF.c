/*
 * XREFs of ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEBVCMILMatrix@@AEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18008E760
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180048F10 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x18008E610 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002C9EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18003C2F0 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z @ 0x180045FF0 (-SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?CheckOverlayCandidateCollectionEnabled@COcclusionContext@@AEBA_NXZ @ 0x18008EA80 (-CheckOverlayCandidateCollectionEnabled@COcclusionContext@@AEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::Compute(
        COcclusionContext *this,
        void **a2,
        unsigned int a3,
        struct D2D_RECT_F *a4,
        int a5,
        char a6,
        struct CMILMatrix *a7,
        _OWORD *a8)
{
  char v8; // r13
  struct D2D_RECT_F *v11; // rbp
  unsigned __int64 v12; // r15
  float v13; // xmm7_4
  float v14; // xmm1_4
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // esi
  __int64 v18; // r8
  float *v19; // rcx
  float *p_top; // rax
  int v21; // eax
  unsigned int v22; // ecx
  unsigned int i; // r14d
  __int64 v24; // rcx
  unsigned __int64 v26; // r12
  char *v27; // rax
  unsigned int v28; // ecx
  float *p_right; // rbx
  const struct D2D_RECT_F *v30; // rsi
  signed __int64 v31; // r14
  __int128 v32; // xmm0
  float v33; // xmm1_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  __int64 v36; // rcx
  bool v37; // [rsp+30h] [rbp-98h]
  __int128 v40; // [rsp+40h] [rbp-88h]

  v8 = 0;
  *(_QWORD *)((char *)this + 1036) = 0LL;
  v11 = 0LL;
  v12 = a3;
  v13 = 0.0;
  v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&a5) & _xmm);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 49) + 48LL))(*((_QWORD *)this + 49));
  *((_DWORD *)this + 258) = 0;
  *((_DWORD *)this + 294) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 1152, 0x28u);
  v15 = COcclusionContext::SetDeviceTransform(this, a7);
  v17 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xCBu);
    goto LABEL_10;
  }
  if ( a6 && *((_BYTE *)this + 816) )
  {
    v8 = 1;
    goto LABEL_18;
  }
  if ( v14 >= 0.0000011920929 )
  {
LABEL_18:
    v26 = v12;
    v27 = (char *)operator new(saturated_mul(v12, 0x10uLL));
    v11 = (struct D2D_RECT_F *)v27;
    if ( v27 )
      `vector constructor iterator'(
        v27,
        16LL,
        v12,
        (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
    else
      v11 = 0LL;
    if ( !v11 )
    {
      v17 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, -2147024882, 0xD3u);
      goto LABEL_10;
    }
    if ( (_DWORD)v12 )
    {
      v37 = v14 < 0.0000011920929;
      p_right = &v11->right;
      v30 = v11;
      v31 = (char *)a4 - (char *)v11;
      do
      {
        if ( v8 )
        {
          CMILMatrix::Transform2DBoundsHelper<0>((COcclusionContext *)((char *)this + 888));
          v32 = v40;
        }
        else
        {
          v32 = *(_OWORD *)((char *)p_right + v31 - 8);
        }
        *(_OWORD *)(p_right - 2) = v32;
        if ( !v37 && !IsEmpty(v30) )
        {
          v33 = *(p_right - 1) - *(float *)&a5;
          *(p_right - 2) = *(p_right - 2) - *(float *)&a5;
          v34 = *(float *)&a5 + *p_right;
          *(p_right - 1) = v33;
          v35 = *(float *)&a5 + p_right[1];
          *p_right = v34;
          p_right[1] = v35;
        }
        ++v30;
        p_right += 4;
        --v26;
      }
      while ( v26 );
      LODWORD(v12) = a3;
    }
    a4 = v11;
  }
  *((_DWORD *)this + 160) = v12;
  if ( (_DWORD)v12 )
  {
    v18 = (unsigned int)v12;
    v19 = (float *)((char *)this + 772);
    p_top = &a4->top;
    do
    {
      *v19 = (float)(p_top[1] - *(p_top - 1)) * (float)(p_top[2] - *p_top);
      *(_OWORD *)((char *)p_top + this - (COcclusionContext *)a4 + 640) = *(_OWORD *)(p_top - 1);
      p_top += 4;
      v13 = v13 + *v19++;
      --v18;
    }
    while ( v18 );
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v13) & _xmm) < 0.0000011920929 )
  {
    v17 = -2003292287;
  }
  else
  {
    **((_DWORD **)this + 120) = 0;
    *((_OWORD *)this + 74) = *a8;
    *((_BYTE *)this + 817) = COcclusionContext::CheckOverlayCandidateCollectionEnabled(this);
    v21 = CVisualTreeIterator::WalkSubtree<COcclusionContext>(
            (__int64)this + 40,
            (const struct CVisualTree *)a2,
            a2[3],
            this);
    v17 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x111u);
  }
LABEL_10:
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 30) = 0;
  for ( i = 0; i < *((_DWORD *)this + 44); ++i )
  {
    v36 = *(_QWORD *)(*((_QWORD *)this + 19) + 16LL * i);
    if ( v36 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  *((_DWORD *)this + 44) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 152, 0x10u);
  v24 = *((_QWORD *)this + 32);
  if ( v24 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
    *((_QWORD *)this + 32) = 0LL;
  }
  *((_DWORD *)this + 90) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 336, 8u);
  **((_DWORD **)this + 120) = 0;
  *((_OWORD *)this + 74) = 0LL;
  if ( v11 )
    HeapFree(WPF::g_processHeap, 0, v11);
  return v17;
}
