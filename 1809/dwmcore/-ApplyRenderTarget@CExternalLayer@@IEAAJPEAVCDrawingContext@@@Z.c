/*
 * XREFs of ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18005F950
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800145A0 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18005F8B0 (-ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180018ADC (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18003745C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180046F68 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18005FB00 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
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
  int v14; // eax
  int v15; // eax
  float v16; // xmm1_4
  unsigned int v18; // [rsp+20h] [rbp-40h]
  int *v19; // [rsp+30h] [rbp-30h] BYREF
  int v20; // [rsp+38h] [rbp-28h] BYREF
  int v21; // [rsp+3Ch] [rbp-24h]
  float v22; // [rsp+40h] [rbp-20h]
  float v23; // [rsp+44h] [rbp-1Ch]
  struct _D3DCOLORVALUE v24; // [rsp+48h] [rbp-18h] BYREF

  v19 = 0LL;
  v3 = *((_QWORD *)this + 1);
  *(_QWORD *)&v24.r = 0LL;
  *(_QWORD *)&v24.b = 0LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 160LL))(v3);
  v5 = CDrawingContext::PushRenderTarget(a2, *((struct IRenderTarget **)this + 1));
  v7 = v5;
  if ( v5 < 0 )
  {
    v18 = 137;
  }
  else
  {
    v8 = *((_QWORD *)this + 1);
    *((_BYTE *)this + 33) = 1;
    v9 = (*(__int64 (__fastcall **)(__int64, int **))(*(_QWORD *)v8 + 232LL))(v8, &v19);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x97u);
      goto LABEL_9;
    }
    v20 = 0;
    v21 = 0;
    v11 = (float)v19[33];
    v22 = (float)v19[32];
    v23 = v11;
    v5 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, (float *)&v20, 1, 1);
    v7 = v5;
    if ( v5 < 0 )
    {
      v18 = 158;
    }
    else
    {
      v12 = CDrawingContext::Clear(a2, &v24);
      v7 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xA1u);
        CDrawingContext::PopGpuClipRectInternal(a2, 0);
        goto LABEL_9;
      }
      v14 = *((_DWORD *)a2 + 808);
      if ( v14 )
        *((_DWORD *)a2 + 808) = v14 - 1;
      v15 = *((_DWORD *)a2 + 258);
      v20 = 0;
      v21 = 0;
      --*(_DWORD *)(*((_QWORD *)a2 + 126) + 80LL * (unsigned int)(v15 - 1));
      *((_BYTE *)a2 + 6345) = 1;
      v16 = (float)*((int *)this + 7);
      v22 = (float)*((int *)this + 6);
      v23 = v16;
      v5 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, (float *)&v20, 1, 1);
      v7 = v5;
      if ( v5 >= 0 )
      {
        *((_BYTE *)this + 34) = 1;
        goto LABEL_9;
      }
      v18 = 176;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, v18);
LABEL_9:
  if ( v19 )
    (*(void (__fastcall **)(int *))(*(_QWORD *)v19 + 8LL))(v19);
  return v7;
}
