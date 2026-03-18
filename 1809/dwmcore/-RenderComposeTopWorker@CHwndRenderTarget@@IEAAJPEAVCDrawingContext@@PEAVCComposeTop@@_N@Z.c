/*
 * XREFs of ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18015B2EC
 * Callers:
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18015B1C0 (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180018ADC (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18003745C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18009004C (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18015B0CC (-NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAX_NAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015B764 (-RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAX_NAEBV-$TMilRect_@HUtagRECT@@UMilPointAnd.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x180166768 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BDC5C (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BDD4C (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BDEDC (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderComposeTopWorker(
        CHwndRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        char a4)
{
  unsigned int v4; // ebx
  char v5; // r15
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  float left; // xmm0_4
  double v20; // xmm2_8
  float right; // xmm3_4
  float bottom; // xmm1_4
  _DWORD *v23; // rax
  int v24; // edx
  int v25; // ecx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v30; // [rsp+20h] [rbp-60h]
  struct D2D_RECT_F v31; // [rsp+30h] [rbp-50h] BYREF
  _DWORD v32[4]; // [rsp+40h] [rbp-40h] BYREF
  float v33; // [rsp+50h] [rbp-30h] BYREF
  float v34; // [rsp+54h] [rbp-2Ch]
  float v35; // [rsp+58h] [rbp-28h]
  float v36; // [rsp+5Ch] [rbp-24h]
  _BYTE v37[16]; // [rsp+60h] [rbp-20h] BYREF

  v4 = 0;
  v5 = 0;
  if ( !a4 )
  {
    if ( !*((_QWORD *)a3 + 1) )
      goto LABEL_37;
    (*(void (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 22) + 328LL))(*((_QWORD *)this + 22), &v33);
    v5 = 1;
    v14 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, &v33, 1, 0);
    v4 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xAC1u);
      return v4;
    }
    v16 = *((_QWORD *)this + 106);
    if ( !v16 || (v10 = *(_BYTE *)(v16 + 13423) == 0, v17 = 288LL, v10) )
      v17 = 220LL;
    v4 = 0;
    if ( *((_QWORD *)a3 + 1) )
    {
      v18 = CComposeTop::RenderWorker(a3, a2, (char *)this + v17);
      v4 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v18, 0x11Du);
    }
    if ( (v4 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v4, 0xACBu);
    }
    else
    {
      left = v31.left;
      if ( v33 > v31.left )
      {
        v31.left = v33;
        left = v33;
      }
      *(_QWORD *)&v20 = LODWORD(v31.top);
      if ( v34 > v31.top )
      {
        v31.top = v34;
        *(_QWORD *)&v20 = LODWORD(v34);
      }
      right = v31.right;
      if ( v31.right > v35 )
      {
        v31.right = v35;
        right = v35;
      }
      bottom = v31.bottom;
      if ( v31.bottom > v36 )
      {
        v31.bottom = v36;
        bottom = v36;
      }
      if ( right <= left || bottom <= *(float *)&v20 )
      {
        v31.bottom = 0.0;
        v31.right = 0.0;
        v31.top = 0.0;
        v31.left = 0.0;
      }
      if ( IsEmpty(&v31) )
        goto LABEL_37;
      v23 = (_DWORD *)PixelAlign((__int64)v37, &v31, v20);
      v24 = v23[2];
      v32[0] = *v23;
      v25 = v23[1];
      LODWORD(v23) = v23[3];
      v32[1] = v25;
      v32[2] = v24;
      v32[3] = (_DWORD)v23;
      v26 = CHwndRenderTarget::NotifyRenderedRect((__int64)this, &v31, 0);
      v4 = v26;
      if ( v26 < 0 )
      {
        v30 = 2775;
      }
      else
      {
        CHwndRenderTarget::RenderTargetRectToDesktopRect(this, v27, v32, &v31);
        v26 = CComposeTop::NewContentRendered(a3);
        v4 = v26;
        if ( v26 >= 0 )
          goto LABEL_37;
        v30 = 2785;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v26, v30);
    }
LABEL_40:
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    return v4;
  }
  (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 22) + 48LL))(*((_QWORD *)this + 22), v32);
  v9 = *((_QWORD *)this + 106);
  if ( !v9 || (v10 = *(_BYTE *)(v9 + 13423) == 0, v11 = 288LL, v10) )
    v11 = 220LL;
  v12 = CComposeTop::FullRender(a3, a2, (char *)this + v11, v32);
  v4 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xAB4u);
    return v4;
  }
LABEL_37:
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(a2);
  if ( v5 )
    goto LABEL_40;
  return v4;
}
