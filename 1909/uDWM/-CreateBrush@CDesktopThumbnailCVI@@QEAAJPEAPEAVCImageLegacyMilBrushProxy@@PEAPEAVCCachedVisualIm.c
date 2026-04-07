/*
 * XREFs of ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCResource@@AEBUtagRECT@@@Z @ 0x1800AEAE0
 * Callers:
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800A2F88 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x1800AF574 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180002FE4 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180018054 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0IW4Enum@MilBrushMappingMode@@1IIW43MilStretch@@W43MilTileMode@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@PEAVCBaseImageProxy@@@Z @ 0x180031C84 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0IW4Enum@MilBrushMappingMode@@1IIW43MilSt.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003D31C (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x1800AFCDC (-_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ.c)
 */

__int64 __fastcall CDesktopThumbnailCVI::CreateBrush(
        CDesktopThumbnailCVI *this,
        struct CImageLegacyMilBrushProxy **a2,
        struct CCachedVisualImageProxy **a3,
        struct CResource **a4,
        const struct tagRECT *a5)
{
  CBaseObject *v5; // rdi
  int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // r10d
  int v15; // r11d
  int v16; // r8d
  float v17; // xmm2_4
  int v18; // r9d
  float v19; // xmm3_4
  int v20; // eax
  int v21; // eax
  volatile signed __int32 *v22; // rbx
  __int64 v23; // rax
  __int64 v25; // [rsp+50h] [rbp-51h]
  CBaseObject *v26; // [rsp+70h] [rbp-31h] BYREF
  CBaseObject *v27; // [rsp+78h] [rbp-29h] BYREF
  __int128 v28; // [rsp+80h] [rbp-21h] BYREF
  __int128 v29; // [rsp+90h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  v26 = 0LL;
  v5 = 0LL;
  v27 = 0LL;
  if ( a4 )
  {
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v27);
    v10 = CResource::Create(
            0x1Cu,
            *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
            (__int64 *)&v27);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 637LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"windows\\dwm\\udwm\\desktopthumbnail.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_39;
    }
    v5 = v27;
  }
  v10 = CDesktopThumbnailCVI::_EnsureResources(this);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 640LL;
    goto LABEL_29;
  }
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v26);
  v10 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
          (__int64 *)&v26);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 643LL;
    goto LABEL_29;
  }
  v14 = 0;
  v29 = _xmm;
  if ( a4 )
  {
    v14 = *((_DWORD *)v5 + 6);
    v28 = 0LL;
    v15 = 0;
  }
  else
  {
    v16 = *((_DWORD *)this + 10) - *((_DWORD *)this + 8);
    v15 = 1;
    if ( (float)v16 == 0.0 )
    {
      v17 = 0.0;
    }
    else
    {
      v13 = (unsigned int)((a5->left - *((_DWORD *)this + 8)) >> 31);
      LODWORD(v13) = (a5->left - *((_DWORD *)this + 8)) % v16;
      v17 = (float)((a5->left - *((_DWORD *)this + 8)) / v16);
    }
    v18 = *((_DWORD *)this + 11) - *((_DWORD *)this + 9);
    *(float *)&v28 = v17;
    if ( (float)v18 == 0.0 )
    {
      v19 = 0.0;
    }
    else
    {
      v13 = (unsigned int)((a5->top - *((_DWORD *)this + 9)) >> 31);
      LODWORD(v13) = (a5->top - *((_DWORD *)this + 9)) % v18;
      v19 = (float)((a5->top - *((_DWORD *)this + 9)) / v18);
    }
    *((float *)&v28 + 1) = v19;
    if ( (float)v16 == 0.0 )
    {
      DWORD2(v28) = 0;
    }
    else
    {
      v20 = 0;
      if ( a5->right - a5->left >= 0 )
        v20 = a5->right - a5->left;
      v13 = (unsigned int)(v20 >> 31);
      LODWORD(v13) = v20 % v16;
      *((float *)&v28 + 2) = (float)(v20 / v16) + v17;
    }
    if ( (float)v18 == 0.0 )
    {
      HIDWORD(v28) = 0;
    }
    else
    {
      v21 = 0;
      if ( a5->bottom - a5->top >= 0 )
        v21 = a5->bottom - a5->top;
      v13 = (unsigned int)(v21 >> 31);
      LODWORD(v13) = v21 % v18;
      *((float *)&v28 + 3) = (float)(v21 / v18) + v19;
    }
  }
  v22 = (volatile signed __int32 *)v26;
  v10 = CImageLegacyMilBrushProxy::Update(
          (__int64)v26,
          v13,
          (__int64)&v29,
          (__int64)&v28,
          0,
          1,
          v15,
          0,
          v14,
          1,
          v25,
          0,
          0,
          *((_QWORD *)this + 3));
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 686LL;
    goto LABEL_29;
  }
  if ( a4 )
  {
    *a4 = v5;
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
      v22 = (volatile signed __int32 *)v26;
    }
  }
  *a2 = (struct CImageLegacyMilBrushProxy *)v22;
  if ( v22 )
    _InterlockedIncrement(v22 + 2);
  if ( a3 )
  {
    *a3 = (struct CCachedVisualImageProxy *)*((_QWORD *)this + 3);
    v23 = *((_QWORD *)this + 3);
    if ( v23 )
      _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
  }
  v11 = 0;
LABEL_39:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v27);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v26);
  return v11;
}
