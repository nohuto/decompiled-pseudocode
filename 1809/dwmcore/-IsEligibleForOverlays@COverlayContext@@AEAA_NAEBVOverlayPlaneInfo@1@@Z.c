/*
 * XREFs of ?IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18016B83C
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x18004A134 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 * Callees:
 *     ?EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ @ 0x1800A12BC (-EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsRevokable@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18016C05C (-IsRevokable@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?IsSufficientIntervalForStats@OverlayPlaneInfo@COverlayContext@@QEBA_N_KPEAM@Z @ 0x18016C100 (-IsSufficientIntervalForStats@OverlayPlaneInfo@COverlayContext@@QEBA_N_KPEAM@Z.c)
 *     ?IsSufficientPresentCountForEligibility@OverlayPlaneInfo@COverlayContext@@QEBA_NIM@Z @ 0x18016C1B0 (-IsSufficientPresentCountForEligibility@OverlayPlaneInfo@COverlayContext@@QEBA_NIM@Z.c)
 */

char __fastcall COverlayContext::IsEligibleForOverlays(
        COverlayContext *this,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  char IsSufficientPresentCountForEligibility; // di
  unsigned __int64 v5; // rsi
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r11
  __int64 v10; // r11
  int v11; // r10d
  __int64 v12; // rax
  float v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = FLOAT_1_0;
  IsSufficientPresentCountForEligibility = 1;
  if ( COverlayContext::IsRevokable(this, a2) )
  {
    IsSufficientPresentCountForEligibility = *((_BYTE *)a2 + 200);
    v5 = *(_QWORD *)(*((_QWORD *)this + 1680) + 480LL);
    if ( COverlayContext::OverlayPlaneInfo::IsSufficientIntervalForStats(a2, v5, &v14) )
    {
      if ( *((_BYTE *)a2 + 208) )
      {
        if ( !*((_BYTE *)a2 + 209) )
        {
          v6 = *((_QWORD *)a2 + 3);
          if ( *(_QWORD *)(v6 + 56) == *((_QWORD *)a2 + 4) )
          {
            if ( *(_DWORD *)(v6 + 104) )
            {
              v7 = CCompositionSurfaceInfo::EnsureCurrentRenderingRealization((CCompositionSurfaceInfo *)v6);
              if ( v7 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x33Cu);
            }
          }
        }
      }
      v9 = *((_QWORD *)a2 + 3);
      if ( *(_BYTE *)(v9 + 200) )
      {
        return 0;
      }
      else
      {
        IsSufficientPresentCountForEligibility = COverlayContext::OverlayPlaneInfo::IsSufficientPresentCountForEligibility(
                                                   a2,
                                                   *(_DWORD *)(v9 + 72),
                                                   v14);
        *(_QWORD *)(v10 + 176) = v5;
        *(_DWORD *)(v10 + 184) = v11;
      }
    }
  }
  else
  {
    v12 = *((_QWORD *)a2 + 3);
    *(_QWORD *)(v12 + 176) = 0LL;
    *(_DWORD *)(v12 + 184) = 0;
  }
  return IsSufficientPresentCountForEligibility;
}
