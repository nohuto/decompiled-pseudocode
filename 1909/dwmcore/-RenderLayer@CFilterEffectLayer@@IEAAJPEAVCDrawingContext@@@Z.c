/*
 * XREFs of ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017CF98
 * Callers:
 *     ?RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017D1B0 (-RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x180010434 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800910F0 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x18015D418 (McTemplateU0.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18016E9A4 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x1801CB550 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 */

__int64 __fastcall CFilterEffectLayer::RenderLayer(CFilterEffectLayer *this, struct CDrawingContext *a2)
{
  int v2; // xmm0_4
  int v4; // xmm1_4
  __int64 v6; // rcx
  struct ID2DContext *v7; // r15
  struct ID2DContextOwner *v8; // r14
  signed int v9; // eax
  __int64 v10; // rcx
  signed int v11; // ebx
  __int64 v12; // r8
  struct ID2D1Effect *v13; // r14
  float v14; // xmm4_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  __int64 v21; // rcx
  unsigned int v23; // [rsp+20h] [rbp-50h]
  struct ID2D1Bitmap1 *v24; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v25[2]; // [rsp+38h] [rbp-38h] BYREF
  struct ID2D1Effect *v26; // [rsp+40h] [rbp-30h] BYREF
  float v27; // [rsp+48h] [rbp-28h]
  float v28; // [rsp+4Ch] [rbp-24h]
  _DWORD v29[4]; // [rsp+50h] [rbp-20h] BYREF

  v2 = *((_DWORD *)this + 30);
  v4 = *((_DWORD *)this + 31);
  v24 = 0LL;
  v26 = 0LL;
  v6 = *((_QWORD *)this + 1);
  v7 = (struct ID2DContext *)*((_QWORD *)a2 + 48);
  v25[0] = v2;
  v25[1] = v4;
  v8 = (struct ID2DContextOwner *)(((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL));
  v9 = (*(__int64 (__fastcall **)(__int64, struct ID2D1Bitmap1 **))(*(_QWORD *)v6 + 72LL))(v6, &v24);
  v11 = v9;
  if ( v9 < 0 )
  {
    v23 = 165;
    goto LABEL_12;
  }
  if ( g_LockAndReadLayer )
    (*(void (__fastcall **)(_QWORD, struct ID2DContext *, struct ID2DContextOwner *))(**((_QWORD **)this + 1) + 216LL))(
      *((_QWORD *)this + 1),
      v7,
      v8);
  CFilterEffect::GetD2DEffectNoRef(*((CFilterEffect **)this + 14), v24, v7, v8, &v26);
  v13 = v26;
  if ( v26 )
  {
    v14 = *((float *)this + 31);
    v15 = *((float *)this + 32);
    v16 = (float)*((int *)this + 4);
    LODWORD(v26) = *((_DWORD *)this + 30);
    v17 = *(float *)&v26 - v16;
    *((float *)&v26 + 1) = v14;
    v18 = (float)*((int *)this + 5);
    *(float *)v29 = v17;
    v19 = v14 - v18;
    v20 = *((float *)this + 33);
    *(float *)&v29[2] = v17 + v15;
    *(float *)&v29[1] = v19;
    v27 = v15 + *(float *)&v26;
    *(float *)&v29[3] = v19 + v20;
    v28 = v20 + v14;
    v9 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, (float *)&v26, 1, 0);
    v11 = v9;
    if ( v9 >= 0 )
    {
      v11 = CDrawingContext::FillEffect(a2, (__int64)v13, (__int64)v29, (__int64)v25, 1);
      CDrawingContext::PopGpuClipRectInternal(a2, 0);
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v11, 0xDAu, 0LL);
        goto LABEL_13;
      }
      goto LABEL_9;
    }
    v23 = 204;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, v23, 0LL);
    goto LABEL_13;
  }
LABEL_9:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop, v12);
LABEL_13:
  if ( v24 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v24 + 16LL))(v24);
  return (unsigned int)v11;
}
