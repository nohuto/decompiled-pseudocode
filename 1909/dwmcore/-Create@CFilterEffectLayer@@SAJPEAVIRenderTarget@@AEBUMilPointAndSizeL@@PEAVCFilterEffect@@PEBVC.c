/*
 * XREFs of ?Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x18017CDA0
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1800131D8 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 * Callees:
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180051DCC (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x180051E10 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z @ 0x1801CAD28 (-ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x1801CBBC4 (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 */

__int64 __fastcall CFilterEffectLayer::Create(
        struct IRenderTarget *a1,
        const struct MilPointAndSizeL *a2,
        struct CFilterEffect *a3,
        const struct CVisual *a4,
        const struct MilPointAndSizeF *a5,
        struct CFilterEffectLayer **a6)
{
  struct IRenderTargetBitmap *v6; // rsi
  __int64 v11; // rax
  __int64 v12; // xmm0_8
  bool IsOpaque; // al
  int v14; // ecx
  char v15; // bl
  bool v16; // zf
  __int64 v17; // rax
  signed int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // edi
  char v21; // al
  signed int v22; // eax
  __int64 v23; // rcx
  CExternalLayer *v24; // rax
  __int64 v25; // rcx
  CExternalLayer *v26; // rbx
  int v28; // [rsp+50h] [rbp-39h] BYREF
  struct IRenderTargetBitmap *v29; // [rsp+58h] [rbp-31h] BYREF
  __int64 v30; // [rsp+60h] [rbp-29h] BYREF
  int v31; // [rsp+68h] [rbp-21h]
  struct _LUID v32; // [rsp+70h] [rbp-19h] BYREF
  const char *v33; // [rsp+78h] [rbp-11h] BYREF
  int v34; // [rsp+80h] [rbp-9h]

  v6 = 0LL;
  v28 = 0;
  v29 = 0LL;
  *a6 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IRenderTarget *, const char **))(*(_QWORD *)a1 + 24LL))(a1, &v33);
  v12 = *(_QWORD *)v11;
  LODWORD(v11) = *(_DWORD *)(v11 + 8);
  v30 = v12;
  v31 = v11;
  IsOpaque = CFilterEffect::IsOpaque(a3, a4);
  v14 = HIDWORD(v12);
  v15 = 1;
  v16 = !IsOpaque;
  v17 = *(_QWORD *)a1;
  if ( v16 )
    v14 = 1;
  HIDWORD(v30) = v14;
  v18 = (*(__int64 (__fastcall **)(struct IRenderTarget *, struct _LUID *, int *))(v17 + 120))(a1, &v32, &v28);
  v20 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x24u, 0LL);
  }
  else
  {
    if ( (int)CFilterEffect::ContainEffectInChainInputs(a3, 59LL) < 0
      && (int)CFilterEffect::ContainEffectInChainInputs(a3, 165LL) < 0 )
    {
      v15 = 0;
    }
    v34 = 46;
    v33 = "DWM Scratch Rendertarget (filter effect layer)";
    v21 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 144LL))(a1);
    v22 = CExternalLayer::CreateRenderTargetBitmap((__int64)&v33, a2, &v30, v32, v28, v21, 1, v15, &v29);
    v20 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x35u, 0LL);
      v6 = v29;
    }
    else
    {
      v24 = (CExternalLayer *)operator new(0x88uLL);
      v6 = v29;
      v26 = v24;
      if ( v24 )
      {
        CExternalLayer::CExternalLayer(v24, a2, v29);
        *((_QWORD *)v26 + 14) = a3;
        *(_QWORD *)v26 = &CFilterEffectLayer::`vftable';
      }
      else
      {
        v26 = 0LL;
      }
      *a6 = v26;
      if ( v26 )
      {
        *(_OWORD *)((char *)v26 + 120) = *(_OWORD *)a5;
      }
      else
      {
        v20 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, 0x8007000E, 0x3Bu, 0LL);
      }
    }
  }
  if ( v6 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v6 + 16LL))(v6);
  return v20;
}
