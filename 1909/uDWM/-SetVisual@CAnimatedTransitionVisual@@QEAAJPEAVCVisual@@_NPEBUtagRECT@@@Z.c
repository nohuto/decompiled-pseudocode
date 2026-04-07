/*
 * XREFs of ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180031410
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18002D768 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x180030AD4 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800A2F88 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800A3584 (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800A4D48 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x1800A51AC (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800A9EFC (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 * Callees:
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000E3E8 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@IIPEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x1800266B0 (-Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@IIPEAVCVisualProxy@@W4Enum@Mil.c)
 *     ?Freeze@CCachedVisualImageProxy@@QEAAJXZ @ 0x180028934 (-Freeze@CCachedVisualImageProxy@@QEAAJXZ.c)
 *     ?_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCBaseImageProxy@@@Z @ 0x1800316CC (-_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCBaseImageProxy@@@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x18003C594 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::SetVisual(
        struct CBaseImageProxy **this,
        struct CVisual *a2,
        char a3,
        const struct tagRECT *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // eax
  __m128i v11; // xmm3
  __m128i v12; // xmm2
  __m128i v13; // xmm4
  __m128i v14; // xmm5
  float v15; // xmm0_4
  __m128i v16; // xmm1
  int v17; // eax
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm4_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  __int64 v24; // rcx
  int v25; // eax
  int updated; // eax
  int v28; // eax
  bool v29; // cc
  float v30; // xmm1_4
  float v31; // xmm2_4
  float v32; // xmm0_4
  float v33; // xmm1_4
  void *v34; // [rsp+28h] [rbp-48h]
  void *v35; // [rsp+28h] [rbp-48h]
  float left; // [rsp+40h] [rbp-30h] BYREF
  float top; // [rsp+44h] [rbp-2Ch]
  float right; // [rsp+48h] [rbp-28h]
  float bottom; // [rsp+4Ch] [rbp-24h]
  struct tagRECT v40; // [rsp+50h] [rbp-20h] BYREF

  v8 = CAnimatedTransitionVisual::EnsureResources((CAnimatedTransitionVisual *)this);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x2CBu, v34);
    return v9;
  }
  if ( a4 )
  {
    v10 = 0;
    v11 = _mm_cvtsi32_si128(a4->left);
    v12 = _mm_cvtsi32_si128(*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 111));
    if ( a4->right - a4->left >= 0 )
      v10 = a4->right - a4->left;
    v13 = _mm_cvtsi32_si128(*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 112));
    v14 = _mm_cvtsi32_si128(a4->top);
    v15 = (float)*((int *)CDesktopManager::s_pDesktopManagerInstance + 113);
    v16 = _mm_cvtsi32_si128(v10);
    v17 = 0;
    LODWORD(v18) = _mm_cvtepi32_ps(v16).m128_u32[0];
    if ( a4->bottom - a4->top >= 0 )
      v17 = a4->bottom - a4->top;
    v19 = _mm_cvtepi32_ps(v12).m128_f32[0];
    v20 = _mm_cvtepi32_ps(v13).m128_f32[0];
    left = _mm_cvtepi32_ps(v11).m128_f32[0];
    v21 = fminf(v18, (float)(v15 + v19) - v19);
    v22 = (float)*((int *)CDesktopManager::s_pDesktopManagerInstance + 114);
    top = _mm_cvtepi32_ps(v14).m128_f32[0];
    right = v21 + left;
    v23 = fminf((float)v17, (float)(v22 + v20) - v20) + top;
    goto LABEL_8;
  }
  v29 = *((_DWORD *)a2 + 30) <= 0;
  v30 = (float)*((int *)a2 + 28);
  v31 = (float)*((int *)a2 + 29);
  left = v30;
  top = v31;
  if ( !v29 && *((int *)a2 + 31) > 0 )
  {
    v32 = (float)*((int *)a2 + 30) + v30;
    v33 = (float)*((int *)a2 + 31);
    right = v32;
    v23 = v33 + v31;
LABEL_8:
    bottom = v23;
    goto LABEL_9;
  }
  CTransitionVisualController::GetMonitorRectFromRectImpl(0LL, &v40);
  left = (float)v40.left;
  top = (float)v40.top;
  right = (float)v40.right;
  bottom = (float)v40.bottom;
LABEL_9:
  v24 = (__int64)this[73];
  *(_QWORD *)&v40.left = 0LL;
  *(_QWORD *)&v40.right = 0LL;
  v25 = CCachedVisualImageProxy::Update(v24, (__int64)&left, (__int64)&v40, 0, 0, *((_QWORD *)a2 + 2), 0);
  v9 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x2F8u, v35);
  }
  else if ( a3 && (v28 = CCachedVisualImageProxy::Freeze(this[73]), v9 = v28, v28 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x2FEu, v35);
  }
  else
  {
    updated = CAnimatedTransitionVisual::_UpdateBrush((CAnimatedTransitionVisual *)this, this[73]);
    v9 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x302u, v35);
  }
  return v9;
}
