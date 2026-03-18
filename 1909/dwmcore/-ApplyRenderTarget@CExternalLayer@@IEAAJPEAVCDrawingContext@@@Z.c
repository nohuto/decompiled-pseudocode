/*
 * XREFs of ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18003FA3C
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180014450 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180042360 (-ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18003F9A0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ @ 0x18003FBC4 (-PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180059680 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800910F0 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18016E9A4 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 */

__int64 __fastcall CExternalLayer::ApplyRenderTarget(CExternalLayer *this, struct CDrawingContext *a2)
{
  __int64 v3; // rcx
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  float v11; // xmm1_4
  int v12; // eax
  unsigned int v13; // ecx
  float v14; // xmm1_4
  unsigned int v16; // [rsp+20h] [rbp-40h]
  int *v17; // [rsp+30h] [rbp-30h] BYREF
  int v18; // [rsp+38h] [rbp-28h] BYREF
  int v19; // [rsp+3Ch] [rbp-24h]
  float v20; // [rsp+40h] [rbp-20h]
  float v21; // [rsp+44h] [rbp-1Ch]
  struct _D3DCOLORVALUE v22; // [rsp+48h] [rbp-18h] BYREF

  v17 = 0LL;
  v3 = *((_QWORD *)this + 1);
  *(_QWORD *)&v22.r = 0LL;
  *(_QWORD *)&v22.b = 0LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 160LL))(v3);
  v5 = CDrawingContext::PushRenderTarget(a2, *((struct IRenderTarget **)this + 1));
  v7 = v5;
  if ( v5 < 0 )
  {
    v16 = 137;
  }
  else
  {
    v8 = *((_QWORD *)this + 1);
    *((_BYTE *)this + 33) = 1;
    v9 = (*(__int64 (__fastcall **)(__int64, int **))(*(_QWORD *)v8 + 232LL))(v8, &v17);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x97u, 0LL);
      goto LABEL_7;
    }
    v18 = 0;
    v19 = 0;
    v11 = (float)v17[33];
    v20 = (float)v17[32];
    v21 = v11;
    v5 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, (unsigned int)&v18, 1, 1);
    v7 = v5;
    if ( v5 < 0 )
    {
      v16 = 158;
    }
    else
    {
      v12 = CDrawingContext::Clear(a2, &v22);
      v7 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xA1u, 0LL);
        CDrawingContext::PopGpuClipRectInternal(a2, 0);
        goto LABEL_7;
      }
      CScopedClipStack::PopGpuClipFromScope((struct CDrawingContext *)((char *)a2 + 1008));
      v18 = 0;
      v19 = 0;
      *((_BYTE *)a2 + 6345) = 1;
      v14 = (float)*((int *)this + 7);
      v20 = (float)*((int *)this + 6);
      v21 = v14;
      v5 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, (unsigned int)&v18, 1, 1);
      v7 = v5;
      if ( v5 >= 0 )
      {
        *((_BYTE *)this + 34) = 1;
        goto LABEL_7;
      }
      v16 = 176;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, v16, 0LL);
LABEL_7:
  if ( v17 )
    (*(void (__fastcall **)(int *))(*(_QWORD *)v17 + 8LL))(v17);
  return v7;
}
