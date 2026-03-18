/*
 * XREFs of ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x180005314
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006AA20 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z @ 0x1800060A0 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z.c)
 *     ?GetConsistentIRenderTargetNoRef@CWindowBackgroundTreatment@@AEBAPEAVIRenderTarget@@PEBV2@@Z @ 0x180006120 (-GetConsistentIRenderTargetNoRef@CWindowBackgroundTreatment@@AEBAPEAVIRenderTarget@@PEBV2@@Z.c)
 *     ??4?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180006308 (--4-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVIRenderTarget@@@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@PEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@V?$_Uhash_compare@PEAVIRenderTarget@@U?$hash@PEAVIRenderTarget@@@std@@U?$equal_to@PEAVIRenderTarget@@@3@@std@@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVIRenderTarget@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180017924 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAVIRenderTarget@@@2@V-$tuple@$$V@2@@-$_H.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@PEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@V?$_Uhash_compare@PEAVIRenderTarget@@U?$hash@PEAVIRenderTarget@@@std@@U?$equal_to@PEAVIRenderTarget@@@3@@std@@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBQEAVIRenderTarget@@@Z @ 0x180017AF4 (-lower_bound@-$_Hash@V-$_Umap_traits@PEAVIRenderTarget@@V-$ComPtr@VCRenderTargetIma_ea_180017AF4.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18003BB3C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18003E014 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z @ 0x180047F78 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18006F20C (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180071500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800C24A4 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowBackgroundTreatment::GenerateImageSourceForEffectInput(
        struct D2D_RECT_F *this,
        struct CDrawingContext *a2)
{
  int v2; // edi
  FLOAT v3; // xmm0_4
  const struct IRenderTarget *v5; // rdx
  char right_low; // r13
  char *p_right; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  char top_high; // r15
  int BackdropImageFromRenderTarget; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // xmm1_8
  int v25; // eax
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // xmm1_8
  int v34; // eax
  unsigned int v35; // ecx
  _BYTE v36[8]; // [rsp+30h] [rbp-D0h] BYREF
  struct D2D_RECT_F v37; // [rsp+38h] [rbp-C8h] BYREF
  struct IRenderTarget *ConsistentIRenderTargetNoRef; // [rsp+48h] [rbp-B8h] BYREF
  struct CRenderTargetImageSource *v39; // [rsp+50h] [rbp-B0h] BYREF
  struct IRenderTarget *v40; // [rsp+58h] [rbp-A8h] BYREF
  struct D2D_SIZE_F v41; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v42[2]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v43; // [rsp+78h] [rbp-88h] BYREF
  __int128 v44; // [rsp+90h] [rbp-70h] BYREF
  char v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]

  v2 = 0;
  v3 = this[9].right - this[9].left;
  v40 = 0LL;
  v5 = (const struct IRenderTarget *)*((_QWORD *)a2 + 44);
  v39 = 0LL;
  right_low = 0;
  v36[0] = 0;
  v41.width = v3;
  v41.height = this[9].bottom - this[9].top;
  v43 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  p_right = (char *)&this[4].right;
  ConsistentIRenderTargetNoRef = CWindowBackgroundTreatment::GetConsistentIRenderTargetNoRef(
                                   (CWindowBackgroundTreatment *)this,
                                   v5);
  std::_Hash<std::_Umap_traits<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>,std::_Uhash_compare<IRenderTarget *,std::hash<IRenderTarget *>,std::equal_to<IRenderTarget *>>,std::allocator<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>,0>>::lower_bound(
    p_right,
    &v37,
    &ConsistentIRenderTargetNoRef);
  if ( *(_QWORD *)&v37.left != *(_QWORD *)&this[5].left )
  {
    std::_Hash<std::_Umap_traits<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>,std::_Uhash_compare<IRenderTarget *,std::hash<IRenderTarget *>,std::equal_to<IRenderTarget *>>,std::allocator<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>,0>>::lower_bound(
      &this[4].right,
      &v37,
      &ConsistentIRenderTargetNoRef);
    v28 = *(_QWORD *)&v37.left;
    if ( *(_QWORD *)&v37.left == *(_QWORD *)&this[5].left )
    {
      *(_QWORD *)&v37.left = &ConsistentIRenderTargetNoRef;
      std::_Hash<std::_Umap_traits<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>,std::_Uhash_compare<IRenderTarget *,std::hash<IRenderTarget *>,std::equal_to<IRenderTarget *>>,std::allocator<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<IRenderTarget * const &>,std::tuple<>>(
        &this[4].right,
        v42,
        v27,
        &v37);
      v28 = v42[0];
    }
    if ( *(_QWORD *)(v28 + 24) )
    {
      std::_Hash<std::_Umap_traits<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>,std::_Uhash_compare<IRenderTarget *,std::hash<IRenderTarget *>,std::equal_to<IRenderTarget *>>,std::allocator<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>,0>>::lower_bound(
        &this[4].right,
        &v37,
        &ConsistentIRenderTargetNoRef);
      v30 = *(_QWORD *)&v37.left;
      if ( *(_QWORD *)&v37.left == *(_QWORD *)&this[5].left )
      {
        *(_QWORD *)&v37.left = &ConsistentIRenderTargetNoRef;
        std::_Hash<std::_Umap_traits<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>,std::_Uhash_compare<IRenderTarget *,std::hash<IRenderTarget *>,std::equal_to<IRenderTarget *>>,std::allocator<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<IRenderTarget * const &>,std::tuple<>>(
          &this[4].right,
          v42,
          v29,
          &v37);
        v30 = v42[0];
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v30 + 24) + 96LL) + 32LL))(
        *(_QWORD *)(v30 + 24) + 96LL,
        (unsigned __int64)&this[3].right & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    }
    std::_Hash<std::_Umap_traits<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>,std::_Uhash_compare<IRenderTarget *,std::hash<IRenderTarget *>,std::equal_to<IRenderTarget *>>,std::allocator<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>,0>>::lower_bound(
      &this[4].right,
      &v37,
      &ConsistentIRenderTargetNoRef);
    v32 = *(_QWORD *)&v37.left;
    if ( *(_QWORD *)&v37.left == *(_QWORD *)&this[5].left )
    {
      *(_QWORD *)&v37.left = &ConsistentIRenderTargetNoRef;
      std::_Hash<std::_Umap_traits<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>,std::_Uhash_compare<IRenderTarget *,std::hash<IRenderTarget *>,std::equal_to<IRenderTarget *>>,std::allocator<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<IRenderTarget * const &>,std::tuple<>>(
        &this[4].right,
        v42,
        v31,
        &v37);
      v32 = v42[0];
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v32 + 24);
  }
  BYTE2(this[22].top) = 0;
  v9 = *(_QWORD *)&this[8].right;
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v9 + 96) + 32LL))(
      v9 + 96,
      (unsigned __int64)&this[3].right & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&this[8].right);
  }
  v10 = *(_QWORD *)&this[4].left;
  v46 = 0LL;
  v47 = 0LL;
  v44 = 0LL;
  *(_QWORD *)&this[23].left = &v44;
  v45 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 48LL))(v10, 19LL) )
  {
    v33 = *(_QWORD *)&this[10].left;
    this[12] = this[9];
    *(_QWORD *)&this[13].left = v33;
  }
  else
  {
    top_high = HIBYTE(this[22].top);
    right_low = LOBYTE(this[22].right);
    if ( top_high
      && (v37 = this[9],
          BackdropImageFromRenderTarget = CDrawingContext::GetBackdropImageFromRenderTarget(
                                            a2,
                                            &v37,
                                            0,
                                            (struct EffectInput *)&v44),
          v2 = BackdropImageFromRenderTarget,
          BackdropImageFromRenderTarget < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, BackdropImageFromRenderTarget, 0xC5u, 0LL);
    }
    else
    {
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v40);
      LODWORD(v37.right) = 31;
      *(_QWORD *)&v37.left = "DWM Window Background Treatment";
      if ( (int)CDrawingContext::PushOffScreenRenderingLayer(a2, (const struct CResourceTag *)&v37, &v41, 0, &v40) >= 0 )
      {
        v14 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
        v2 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xD6u, 0LL);
        }
        else
        {
          v16 = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, struct D2D_SIZE_F *, _BYTE *, __int128 *))(**(_QWORD **)&this[4].left + 200LL))(
                  *(_QWORD *)&this[4].left,
                  a2,
                  &v41,
                  v36,
                  &v43);
          v2 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xD9u, 0LL);
          }
          else if ( g_LockAndReadWindowBackdropTexture
                 && (v34 = (*(__int64 (__fastcall **)(struct IRenderTarget *, _QWORD, unsigned __int64))(*(_QWORD *)v40 + 216LL))(
                             v40,
                             *((_QWORD *)a2 + 48),
                             ((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL)),
                     v2 = v34,
                     v34 < 0) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0xDFu, 0LL);
          }
          else
          {
            (*(void (__fastcall **)(struct IRenderTarget *, _QWORD))(*(_QWORD *)v40 + 240LL))(
              v40,
              (unsigned int)DisplayId::None);
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v39);
            v18 = CRenderTargetImageSource::Create(v40, 0, 0LL, &v39);
            v2 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xE4u, 0LL);
            }
            else
            {
              v20 = (*(__int64 (__fastcall **)(char *, unsigned __int64))(*((_QWORD *)v39 + 12) + 24LL))(
                      (char *)v39 + 96,
                      (unsigned __int64)&this[3].right & -(__int64)(this != 0LL));
              v2 = v20;
              if ( v20 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xE9u, 0LL);
              }
              else
              {
                if ( top_high )
                {
                  std::_Hash<std::_Umap_traits<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>,std::_Uhash_compare<IRenderTarget *,std::hash<IRenderTarget *>,std::equal_to<IRenderTarget *>>,std::allocator<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>,0>>::lower_bound(
                    &this[4].right,
                    &v37,
                    &ConsistentIRenderTargetNoRef);
                  v23 = *(_QWORD *)&v37.left;
                  if ( *(_QWORD *)&v37.left == *(_QWORD *)&this[5].left )
                  {
                    *(_QWORD *)&v37.left = &ConsistentIRenderTargetNoRef;
                    std::_Hash<std::_Umap_traits<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>,std::_Uhash_compare<IRenderTarget *,std::hash<IRenderTarget *>,std::equal_to<IRenderTarget *>>,std::allocator<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<IRenderTarget * const &>,std::tuple<>>(
                      &this[4].right,
                      v42,
                      v22,
                      &v37);
                    v23 = v42[0];
                  }
                  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::operator=(v23 + 24, &v39);
                  (*(void (__fastcall **)(struct IRenderTarget *, struct D2D_RECT_F *))(*(_QWORD *)ConsistentIRenderTargetNoRef
                                                                                      + 192LL))(
                    ConsistentIRenderTargetNoRef,
                    this);
                }
                else
                {
                  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::operator=(&this[8].right, &v39);
                }
                v24 = *(_QWORD *)&this[10].left;
                this[12] = this[9];
                *(_QWORD *)&this[13].left = v24;
                if ( top_high && !*(_BYTE *)(*((_QWORD *)a2 + 757) + 32LL) )
                  BYTE2(this[22].top) = 1;
              }
            }
          }
          CDrawingContext::PopTransformInternal(a2, 1);
        }
        v25 = CDrawingContext::PopLayer(a2);
        if ( v25 < 0 && v2 >= 0 )
          v2 = v25;
      }
    }
  }
  if ( CWindowBackgroundTreatment::HasValidSource((CWindowBackgroundTreatment *)this, ConsistentIRenderTargetNoRef)
    && right_low )
  {
    *(_QWORD *)&this[23].right = *(_QWORD *)(*(_QWORD *)&this[1].left + 496LL);
  }
  *(_QWORD *)&this[23].left = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((char *)&v44 + 8);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v44);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v39);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v40);
  return (unsigned int)v2;
}
