/*
 * XREFs of ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x180151148
 * Callers:
 *     ?RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18015B5A8 (-RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800306CC (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180038F00 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18003E2E0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180055A60 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006726C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18008E53C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV3@@Z @ 0x180151444 (-DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180165BA0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x1801E2780 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

__int64 __fastcall CDisplayDebugFrameCounter::Display(
        CDisplayDebugFrameCounter *this,
        unsigned int a2,
        unsigned int a3,
        CDrawingContext *a4,
        __int64 a5,
        __int128 *a6,
        int a7,
        _OWORD *a8)
{
  CMILMatrix *v11; // r14
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // eax
  __int128 v16; // xmm0
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // ebx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  _OWORD v29[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+90h] [rbp-70h]
  _OWORD v31[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v32; // [rsp+E0h] [rbp-20h]
  int v33; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v34[9]; // [rsp+F4h] [rbp-Ch] BYREF
  __int64 v35[2]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v36[2]; // [rsp+128h] [rbp+28h] BYREF

  v30 = 0;
  v11 = 0LL;
  v12 = *(_OWORD *)(a5 + 16);
  v31[0] = *(_OWORD *)a5;
  v13 = *(_OWORD *)(a5 + 32);
  v31[1] = v12;
  v14 = *(_OWORD *)(a5 + 48);
  v15 = *(_DWORD *)(a5 + 64);
  v31[2] = v13;
  v16 = *a6;
  v32 = v15;
  v31[3] = v14;
  *(_OWORD *)v36 = v16;
  if ( !CMILMatrix::IsIdentity<0>((__int64)v31) )
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v31, v17, (float *)v36);
  if ( a7 == 1 )
  {
    v29[0] = _xmm;
    v29[1] = _xmm;
    v29[2] = _xmm;
    v29[3] = _xmm;
    LOWORD(v30) = 32085;
    CMILMatrix::Rotate90((CMILMatrix *)v29);
    CMILMatrix::Translate((CMILMatrix *)v29, *(float *)&v36[1], 0.0);
    CMILMatrix::Multiply((CMILMatrix *)v31, (const struct CMILMatrix *)v29);
    v11 = (CMILMatrix *)v29;
  }
  v35[1] = 0LL;
  v35[0] = 0LL;
  memset_0(v34, 0, sizeof(v34));
  v34[0] = 0;
  v33 = 2;
  v18 = CDrawingContext::PushRenderOptionsInternal(a4, 0LL, (const struct MilRenderOptions *)&v33, 1);
  v20 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x40u);
  }
  else
  {
    v21 = CDrawingContext::PushTransformInternal(a4, 0LL, (const struct CMILMatrix *)v31, 0, 1);
    v20 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x43u);
    }
    else
    {
      v23 = CDrawingContext::ApplyRenderStateInternal(a4, 0);
      v20 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x47u);
      }
      else
      {
        v25 = CDisplayDebugFrameCounter::DisplayText(this, a2, a3, a4, (__int64)v36, a7, (__int64)v35);
        v20 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x49u);
        }
        else if ( v11 )
        {
          *(_OWORD *)v36 = *(_OWORD *)v35;
          CMILMatrix::Transform2DBoundsHelper<0>(v11, (__int64)v36, (float *)v35);
        }
      }
      CDrawingContext::PopTransformInternal(a4, 1);
    }
    CDrawingContext::PopRenderOptionsInternal(a4, 1);
  }
  if ( a8 )
    *a8 = *(_OWORD *)v35;
  return v20;
}
