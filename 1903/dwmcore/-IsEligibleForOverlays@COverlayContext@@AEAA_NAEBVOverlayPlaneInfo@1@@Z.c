/*
 * XREFs of ?IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x1801866AC
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x180054DD0 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?ForceUpdateRenderingRealization@OverlayPlaneInfo@COverlayContext@@QEBAJXZ @ 0x180186264 (-ForceUpdateRenderingRealization@OverlayPlaneInfo@COverlayContext@@QEBAJXZ.c)
 *     ?IsRevokable@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x180186E70 (-IsRevokable@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?IsSufficientIntervalForStats@OverlayPlaneInfo@COverlayContext@@QEBA_N_KPEAM@Z @ 0x180186F14 (-IsSufficientIntervalForStats@OverlayPlaneInfo@COverlayContext@@QEBA_N_KPEAM@Z.c)
 *     ?IsSufficientPresentCountForEligibility@OverlayPlaneInfo@COverlayContext@@QEBA_NIM@Z @ 0x180186FEC (-IsSufficientPresentCountForEligibility@OverlayPlaneInfo@COverlayContext@@QEBA_NIM@Z.c)
 */

char __fastcall COverlayContext::IsEligibleForOverlays(
        COverlayContext *this,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  char IsSufficientPresentCountForEligibility; // si
  unsigned __int64 v5; // rbp
  unsigned int v6; // ebx
  float v8; // [rsp+40h] [rbp+18h] BYREF

  LODWORD(v8) = (_DWORD)FLOAT_1_0;
  IsSufficientPresentCountForEligibility = 1;
  if ( COverlayContext::IsRevokable(this, a2) )
  {
    IsSufficientPresentCountForEligibility = *((_BYTE *)a2 + 200);
    v5 = *(_QWORD *)(*((_QWORD *)this + 1682) + 496LL);
    if ( COverlayContext::OverlayPlaneInfo::IsSufficientIntervalForStats(a2, v5, &v8) )
    {
      if ( *((_BYTE *)a2 + 208) && !*((_BYTE *)a2 + 209) )
        COverlayContext::OverlayPlaneInfo::ForceUpdateRenderingRealization(a2);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 3) + 288LL))(*((_QWORD *)a2 + 3)) )
      {
        return 0;
      }
      else
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 3) + 224LL))(*((_QWORD *)a2 + 3));
        IsSufficientPresentCountForEligibility = COverlayContext::OverlayPlaneInfo::IsSufficientPresentCountForEligibility(
                                                   a2,
                                                   v6,
                                                   v8);
        (*(void (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(**((_QWORD **)a2 + 3) + 264LL))(
          *((_QWORD *)a2 + 3),
          v5,
          v6);
      }
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)a2 + 3) + 264LL))(*((_QWORD *)a2 + 3), 0LL, 0LL);
  }
  return IsSufficientPresentCountForEligibility;
}
