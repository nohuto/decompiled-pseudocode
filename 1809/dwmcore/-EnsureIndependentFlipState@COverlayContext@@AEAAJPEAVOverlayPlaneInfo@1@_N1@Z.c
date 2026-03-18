/*
 * XREFs of ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x18016AFFC
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18004A458 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x18004CC60 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800D7DB8 (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z @ 0x18016C614 (-SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z.c)
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x180178FBC (-EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z.c)
 * Callees:
 *     ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x1800207E4 (-UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180030B00 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x1800A1078 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ @ 0x1800A12BC (-EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?AlwaysNeedsRenderPass@CRenderTargetManager@@QEAA_NXZ @ 0x180168BD0 (-AlwaysNeedsRenderPass@CRenderTargetManager@@QEAA_NXZ.c)
 *     ?HasDWMClones@CRenderTargetManager@@QEAA_NXZ @ 0x18016B50C (-HasDWMClones@CRenderTargetManager@@QEAA_NXZ.c)
 *     ?IsFullscreenSingleMonitor@COverlayContext@@AEBA_NXZ @ 0x18016BBE4 (-IsFullscreenSingleMonitor@COverlayContext@@AEBA_NXZ.c)
 *     ?HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ @ 0x1801BC674 (-HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ.c)
 *     ?RecordIndependentFlipInfo@CCompositionSurfaceInfo@@QEAAJ_KI_N1IIPEA_N@Z @ 0x1801BD0CC (-RecordIndependentFlipInfo@CCompositionSurfaceInfo@@QEAAJ_KI_N1IIPEA_N@Z.c)
 */

__int64 __fastcall COverlayContext::EnsureIndependentFlipState(
        COverlayContext *this,
        struct COverlayContext::OverlayPlaneInfo *a2,
        char a3,
        char a4)
{
  unsigned int v4; // r12d
  char v5; // r15
  char v7; // di
  __int64 i; // rax
  unsigned int v11; // r14d
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // r8d
  unsigned __int64 v15; // rdx
  CCompositionSurfaceInfo *v16; // rcx
  bool v17; // zf
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v22; // [rsp+30h] [rbp-30h]
  bool v23; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v24; // [rsp+44h] [rbp-1Ch] BYREF
  float v25[4]; // [rsp+48h] [rbp-18h] BYREF

  v4 = 0;
  v5 = 0;
  v24 = 0;
  v7 = a3;
  if ( a3 )
  {
    if ( *((_BYTE *)this + 13413)
      || !*((_BYTE *)this + 13427)
      || !*((_BYTE *)a2 + 186)
      || CRenderTargetManager::HasDWMClones(*(CRenderTargetManager **)(*((_QWORD *)this + 1680) + 64LL)) )
    {
      v7 = 0;
    }
    if ( v7 )
    {
      if ( *((_BYTE *)this + 13428) )
      {
        for ( i = 0LL; i < 4; ++i )
          v25[i] = (float)*((int *)a2 + i + 15);
        v7 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((float *)this + 14, v25) ? v7 : 0;
      }
      if ( v7 )
      {
        if ( a4
          || CCompositionSurfaceInfo::HasSecondaryRepresentations(*((CCompositionSurfaceInfo **)a2 + 3))
          || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 216LL))(*((_QWORD *)a2 + 2))
          || CRenderTargetManager::AlwaysNeedsRenderPass(*(CRenderTargetManager **)(*((_QWORD *)this + 1680) + 64LL))
          || *((_BYTE *)a2 + 209) && *(_DWORD *)(*((_QWORD *)a2 + 3) + 72LL) == *((_DWORD *)a2 + 61) )
        {
          v5 = 1;
        }
        v11 = *((_DWORD *)CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)a2 + 3))
              + 47);
        if ( v11 )
        {
          if ( COverlayContext::IsFullscreenSingleMonitor(this) )
          {
            if ( v11 == *((_DWORD *)a2 + 54) )
            {
              v24 = *((_DWORD *)a2 + 55);
            }
            else
            {
              v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**((_QWORD **)this + 2) + 464LL))(
                      *((_QWORD *)this + 2),
                      v11,
                      &v24);
              v4 = v12;
              if ( v12 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xC3Au);
                return v4;
              }
              *((_DWORD *)a2 + 55) = v24;
              *((_DWORD *)a2 + 54) = v11;
            }
          }
        }
      }
    }
  }
  if ( *((_BYTE *)a2 + 208) != v7 || *((_BYTE *)a2 + 209) != v5 || *((_DWORD *)a2 + 53) != v24 )
  {
    v14 = *((_DWORD *)a2 + 57);
    v15 = *((_QWORD *)a2 + 4);
    v16 = (CCompositionSurfaceInfo *)*((_QWORD *)a2 + 3);
    v22 = *((_DWORD *)this + 24);
    v23 = 0;
    if ( (int)CCompositionSurfaceInfo::RecordIndependentFlipInfo(v16, v15, v14, v7, v5, v24, v22, &v23) >= 0 )
    {
      if ( *((_BYTE *)a2 + 208) != v7 )
        CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat((_QWORD *)(*((_QWORD *)a2 + 3) + 48LL), 3, v7);
      if ( !v7 && v23 )
        *((_BYTE *)this + 13418) = 1;
      if ( v5 || !v7 )
      {
        v17 = *((_BYTE *)a2 + 208) == 0;
        v18 = *((_QWORD *)a2 + 3);
        *((_DWORD *)a2 + 61) = *(_DWORD *)(v18 + 72);
        if ( !v17 && !*((_BYTE *)a2 + 209) && *(_QWORD *)(v18 + 56) == *((_QWORD *)a2 + 4) )
        {
          if ( *(_DWORD *)(v18 + 104) )
          {
            v19 = CCompositionSurfaceInfo::EnsureCurrentRenderingRealization((CCompositionSurfaceInfo *)v18);
            if ( v19 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x33Cu);
          }
        }
      }
      *((_DWORD *)a2 + 53) = v24;
      *((_BYTE *)a2 + 208) = v7;
      *((_BYTE *)a2 + 209) = v5;
    }
  }
  return v4;
}
