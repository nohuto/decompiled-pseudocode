/*
 * XREFs of ?CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEBV12@@Z @ 0x18016A83C
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x18004A134 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 * Callees:
 *     <none>
 */

void __fastcall COverlayContext::OverlayPlaneInfo::CopyTransientProperties(
        COverlayContext::OverlayPlaneInfo *this,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  *((_BYTE *)this + 200) = *((_BYTE *)a2 + 200);
  *((_DWORD *)this + 51) = *((_DWORD *)a2 + 51);
  *((_BYTE *)this + 208) = *((_BYTE *)a2 + 208);
  *((_BYTE *)this + 209) = *((_BYTE *)a2 + 209);
  *((_DWORD *)this + 53) = *((_DWORD *)a2 + 53);
  *((_DWORD *)this + 54) = *((_DWORD *)a2 + 54);
  *((_DWORD *)this + 55) = *((_DWORD *)a2 + 55);
  *((_BYTE *)this + 224) = *((_BYTE *)a2 + 224);
  *((_BYTE *)this + 225) = *((_BYTE *)a2 + 225);
  *((_DWORD *)this + 57) = *((_DWORD *)a2 + 57);
  *((_DWORD *)this + 58) = *((_DWORD *)a2 + 58);
  *((_BYTE *)this + 236) = *((_BYTE *)a2 + 236);
  *((_DWORD *)this + 60) = *((_DWORD *)a2 + 60);
  *((_DWORD *)this + 61) = *((_DWORD *)a2 + 61);
  *((_BYTE *)this + 248) = *((_BYTE *)a2 + 248);
}
