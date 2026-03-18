/*
 * XREFs of ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180048740
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18001C3C0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180049690 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008B068 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18008C84C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18008D6A8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x1800CEAD0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?GetBounds@CVisualTree@@QEAAXPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EE398 (-GetBounds@CVisualTree@@QEAAXPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?ProcessOffTheadPreComputeRequests@CComposition@@IEAAPEAU_SLIST_ENTRY@@XZ @ 0x18014BB54 (-ProcessOffTheadPreComputeRequests@CComposition@@IEAAPEAU_SLIST_ENTRY@@XZ.c)
 *     ?EnsureDirtyRegion@CHwndRenderTarget@@IEAAJXZ @ 0x18015AD70 (-EnsureDirtyRegion@CHwndRenderTarget@@IEAAJXZ.c)
 *     ?PreRender@COverlayRenderTargetEngine@@UEAAJXZ @ 0x18015EB10 (-PreRender@COverlayRenderTargetEngine@@UEAAJXZ.c)
 *     ?PreRender@CRemoteAppRenderTarget@@UEAAJXZ @ 0x18015FAC0 (-PreRender@CRemoteAppRenderTarget@@UEAAJXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180160760 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180177458 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?PreCompute@CHolographicInteropTarget@@AEAAJXZ @ 0x180210E28 (-PreCompute@CHolographicInteropTarget@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?Optimize@CDirtyRegion@@QEAAXW4DirtyRegionOptimization@@@Z @ 0x1800461B0 (-Optimize@CDirtyRegion@@QEAAXW4DirtyRegionOptimization@@@Z.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180048EC8 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x18004B1E0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 *     ?UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z @ 0x180067C68 (-UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z.c)
 *     ?UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z @ 0x1800753F0 (-UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180078FF4 (--0CThreadContext@@AEAA@XZ.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800A9C8C (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq @ 0x1801491D8 (McTemplateU0xq.c)
 *     McTemplateU0x @ 0x180149D54 (McTemplateU0x.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CVisualTree::PreCompute(struct CVisualTree *a1, __int128 *a2)
{
  __int64 v2; // r14
  volatile signed __int32 *v3; // rbx
  int v5; // r12d
  _QWORD *v6; // rsi
  __int64 v7; // rax
  _DWORD *Value; // rdi
  int v9; // ecx
  _QWORD **v10; // r15
  _DWORD *v11; // r13
  int v12; // ecx
  volatile signed __int32 *v13; // rdi
  unsigned int v14; // ecx
  __int128 v15; // xmm6
  __int64 v16; // rdi
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  int i; // edi
  __int64 v21; // rcx
  int v22; // r10d
  unsigned int v23; // r8d
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // r9
  int j; // edi
  __int64 v28; // rcx
  int v30; // eax
  unsigned int v31; // ecx
  CVisual *v32; // rdi
  __int64 v33; // r15
  unsigned int v34; // eax
  char *v35; // r15
  __int64 v36; // r13
  int updated; // eax
  unsigned int v38; // ecx
  int v39; // eax
  unsigned int v40; // ecx
  CThreadContext *v41; // rax
  unsigned int v42; // ecx
  CThreadContext *v43; // rax
  CThreadContext *v44; // rax
  unsigned int v45; // ecx
  CThreadContext *v46; // rax
  _QWORD *v47; // rcx
  unsigned int v48; // ecx
  volatile signed __int32 *v49; // [rsp+30h] [rbp-68h]
  __int64 v50; // [rsp+38h] [rbp-60h]
  void *retaddr; // [rsp+98h] [rbp+0h]

  v2 = 0LL;
  v3 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v49 = 0LL;
  v7 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 368LL);
  v50 = v7;
  if ( *((_BYTE *)a1 + 33) )
  {
    v5 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, -2003292412, 0x159u);
    return (unsigned int)v5;
  }
  *((_BYTE *)a1 + 33) = 1;
  if ( *((_QWORD *)a1 + 161) != v7 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
      McTemplateU0xq(a1, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Start, a1, *((unsigned __int8 *)a1 + 32));
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      v41 = (CThreadContext *)operator new(0x128uLL);
      if ( !v41 || (v43 = CThreadContext::CThreadContext(v41), (Value = v43) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, -2147024882, 0x42u);
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v43);
    }
    v9 = Value[67];
    if ( v9 )
    {
      v6 = (_QWORD *)*((_QWORD *)Value + 34);
      *((_QWORD *)Value + 34) = *v6;
      Value[67] = v9 - 1;
    }
    if ( !v6 )
    {
      v6 = HeapAlloc(WPF::g_processHeap, 0, 0xB48uLL);
      if ( !v6 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    *((_DWORD *)v6 + 2) = 0;
    v10 = (_QWORD **)(v6 + 160);
    *((_DWORD *)v6 + 238) = 0;
    *v6 = &CDirtyRegion::`vftable';
    v6[162] = v6 + 160;
    v6[163] = v6 + 160;
    v6[161] = v6 + 162;
    v6[160] = v6 + 162;
    *((_DWORD *)v6 + 712) = 0;
    *((_BYTE *)v6 + 2880) = 0;
    v6[36] = v6 + 35;
    v6[35] = v6 + 35;
    v6[38] = v6 + 37;
    v6[37] = v6 + 37;
    v6[40] = v6 + 39;
    v6[39] = v6 + 39;
    v6[42] = v6 + 41;
    v6[41] = v6 + 41;
    v6[44] = v6 + 43;
    v6[43] = v6 + 43;
    v6[46] = v6 + 45;
    v6[45] = v6 + 45;
    v6[48] = v6 + 47;
    v6[47] = v6 + 47;
    v6[50] = v6 + 49;
    v6[49] = v6 + 49;
    (*(void (__fastcall **)(_QWORD *))*v6)(v6);
    v11 = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !v11 )
    {
      v44 = (CThreadContext *)operator new(0x128uLL);
      if ( !v44 || (v46 = CThreadContext::CThreadContext(v44), (v11 = v46) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, -2147024882, 0x42u);
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v46);
    }
    v12 = v11[71];
    v13 = 0LL;
    if ( v12 )
    {
      v13 = (volatile signed __int32 *)*((_QWORD *)v11 + 36);
      *((_QWORD *)v11 + 36) = *(_QWORD *)v13;
      v11[71] = v12 - 1;
    }
    if ( v13 || (v13 = (volatile signed __int32 *)HeapAlloc(WPF::g_processHeap, 0, 0x1A8uLL)) != 0LL )
    {
      memset_0((void *)v13, 0, 0x1A8uLL);
      *((_DWORD *)v13 + 2) = 0;
      *(_QWORD *)v13 = &CBackdropRegion::`vftable';
      *((_QWORD *)v13 + 2) = v13 + 10;
      *((_QWORD *)v13 + 3) = v13 + 10;
      *((_QWORD *)v13 + 4) = v13 + 106;
    }
    else
    {
      v13 = 0LL;
    }
    if ( !v13 )
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x12u);
      MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, -2147024882, 0xFDu);
LABEL_38:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0x(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Stop,
          a1,
          v26);
      goto LABEL_40;
    }
    _InterlockedIncrement(v13 + 2);
    v3 = v13;
    v49 = v13;
    if ( a2 )
      v15 = *a2;
    else
      v15 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    if ( !g_bUseDirtyRegion )
      LOBYTE(v5) = 1;
    v16 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 368LL);
    memset_0(v6 + 3, 0, 0x80uLL);
    memset_0(v6 + 67, 0, 0x120uLL);
    v6[2] = v16;
    *((_DWORD *)v6 + 719) = 1065353216;
    *(_WORD *)((char *)v6 + 2885) = 0;
    *((_DWORD *)v6 + 714) = 0;
    *((_DWORD *)v6 + 319) = 0;
    *((_BYTE *)v6 + 2884) = 0;
    *(_WORD *)((char *)v6 + 2881) = 0;
    *((_BYTE *)v6 + 2883) = (_BYTE)v5 != 0;
    *(_OWORD *)((char *)v6 + 2860) = v15;
    if ( !*((_BYTE *)v6 + 2880) )
    {
      v6[36] = v6 + 35;
      v6[35] = v6 + 35;
      v6[38] = v6 + 37;
      v6[37] = v6 + 37;
      v6[40] = v6 + 39;
      v6[39] = v6 + 39;
      v6[42] = v6 + 41;
      v6[41] = v6 + 41;
      v6[44] = v6 + 43;
      v6[43] = v6 + 43;
      v6[46] = v6 + 45;
      v6[45] = v6 + 45;
      v6[48] = v6 + 47;
      v6[47] = v6 + 47;
      v6[50] = v6 + 49;
      v6[49] = v6 + 49;
      v17 = (_QWORD *)v6[161];
      if ( (_QWORD **)*v17 != v10 || (v18 = (_QWORD *)v17[1], (_QWORD *)*v18 != v17) )
        __fastfail(3u);
      v6[161] = v18;
      *v18 = v10;
      while ( 1 )
      {
        v19 = *v10;
        if ( *v10 == v10 )
          break;
        if ( (_QWORD **)v19[1] != v10 || (v47 = (_QWORD *)*v19, *(_QWORD **)(*v19 + 8LL) != v19) )
          __fastfail(3u);
        *v10 = v47;
        v47[1] = v10;
        WPF::ProcessHeapImpl::Free(v19);
      }
      v6[162] = v6 + 160;
      v6[163] = v6 + 160;
      v6[161] = v6 + 162;
      v6[160] = v6 + 162;
      *((_DWORD *)v6 + 712) = 0;
    }
    v6[20] = 0LL;
    v6[19] = 0LL;
    *((_BYTE *)v6 + 420) = 1;
    *(_QWORD *)((char *)v6 + 412) = 0LL;
    *((_DWORD *)v6 + 102) = 0;
    v6[4] = 0LL;
    v6[3] = 0LL;
    v6[22] = 0LL;
    v6[21] = 0LL;
    *((_BYTE *)v6 + 436) = 1;
    *(_QWORD *)((char *)v6 + 428) = 0LL;
    *((_DWORD *)v6 + 106) = 0;
    v6[6] = 0LL;
    v6[5] = 0LL;
    v6[24] = 0LL;
    v6[23] = 0LL;
    *((_BYTE *)v6 + 452) = 1;
    *(_QWORD *)((char *)v6 + 444) = 0LL;
    *((_DWORD *)v6 + 110) = 0;
    v6[8] = 0LL;
    v6[7] = 0LL;
    v6[26] = 0LL;
    v6[25] = 0LL;
    *((_BYTE *)v6 + 468) = 1;
    *(_QWORD *)((char *)v6 + 460) = 0LL;
    *((_DWORD *)v6 + 114) = 0;
    v6[10] = 0LL;
    v6[9] = 0LL;
    v6[28] = 0LL;
    v6[27] = 0LL;
    *((_BYTE *)v6 + 484) = 1;
    *(_QWORD *)((char *)v6 + 476) = 0LL;
    *((_DWORD *)v6 + 118) = 0;
    v6[12] = 0LL;
    v6[11] = 0LL;
    v6[30] = 0LL;
    v6[29] = 0LL;
    *((_BYTE *)v6 + 500) = 1;
    *(_QWORD *)((char *)v6 + 492) = 0LL;
    *((_DWORD *)v6 + 122) = 0;
    v6[14] = 0LL;
    v6[13] = 0LL;
    v6[32] = 0LL;
    v6[31] = 0LL;
    *((_BYTE *)v6 + 516) = 1;
    *(_QWORD *)((char *)v6 + 508) = 0LL;
    *((_DWORD *)v6 + 126) = 0;
    v6[16] = 0LL;
    v6[15] = 0LL;
    v6[34] = 0LL;
    v6[33] = 0LL;
    *((_BYTE *)v6 + 532) = 1;
    *(_QWORD *)((char *)v6 + 524) = 0LL;
    *((_DWORD *)v6 + 130) = 0;
    v6[18] = 0LL;
    v6[17] = 0LL;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 3) + 88LL) & 0x7F) != 0 )
    {
      v30 = CPreComputeContext::PreCompute(
              (struct CVisualTree *)((char *)a1 + 64),
              a1,
              (struct CDirtyRegion *)v6,
              (struct CBackdropRegion *)v3);
      v5 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x119u);
        goto LABEL_38;
      }
    }
    else
    {
      v5 = 0;
      if ( !*((_BYTE *)a1 + 32) )
      {
        updated = CPreComputeContext::UpdateTransformChildren((struct CVisualTree *)((char *)a1 + 64), a1, 1);
        if ( updated < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, updated, 0x121u);
        v39 = CPreComputeContext::UpdateProjectedShadowCasters((struct CVisualTree *)((char *)a1 + 64), a1, 1);
        v5 = v39;
        if ( v39 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x124u);
          goto LABEL_38;
        }
      }
    }
    for ( i = *((_DWORD *)a1 + 318); i > 0; --i )
    {
      v21 = *(_QWORD *)(*((_QWORD *)a1 + 156) + 8LL * (unsigned int)(i - 1));
      (*(void (__fastcall **)(__int64, struct CVisualTree *, _QWORD *, volatile signed __int32 *))(*(_QWORD *)v21 + 32LL))(
        v21,
        a1,
        v6,
        v3);
    }
    v22 = 1;
    if ( qword_180308258 && (v23 = *((_DWORD *)qword_180308258 + 18), v24 = 0, v23) )
    {
      while ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)qword_180308258 + 6) + 8LL * v24) + 320LL) )
      {
        if ( ++v24 >= v23 )
          goto LABEL_33;
      }
      v25 = *((_QWORD *)a1 + 2);
    }
    else
    {
LABEL_33:
      v25 = *((_QWORD *)a1 + 2);
      if ( !*(_DWORD *)(*(_QWORD *)(v25 + 64) + 100LL) )
      {
LABEL_34:
        if ( *(_DWORD *)(v25 + 1200) )
          v22 = 0;
        CDirtyRegion::Optimize((__int64)v6, v22);
        if ( !CDirtyRegion::IsEmpty((CDirtyRegion *)v6) )
        {
          v32 = *(CVisual **)(*((_QWORD *)a1 + 3) + 80LL);
          if ( v32 )
          {
            v33 = 2860LL;
            if ( !*((_BYTE *)v6 + 2883) )
              v33 = 1116LL;
            v34 = *((_DWORD *)v6 + 319);
            v35 = (char *)v6 + v33;
            if ( v34 )
            {
              v36 = v34;
              do
              {
                CVisual::AddAdditionalDirtyRects(v32, (struct D2D_RECT_F *)&v35[v2]);
                v2 += 16LL;
                --v36;
              }
              while ( v36 );
            }
          }
        }
        *((_QWORD *)a1 + 161) = v50;
        goto LABEL_38;
      }
    }
    v22 = 0;
    goto LABEL_34;
  }
LABEL_40:
  *((_BYTE *)a1 + 33) = 0;
  if ( v5 < 0 )
  {
LABEL_44:
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
    goto LABEL_46;
  }
  if ( v6 )
  {
    for ( j = *((_DWORD *)a1 + 318); j > 0; --j )
    {
      v28 = *(_QWORD *)(*((_QWORD *)a1 + 156) + 8LL * (unsigned int)(j - 1));
      (*(void (__fastcall **)(__int64, struct CVisualTree *, _QWORD *))(*(_QWORD *)v28 + 24LL))(v28, a1, v6);
    }
    goto LABEL_44;
  }
LABEL_46:
  if ( v3 && _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v49 + 16LL))(v49, 1LL);
  return (unsigned int)v5;
}
