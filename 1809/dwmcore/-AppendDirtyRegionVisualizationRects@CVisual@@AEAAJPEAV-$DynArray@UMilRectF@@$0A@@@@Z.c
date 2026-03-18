/*
 * XREFs of ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801B60FC
 * Callers:
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180162930 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18006B6A8 (--0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z @ 0x1800EF06C (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z.c)
 *     ??4?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIDisplayDevice@Core@Display@Devices@Windows@@@Z @ 0x1800EF5B8 (--4-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@XZ @ 0x180165610 (-GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimat.c)
 *     ?_Buy@?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@AEAA_N_K@Z @ 0x180167654 (-_Buy@-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@AEAA_N_K@Z.c)
 *     ?_Tidy@?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@AEAAXXZ @ 0x1801676C4 (-_Tidy@-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@AEAAXXZ.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801A3998 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 *     ?SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@@Z @ 0x1801B8414 (-SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnima.c)
 *     ?push_back@?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@QEAAX$$QEAV?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@2@@Z @ 0x1801B89D4 (-push_back@-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@.c)
 */

__int64 __fastcall CVisual::AppendDirtyRegionVisualizationRects(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  void *v5; // r14
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  int v13; // r9d
  __int128 v14; // xmm0
  CKeyframeAnimation *v15; // rax
  CKeyframeAnimation *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rdi
  _QWORD *v19; // r15
  _OWORD *v20; // rax
  __int64 v21; // r15
  void *v22; // rax
  char v23; // al
  char *v24; // r12
  size_t v25; // r15
  char *v26; // rax
  __int64 v27; // rax
  __int64 DirtyRegionVisualizationData; // rax
  __int64 v30; // [rsp+28h] [rbp-E0h]
  unsigned int v31; // [rsp+28h] [rbp-E0h]
  __int64 v32; // [rsp+30h] [rbp-D8h]
  __int64 v33; // [rsp+38h] [rbp-D0h]
  __int64 v34; // [rsp+40h] [rbp-C8h]
  __int64 v35; // [rsp+48h] [rbp-C0h]
  __int64 v36; // [rsp+58h] [rbp-B0h]
  __int64 v37; // [rsp+68h] [rbp-A0h]
  __int64 v38; // [rsp+70h] [rbp-98h]
  _QWORD *v39; // [rsp+88h] [rbp-80h] BYREF
  __int64 v40; // [rsp+90h] [rbp-78h] BYREF
  void *v41[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-60h]
  void *Src[2]; // [rsp+B0h] [rbp-58h]
  _QWORD v44[3]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v45; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD *v46; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v47; // [rsp+E8h] [rbp-20h] BYREF

  v4 = 0;
  v5 = 0LL;
  v40 = 0LL;
  v39 = 0LL;
  if ( !*(_DWORD *)(a2 + 24) )
    goto LABEL_33;
  v6 = WPF::ProcessHeapImpl::AllocClear(0x58uLL);
  v7 = (__int64)v6;
  if ( v6 )
  {
    v6[2] = *(_QWORD *)(a1 + 16);
    *((_DWORD *)v6 + 2) = 0;
    v6[3] = 0LL;
    v6[5] = 0LL;
    *((_DWORD *)v6 + 8) = 0;
    v6[8] = 0LL;
    *v6 = &CColorBrush::`vftable'{for `CContent'};
    v6[7] = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
  }
  else
  {
    v7 = 0LL;
  }
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>::operator=(&v40, v7);
  v9 = v40;
  if ( !v40 )
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x177Au);
    goto LABEL_33;
  }
  v47 = _xmm;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v40 + 88LL))(v40, 0LL, 70LL, &v47);
  v4 = v10;
  if ( v10 < 0 )
  {
    v31 = 6012;
    goto LABEL_29;
  }
  v12 = HeapAlloc(WPF::g_processHeap, 0, 0x60uLL);
  v5 = v12;
  if ( v12 )
  {
    *v12 = 0LL;
    *((_DWORD *)v12 + 6) = 3;
    v14 = *(_OWORD *)(v9 + 72);
    v12[6] = 1065353216LL;
    *((_DWORD *)v12 + 18) = 1;
    *(_OWORD *)Src = v14;
    HIDWORD(Src[1]) = 0;
    *((_OWORD *)v12 + 5) = *(_OWORD *)Src;
    v15 = (CKeyframeAnimation *)WPF::ProcessHeapImpl::AllocClear(0x210uLL);
    if ( v15 )
      v16 = CKeyframeAnimation::CKeyframeAnimation(v15, *(struct CComposition **)(a1 + 16));
    else
      v16 = 0LL;
    wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>::operator=(
      (__int64 *)&v39,
      (__int64)v16);
    v18 = v39;
    if ( !v39 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024882, 0x178Cu);
      goto LABEL_31;
    }
    v10 = CKeyframeAnimation::Initialize(
            (__int64)v39,
            (struct CResource *)v9,
            0,
            0x46u,
            v30,
            v32,
            v33,
            v34,
            v35,
            1.0,
            v36,
            0.0,
            v37,
            v38,
            (__int64)v5);
    v4 = v10;
    if ( v10 >= 0 )
    {
      if ( (**(_DWORD **)(a1 + 224) & 0x40000) == 0 )
      {
        v19 = HeapAlloc(WPF::g_processHeap, 0, 0x28uLL);
        if ( v19 )
        {
          *v19 = 0LL;
          v19[1] = 0LL;
          v19[2] = 0LL;
          v19[3] = 0LL;
          v19[4] = 0LL;
          v20 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
          *v19 = v20;
          *v20 = 0LL;
          *(_QWORD *)*v19 = v19;
        }
        else
        {
          v19 = 0LL;
        }
        if ( !v19 )
        {
          v13 = -2147024882;
          v31 = 6049;
          v4 = -2147024882;
          goto LABEL_30;
        }
        CVisual::SetDirtyRegionVisualizationData(a1, v19);
      }
      v21 = *(unsigned int *)(a2 + 24);
      v22 = *(void **)a2;
      v42 = 0LL;
      Src[0] = v22;
      *(_OWORD *)v41 = 0LL;
      v23 = std::vector<MilRectF>::_Buy((__int64 *)v41, (unsigned int)v21);
      v24 = (char *)v41[0];
      if ( v23 )
      {
        v25 = 16 * v21;
        memmove_0(v41[0], Src[0], v25);
        v26 = &v24[v25];
      }
      else
      {
        v26 = (char *)v41[1];
      }
      v44[1] = v26;
      v44[2] = v42;
      v44[0] = v24;
      *(_OWORD *)v41 = 0LL;
      v42 = 0LL;
      wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
        &v45,
        v9);
      v27 = *v18;
      v46 = v18;
      (*(void (__fastcall **)(_QWORD *))(v27 + 8))(v18);
      DirtyRegionVisualizationData = CVisual::GetDirtyRegionVisualizationData(a1);
      std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::push_back(
        DirtyRegionVisualizationData,
        v44);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v46);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v45);
      std::vector<MilRectF>::_Tidy((__int64)v44);
      std::vector<MilRectF>::_Tidy((__int64)v41);
      goto LABEL_31;
    }
    v31 = 6044;
LABEL_29:
    v13 = v10;
    goto LABEL_30;
  }
  v13 = -2147024882;
  v31 = 6015;
  v4 = -2147024882;
LABEL_30:
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v13, v31);
LABEL_31:
  if ( v5 )
    WPF::ProcessHeapImpl::Free(v5);
LABEL_33:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v39);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v40);
  return v4;
}
