/*
 * XREFs of ??0CDirectFlipInfo@@QEAA@AEBV0@@Z @ 0x18017880C
 * Callers:
 *     ?CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z @ 0x180178DE0 (-CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainContent@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x1801793A4 (-Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositio.c)
 */

CDirectFlipInfo *__fastcall CDirectFlipInfo::CDirectFlipInfo(CDirectFlipInfo *this, const struct CDirectFlipInfo *a2)
{
  *(_QWORD *)this = &CDirectFlipInfo::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  CDirectFlipInfo::Init(
    this,
    *((_QWORD *)a2 + 1),
    *((_QWORD *)a2 + 2),
    *((_QWORD *)a2 + 3),
    *((_QWORD *)a2 + 4),
    *((_QWORD *)a2 + 5),
    *((_DWORD *)a2 + 17),
    0LL);
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 26);
  *(_OWORD *)((char *)this + 108) = *(_OWORD *)((char *)a2 + 108);
  *(_QWORD *)((char *)this + 124) = *(_QWORD *)((char *)a2 + 124);
  *((_DWORD *)this + 33) = *((_DWORD *)a2 + 33);
  return this;
}
