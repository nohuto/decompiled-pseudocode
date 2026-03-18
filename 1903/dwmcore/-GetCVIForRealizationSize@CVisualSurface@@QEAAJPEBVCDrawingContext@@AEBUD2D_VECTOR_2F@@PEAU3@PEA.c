/*
 * XREFs of ?GetCVIForRealizationSize@CVisualSurface@@QEAAJPEBVCDrawingContext@@AEBUD2D_VECTOR_2F@@PEAU3@PEAPEAVCCachedVisualImage@@@Z @ 0x1801FE06C
 * Callers:
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180051700 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?GetMaxTextureSize@CDrawingContext@@QEBA?AUtagSIZE@@XZ @ 0x180015074 (-GetMaxTextureSize@CDrawingContext@@QEBA-AUtagSIZE@@XZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedVisualImage@@@Z @ 0x1801C9090 (--0-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedVisualImag.c)
 *     ?UpdateFromVisualSurface@CCachedVisualImage@@QEAAJPEAVCVisual@@AEBUD2D_VECTOR_2F@@11W4Enum@MilStretch@@@Z @ 0x1801C9948 (-UpdateFromVisualSurface@CCachedVisualImage@@QEAAJPEAVCVisual@@AEBUD2D_VECTOR_2F@@11W4Enum@MilSt.c)
 *     ??$emplace_back@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801FDD54 (--$emplace_back@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@-$vector_fa.c)
 *     ?CreateCVI@CVisualSurface@@AEAAJPEAPEAVCCachedVisualImage@@@Z @ 0x1801FDFF0 (-CreateCVI@CVisualSurface@@AEAAJPEAPEAVCCachedVisualImage@@@Z.c)
 *     ?PurgeUnusedResources@CVisualSurface@@AEAAXXZ @ 0x1801FE698 (-PurgeUnusedResources@CVisualSurface@@AEAAXXZ.c)
 */

__int64 __fastcall CVisualSurface::GetCVIForRealizationSize(
        CVisualSurface *this,
        struct _LUID *a2,
        const struct D2D_VECTOR_2F *a3,
        struct D2D_VECTOR_2F *a4,
        struct CCachedVisualImage **a5)
{
  struct CCachedVisualImage **v5; // r14
  struct CCachedVisualImage *v10; // rbx
  int v11; // eax
  unsigned int v12; // esi
  __int64 v13; // rdx
  float x; // xmm6_4
  float y; // xmm7_4
  float v16; // xmm2_4
  struct CCachedVisualImage *v17; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct CCachedVisualImage *v20; // [rsp+70h] [rbp+20h] BYREF

  v5 = a5;
  *a5 = 0LL;
  if ( *((_BYTE *)this + 152) )
  {
    wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>(
      &a5,
      **((_QWORD **)this + 12));
    v10 = (struct CCachedVisualImage *)a5;
    if ( !*((_BYTE *)this + 153) )
    {
      v11 = CCachedVisualImage::UpdateFromVisualSurface(
              (__int64)a5,
              *((struct CResource **)this + 7),
              (float *)this + 16,
              (float *)this + 18,
              (float *)this + 20,
              *((_DWORD *)this + 22));
      v12 = v11;
      if ( v11 < 0 )
      {
        v13 = 315LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
          (const char *)(unsigned int)v11);
        goto LABEL_18;
      }
    }
    *a4 = *(struct D2D_VECTOR_2F *)((char *)this + 80);
  }
  else
  {
    CVisualSurface::PurgeUnusedResources(this);
    x = a3->x;
    y = a3->y;
    *(FLOAT *)&a5 = a3->x;
    *((float *)&a5 + 1) = y;
    CDrawingContext::GetMaxTextureSize(a2, (unsigned int *)&v20);
    v16 = a3->x;
    if ( a3->x > (float)(int)v20 || a3->y > (float)SHIDWORD(v20) )
    {
      if ( v16 <= a3->y )
      {
        *((float *)&a5 + 1) = (float)SHIDWORD(v20);
        y = (float)SHIDWORD(v20);
        x = (float)((float)SHIDWORD(v20) / a3->y) * v16;
        *(float *)&a5 = x;
      }
      else
      {
        *(float *)&a5 = (float)(int)v20;
        x = (float)(int)v20;
        y = (float)((float)(int)v20 / v16) * a3->y;
        *((float *)&a5 + 1) = y;
      }
    }
    v20 = 0LL;
    v11 = CVisualSurface::CreateCVI(this, &v20);
    v10 = v20;
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 355LL;
      goto LABEL_15;
    }
    v11 = CCachedVisualImage::UpdateFromVisualSurface(
            (__int64)v20,
            *((struct CResource **)this + 7),
            (float *)this + 16,
            (float *)this + 18,
            (float *)&a5,
            1);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 365LL;
      goto LABEL_15;
    }
    wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>(
      &a5,
      (__int64)v10);
    detail::vector_facade<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,4,1,detail::liberal_expansion_policy>>::emplace_back<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>>(
      (_QWORD *)this + 12,
      (__int64 *)&a5);
    a4->x = x;
    a4->y = y;
  }
  v17 = v10;
  v10 = 0LL;
  v12 = 0;
  *v5 = v17;
LABEL_18:
  if ( v10 )
    CGdiSpriteBitmap::Release((struct CCachedVisualImage *)((char *)v10 + 16));
  return v12;
}
