/*
 * XREFs of ??0OverlayPlaneInfo@COverlayContext@@QEAA@PEAV1@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$$QEAV?$shared_ptr@VCRegion@@@std@@_N888881@Z @ 0x180181E58
 * Callers:
 *     ??$emplace@PEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N_N_N$$T@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@PEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N99999$$T@Z @ 0x180181088 (--$emplace@PEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@.c)
 * Callees:
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z @ 0x18015A4B4 (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z.c)
 */

_QWORD *__fastcall COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _OWORD *a7,
        __int128 *a8,
        _QWORD *a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        __int64 a16)
{
  __int128 v20; // xmm1
  _QWORD *result; // rax

  memset_0(a1, 0, 0x100uLL);
  wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
    a1 + 1,
    a3);
  wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
    a1 + 2,
    a4);
  wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
    a1 + 3,
    a5);
  a1[21] = 0LL;
  a1[22] = 0LL;
  a1[21] = *a9;
  a1[22] = a9[1];
  *a9 = 0LL;
  a9[1] = 0LL;
  a1[4] = a6;
  *a1 = a2;
  *(_OWORD *)(a1 + 5) = *a7;
  *(_OWORD *)(a1 + 7) = a7[1];
  *(_OWORD *)(a1 + 9) = a7[2];
  *(_OWORD *)(a1 + 11) = a7[3];
  *(_OWORD *)(a1 + 13) = a7[4];
  *(_OWORD *)(a1 + 15) = a7[5];
  *(_OWORD *)(a1 + 17) = a7[6];
  v20 = *a8;
  *((_BYTE *)a1 + 184) = a10;
  *((_BYTE *)a1 + 185) = a11;
  *((_BYTE *)a1 + 186) = a12;
  *((_BYTE *)a1 + 187) = a13;
  *((_BYTE *)a1 + 188) = a14;
  *((_BYTE *)a1 + 189) = a15;
  a1[24] = a16;
  result = a1;
  *(_OWORD *)(a1 + 19) = v20;
  return result;
}
