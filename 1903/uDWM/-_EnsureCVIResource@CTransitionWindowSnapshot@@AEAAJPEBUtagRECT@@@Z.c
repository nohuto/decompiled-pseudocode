/*
 * XREFs of ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x1800301A8
 * Callers:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x180004D00 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z @ 0x1800447F0 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@IIPEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x18000FA08 (-Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@IIPEAVCVisualProxy@@W4Enum@Mil.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ @ 0x1800304D8 (-_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180031374 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z @ 0x180031434 (-GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z @ 0x180031944 (-Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x180037F18 (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0 @ 0x18007E2D8 (McTemplateU0.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::_EnsureCVIResource(
        CTransitionWindowSnapshot *this,
        const struct tagRECT *a2)
{
  __int64 i; // rax
  float v5; // xmm1_4
  unsigned int v6; // eax
  CBaseObject **v7; // rsi
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // ecx
  float v14; // xmm1_4
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  CCachedVisualImageProxy *v18; // rcx
  int v19; // eax
  int v20; // eax
  __m128i v22; // xmm0
  int v23; // eax
  float v24; // xmm0_4
  __int64 v25; // rcx
  CBaseObject *v26; // rcx
  void *v27; // [rsp+28h] [rbp-48h]
  void *v28; // [rsp+28h] [rbp-48h]
  struct tagRECT v29; // [rsp+40h] [rbp-30h] BYREF
  float v30[4]; // [rsp+50h] [rbp-20h] BYREF

  for ( i = 0LL; i < 4; ++i )
    v30[i] = (float)*(&a2->left + i);
  v5 = *((float *)this + 88);
  v6 = 0;
  *(_QWORD *)&v29.left = 0LL;
  *(_QWORD *)&v29.right = 0LL;
  if ( v5 != 1.0 )
  {
    if ( a2->bottom - a2->top >= 0 )
      v6 = a2->bottom - a2->top;
    v22 = _mm_cvtsi32_si128(v6);
    v23 = 0;
    LODWORD(v24) = _mm_cvtepi32_ps(v22).m128_u32[0];
    if ( a2->right - a2->left >= 0 )
      v23 = a2->right - a2->left;
    v25 = *((_QWORD *)this + 39);
    *(double *)&v29.right = (float)(v24 * v5);
    *(double *)&v29.left = (float)((float)v23 * v5);
    CVisual::SetInterpolationMode(v25, 1LL);
  }
  v7 = (CBaseObject **)((char *)this + 288);
  if ( !*((_QWORD *)this + 36) )
  {
    v8 = 0;
    if ( a2->bottom - a2->top >= 0 )
      v8 = a2->bottom - a2->top;
    v9 = 0;
    if ( a2->right - a2->left >= 0 )
      v9 = a2->right - a2->left;
    if ( (int)CDesktopManager::GetCVIFromCache(v9, v8, (struct CCachedVisualImageProxy **)this + 36) < 0 )
    {
      v10 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
              (char *)this + 288);
      v11 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x109u, v27);
LABEL_30:
        if ( *v7 )
        {
          CBaseObject::Release(*v7);
          *v7 = 0LL;
        }
        v26 = (CBaseObject *)*((_QWORD *)this + 37);
        if ( v26 )
        {
          CBaseObject::Release(v26);
          *((_QWORD *)this + 37) = 0LL;
        }
        return v11;
      }
    }
  }
  v12 = CCachedVisualImageProxy::Update(
          (__int64)*v7,
          (__int64)v30,
          (__int64)&v29,
          0,
          0,
          *(_QWORD *)(*((_QWORD *)this + 39) + 16LL),
          0);
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x113u, v28);
    goto LABEL_30;
  }
  v13 = a2->right - a2->left;
  v14 = *((float *)this + 88);
  v29.left = -32000;
  v29.top = -32000;
  v15 = 0;
  if ( v13 >= 0 )
    v15 = v13;
  v16 = a2->bottom - a2->top;
  v29.right = (int)(float)((float)v15 * v14) - 32000;
  v17 = 0;
  if ( v16 >= 0 )
    v17 = v16;
  v18 = *v7;
  v29.bottom = (int)(float)((float)v17 * v14) - 32000;
  v19 = CCachedVisualImageProxy::Snapshot(v18, &v29);
  v11 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x122u, v28);
    goto LABEL_30;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmTransitionCVISnapshot_Info);
  v20 = CTransitionWindowSnapshot::_EnsureBrushForCVI(this);
  v11 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x127u, v28);
    goto LABEL_30;
  }
  return v11;
}
