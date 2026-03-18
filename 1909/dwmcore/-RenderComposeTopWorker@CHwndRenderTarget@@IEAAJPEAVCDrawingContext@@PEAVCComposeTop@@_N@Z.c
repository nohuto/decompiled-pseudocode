/*
 * XREFs of ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801A7C04
 * Callers:
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801A7AB0 (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x180022AA8 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18003A410 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800910F0 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18016E9A4 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x18016F6F4 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801A79B0 (-NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAX_NAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A80AC (-RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAX_NAEBV-$TMilRect_@HUtagRECT@@UMilPointAnd.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FDE8C (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FDF8C (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FE124 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
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
  signed int v12; // eax
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  signed int v18; // eax
  float left; // xmm0_4
  float top; // xmm2_4
  float right; // xmm3_4
  float bottom; // xmm1_4
  _DWORD *v23; // rax
  int v24; // edx
  int v25; // ecx
  signed int v26; // eax
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
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xAB4u, 0LL);
      return v4;
    }
    v16 = *((_QWORD *)this + 106);
    if ( !v16 || (v10 = *(_BYTE *)(v16 + 13439) == 0, v17 = 288LL, v10) )
      v17 = 220LL;
    v4 = 0;
    if ( *((_QWORD *)a3 + 1) )
    {
      v18 = CComposeTop::RenderWorker(a3, a2, (char *)this + v17);
      v4 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v18, 0x11Au, 0LL);
    }
    if ( (v4 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v4, 0xABEu, 0LL);
    }
    else
    {
      left = v31.left;
      if ( v33 > v31.left )
      {
        v31.left = v33;
        left = v33;
      }
      top = v31.top;
      if ( v34 > v31.top )
      {
        v31.top = v34;
        top = v34;
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
      if ( right <= left || bottom <= top )
      {
        v31.bottom = 0.0;
        v31.right = 0.0;
        v31.top = 0.0;
        v31.left = 0.0;
      }
      if ( IsEmpty(&v31) )
        goto LABEL_37;
      v23 = (_DWORD *)PixelAlign((__int64)v37, (__int64)&v31);
      v24 = v23[2];
      v32[0] = *v23;
      v25 = v23[1];
      LODWORD(v23) = v23[3];
      v32[1] = v25;
      v32[2] = v24;
      v32[3] = (_DWORD)v23;
      v26 = CHwndRenderTarget::NotifyRenderedRect((__int64)this, (__int64)&v31, 0);
      v4 = v26;
      if ( v26 < 0 )
      {
        v30 = 2762;
      }
      else
      {
        CHwndRenderTarget::RenderTargetRectToDesktopRect(this, v27, v32, &v31);
        v26 = CComposeTop::NewContentRendered(a3);
        v4 = v26;
        if ( v26 >= 0 )
          goto LABEL_37;
        v30 = 2772;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v26, v30, 0LL);
    }
LABEL_40:
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    return v4;
  }
  (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 22) + 48LL))(*((_QWORD *)this + 22), v32);
  v9 = *((_QWORD *)this + 106);
  if ( !v9 || (v10 = *(_BYTE *)(v9 + 13439) == 0, v11 = 288LL, v10) )
    v11 = 220LL;
  v12 = CComposeTop::FullRender(a3, a2, (char *)this + v11, v32);
  v4 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xAA7u, 0LL);
    return v4;
  }
LABEL_37:
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(a2);
  if ( v5 )
    goto LABEL_40;
  return v4;
}
