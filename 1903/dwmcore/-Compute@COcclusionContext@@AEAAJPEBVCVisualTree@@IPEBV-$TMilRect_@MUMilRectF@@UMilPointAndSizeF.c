/*
 * XREFs of ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEBVCMILMatrix@@AEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180053AB4
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180055110 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x1800B518C (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180044FFC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18005CBF0 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z @ 0x180068030 (-SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::Compute(
        COcclusionContext *this,
        __int64 a2,
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
  char v21; // dl
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int i; // r14d
  __int64 v25; // rcx
  unsigned __int64 v27; // r12
  char *v28; // rax
  unsigned int v29; // ecx
  float *p_right; // rbx
  const struct D2D_RECT_F *v31; // rsi
  signed __int64 v32; // r14
  __int128 v33; // xmm0
  HANDLE ProcessHeap; // rax
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm1_4
  __int64 v38; // rcx
  unsigned int v39; // [rsp+20h] [rbp-A8h]
  bool v40; // [rsp+30h] [rbp-98h]
  __int128 v43; // [rsp+40h] [rbp-88h]

  v8 = 0;
  *((_QWORD *)this + 1) = a2;
  v11 = 0LL;
  *(_QWORD *)((char *)this + 1044) = 0LL;
  v12 = a3;
  v13 = 0.0;
  v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&a5) & _xmm);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 50) + 48LL))(*((_QWORD *)this + 50));
  *((_DWORD *)this + 260) = 0;
  *((_DWORD *)this + 296) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1160, 40LL);
  v15 = COcclusionContext::SetDeviceTransform(this, a7);
  v17 = v15;
  if ( v15 < 0 )
  {
    v39 = 202;
    goto LABEL_41;
  }
  if ( a6 && *((_BYTE *)this + 824) )
  {
    v8 = 1;
  }
  else if ( v14 < 0.0000011920929 )
  {
    goto LABEL_4;
  }
  v27 = v12;
  v28 = (char *)operator new(saturated_mul(v12, 0x10uLL));
  v11 = (struct D2D_RECT_F *)v28;
  if ( v28 )
    `vector constructor iterator'(
      v28,
      16LL,
      v12,
      (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
  else
    v11 = 0LL;
  if ( !v11 )
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024882, 0xD2u, 0LL);
    goto LABEL_13;
  }
  if ( (_DWORD)v12 )
  {
    v40 = v14 < 0.0000011920929;
    p_right = &v11->right;
    v31 = v11;
    v32 = (char *)a4 - (char *)v11;
    do
    {
      if ( v8 )
      {
        CMILMatrix::Transform2DBoundsHelper<0>((COcclusionContext *)((char *)this + 896));
        v33 = v43;
      }
      else
      {
        v33 = *(_OWORD *)((char *)p_right + v32 - 8);
      }
      *(_OWORD *)(p_right - 2) = v33;
      if ( !v40 && !IsEmpty(v31) )
      {
        v35 = *(p_right - 1) - *(float *)&a5;
        *(p_right - 2) = *(p_right - 2) - *(float *)&a5;
        v36 = *(float *)&a5 + *p_right;
        *(p_right - 1) = v35;
        v37 = *(float *)&a5 + p_right[1];
        *p_right = v36;
        p_right[1] = v37;
      }
      ++v31;
      p_right += 4;
      --v27;
    }
    while ( v27 );
    LODWORD(v12) = a3;
  }
  a4 = v11;
LABEL_4:
  *((_DWORD *)this + 162) = v12;
  if ( (_DWORD)v12 )
  {
    v18 = (unsigned int)v12;
    v19 = (float *)((char *)this + 780);
    p_top = &a4->top;
    do
    {
      *v19 = (float)(p_top[1] - *(p_top - 1)) * (float)(p_top[2] - *p_top);
      *(_OWORD *)((char *)p_top + this - (COcclusionContext *)a4 + 648) = *(_OWORD *)(p_top - 1);
      p_top += 4;
      v13 = v13 + *v19++;
      --v18;
    }
    while ( v18 );
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v13) & _xmm) < 0.0000011920929 )
  {
    v17 = -2003292287;
    goto LABEL_13;
  }
  v21 = 0;
  **((_DWORD **)this + 121) = 0;
  *(_OWORD *)((char *)this + 1192) = *a8;
  v22 = *((_QWORD *)this + 150);
  v23 = v22 + 8LL * *((_QWORD *)this + 149);
  while ( v22 != v23 )
  {
    if ( *(_BYTE *)(*(_QWORD *)v22 + 13432LL) )
    {
      v21 = 1;
      break;
    }
    v22 += 8LL;
  }
  *((_BYTE *)this + 825) = v21;
  v15 = CVisualTreeIterator::WalkSubtree<COcclusionContext>((char *)this + 48, a2, *(_QWORD *)(a2 + 24), this);
  v17 = v15;
  if ( v15 < 0 )
  {
    v39 = 272;
LABEL_41:
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, v39, 0LL);
  }
LABEL_13:
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 32) = 0;
  for ( i = 0; i < *((_DWORD *)this + 46); ++i )
  {
    v38 = *(_QWORD *)(*((_QWORD *)this + 20) + 16LL * i);
    if ( v38 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  }
  *((_DWORD *)this + 46) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 160, 16LL);
  v25 = *((_QWORD *)this + 33);
  if ( v25 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
    *((_QWORD *)this + 33) = 0LL;
  }
  *((_DWORD *)this + 92) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 344, 8LL);
  **((_DWORD **)this + 121) = 0;
  *(_OWORD *)((char *)this + 1192) = 0LL;
  if ( v11 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v11);
  }
  return v17;
}
