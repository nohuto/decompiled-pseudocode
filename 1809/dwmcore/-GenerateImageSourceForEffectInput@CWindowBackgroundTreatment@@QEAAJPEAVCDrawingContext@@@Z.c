/*
 * XREFs of ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x180002F58
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180033750 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z @ 0x1800042E0 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z.c)
 *     ?GetConsistentIRenderTargetNoRef@CWindowBackgroundTreatment@@AEBAPEAVIRenderTarget@@PEBV2@@Z @ 0x180004360 (-GetConsistentIRenderTargetNoRef@CWindowBackgroundTreatment@@AEBAPEAVIRenderTarget@@PEBV2@@Z.c)
 *     ??4?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800044F8 (--4-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$_Try_emplace@AEBQEAVIRenderTarget@@$$V@?$unordered_map@PEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@U?$hash@PEAVIRenderTarget@@@std@@U?$equal_to@PEAVIRenderTarget@@@6@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@6@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBQEAVIRenderTarget@@@Z @ 0x1800172C0 (--$_Try_emplace@AEBQEAVIRenderTarget@@$$V@-$unordered_map@PEAVIRenderTarget@@V-$ComPtr@VCRenderT.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@_K@Z @ 0x180017500 (-_End@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V-$_Uh.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18002EACC (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x18004DED0 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18005E3D8 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180064348 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006726C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18008DF04 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowBackgroundTreatment::GenerateImageSourceForEffectInput(
        struct D2D_RECT_F *this,
        struct CDrawingContext *a2)
{
  FLOAT v2; // xmm0_4
  const struct IRenderTarget *v4; // rdx
  int v6; // esi
  char v7; // r12
  struct IRenderTarget *v8; // rbx
  unsigned __int64 v9; // r11
  _QWORD *v10; // rax
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 v13; // rcx
  char top_high; // r12
  int BackdropImageFromRenderTarget; // eax
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // ecx
  struct IRenderTarget *v21; // rbx
  int v22; // eax
  unsigned int v23; // ecx
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // xmm1_8
  int v27; // eax
  __int64 v29; // xmm1_8
  int v30; // eax
  unsigned int v31; // ecx
  char right_low; // [rsp+30h] [rbp-A9h]
  _BYTE v33[7]; // [rsp+31h] [rbp-A8h] BYREF
  struct D2D_RECT_F v34; // [rsp+38h] [rbp-A1h] BYREF
  struct IRenderTarget *ConsistentIRenderTargetNoRef; // [rsp+48h] [rbp-91h] BYREF
  struct CRenderTargetImageSource *v36; // [rsp+50h] [rbp-89h] BYREF
  struct IRenderTarget *v37; // [rsp+58h] [rbp-81h] BYREF
  struct D2D_SIZE_F v38; // [rsp+60h] [rbp-79h] BYREF
  __int128 v39; // [rsp+68h] [rbp-71h] BYREF
  __int128 v40; // [rsp+80h] [rbp-59h] BYREF
  char v41; // [rsp+90h] [rbp-49h]
  __int64 v42; // [rsp+B0h] [rbp-29h]
  __int64 v43; // [rsp+B8h] [rbp-21h]

  v2 = this[9].right - this[9].left;
  v37 = 0LL;
  v4 = (const struct IRenderTarget *)*((_QWORD *)a2 + 44);
  v6 = 0;
  v36 = 0LL;
  v33[0] = 0;
  v7 = 0;
  v38.width = v2;
  v38.height = this[9].bottom - this[9].top;
  v39 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  ConsistentIRenderTargetNoRef = CWindowBackgroundTreatment::GetConsistentIRenderTargetNoRef(
                                   (CWindowBackgroundTreatment *)this,
                                   v4);
  v8 = ConsistentIRenderTargetNoRef;
  v9 = *(_QWORD *)&this[7].right & std::_Hash_bytes((const unsigned __int8 *)&ConsistentIRenderTargetNoRef, 8uLL);
  while ( 1 )
  {
    v10 = (_QWORD *)std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_End(
                      &this[4].right,
                      &v34,
                      v9);
    if ( v11 == *v10 )
      break;
    if ( *(struct IRenderTarget **)(v11 + 16) == v8 )
      goto LABEL_4;
  }
  v11 = *(_QWORD *)&this[5].left;
LABEL_4:
  if ( v11 != *(_QWORD *)&this[5].left )
  {
    std::unordered_map<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>::_Try_emplace<IRenderTarget * const &,>(
      &this[4].right,
      &v34,
      &ConsistentIRenderTargetNoRef);
    if ( *(_QWORD *)(*(_QWORD *)&v34.left + 24LL) )
    {
      std::unordered_map<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>::_Try_emplace<IRenderTarget * const &,>(
        &this[4].right,
        &v34,
        &ConsistentIRenderTargetNoRef);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v34.left + 24LL) + 96LL) + 32LL))(
        *(_QWORD *)(*(_QWORD *)&v34.left + 24LL) + 96LL,
        (unsigned __int64)&this[3].right & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    }
    std::unordered_map<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>::_Try_emplace<IRenderTarget * const &,>(
      &this[4].right,
      &v34,
      &ConsistentIRenderTargetNoRef);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(*(_QWORD *)&v34.left + 24LL);
  }
  BYTE2(this[22].top) = 0;
  v12 = *(_QWORD *)&this[8].right;
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v12 + 96) + 32LL))(
      v12 + 96,
      (unsigned __int64)&this[3].right & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&this[8].right);
  }
  v13 = *(_QWORD *)&this[4].left;
  v42 = 0LL;
  v43 = 0LL;
  v40 = 0LL;
  *(_QWORD *)&this[23].left = &v40;
  v41 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 48LL))(v13, 19LL) )
  {
    v29 = *(_QWORD *)&this[10].left;
    this[12] = this[9];
    *(_QWORD *)&this[13].left = v29;
  }
  else
  {
    top_high = HIBYTE(this[22].top);
    right_low = LOBYTE(this[22].right);
    if ( top_high
      && (v34 = this[9],
          BackdropImageFromRenderTarget = CDrawingContext::GetBackdropImageFromRenderTarget(
                                            a2,
                                            &v34,
                                            0,
                                            (struct EffectInput *)&v40),
          v6 = BackdropImageFromRenderTarget,
          BackdropImageFromRenderTarget < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, BackdropImageFromRenderTarget, 0xC5u);
    }
    else
    {
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v37);
      LODWORD(v34.right) = 31;
      *(_QWORD *)&v34.left = "DWM Window Background Treatment";
      if ( (int)CDrawingContext::PushOffScreenRenderingLayer(a2, (const struct CResourceTag *)&v34, &v38, 0, &v37) >= 0 )
      {
        v17 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
        v6 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xD6u);
        }
        else
        {
          v19 = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, struct D2D_SIZE_F *, _BYTE *, __int128 *))(**(_QWORD **)&this[4].left + 160LL))(
                  *(_QWORD *)&this[4].left,
                  a2,
                  &v38,
                  v33,
                  &v39);
          v6 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xD9u);
          }
          else
          {
            v21 = v37;
            if ( g_LockAndReadWindowBackdropTexture
              && (v30 = (*(__int64 (__fastcall **)(struct IRenderTarget *, _QWORD, unsigned __int64))(*(_QWORD *)v37 + 216LL))(
                          v37,
                          *((_QWORD *)a2 + 48),
                          ((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL)),
                  v6 = v30,
                  v30 < 0) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0xDFu);
            }
            else
            {
              (*(void (__fastcall **)(struct IRenderTarget *, _QWORD))(*(_QWORD *)v21 + 240LL))(v21, DisplayId::None);
              Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v36);
              v22 = CRenderTargetImageSource::Create(v21, 0, &v36);
              v6 = v22;
              if ( v22 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xE4u);
              }
              else
              {
                v24 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)v36 + 12) + 24LL))(
                        (char *)v36 + 96,
                        (unsigned __int64)&this[3].right & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
                v6 = v24;
                if ( v24 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xE9u);
                }
                else
                {
                  if ( top_high )
                  {
                    std::unordered_map<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>::_Try_emplace<IRenderTarget * const &,>(
                      &this[4].right,
                      &v34,
                      &ConsistentIRenderTargetNoRef);
                    Microsoft::WRL::ComPtr<CRenderTargetImageSource>::operator=(*(_QWORD *)&v34.left + 24LL, &v36);
                    (*(void (__fastcall **)(struct IRenderTarget *, struct D2D_RECT_F *))(*(_QWORD *)ConsistentIRenderTargetNoRef
                                                                                        + 192LL))(
                      ConsistentIRenderTargetNoRef,
                      this);
                  }
                  else
                  {
                    Microsoft::WRL::ComPtr<CRenderTargetImageSource>::operator=(&this[8].right, &v36);
                  }
                  v26 = *(_QWORD *)&this[10].left;
                  this[12] = this[9];
                  *(_QWORD *)&this[13].left = v26;
                  if ( top_high && !*(_BYTE *)(*((_QWORD *)a2 + 757) + 32LL) )
                    BYTE2(this[22].top) = 1;
                }
              }
            }
          }
          CDrawingContext::PopTransformInternal(a2, 1);
        }
        v27 = CDrawingContext::PopLayer(a2);
        if ( v27 < 0 && v6 >= 0 )
          v6 = v27;
      }
    }
    v7 = right_low;
  }
  if ( CWindowBackgroundTreatment::HasValidSource((CWindowBackgroundTreatment *)this, ConsistentIRenderTargetNoRef)
    && v7 )
  {
    *(_QWORD *)&this[23].right = *(_QWORD *)(*(_QWORD *)&this[1].left + 480LL);
  }
  *(_QWORD *)&this[23].left = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((char *)&v40 + 8);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v40);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v36);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v37);
  return (unsigned int)v6;
}
