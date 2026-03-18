/*
 * XREFs of ??0CDirectFlipInfo@@QEAA@AEBV0@@Z @ 0x180192524
 * Callers:
 *     ?CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z @ 0x180192C34 (-CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainContent@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x1801932A4 (-Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositio.c)
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
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_BYTE *)this + 100) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  CDirectFlipInfo::Init(
    this,
    *((_QWORD *)a2 + 1),
    *((_QWORD *)a2 + 2),
    *((_QWORD *)a2 + 3),
    *((_QWORD *)a2 + 4),
    *((_QWORD *)a2 + 5),
    *((_DWORD *)a2 + 17),
    0LL);
  *((_DWORD *)this + 30) = *((_DWORD *)a2 + 30);
  *(_OWORD *)((char *)this + 124) = *(_OWORD *)((char *)a2 + 124);
  *(_QWORD *)((char *)this + 140) = *(_QWORD *)((char *)a2 + 140);
  *((_DWORD *)this + 37) = *((_DWORD *)a2 + 37);
  return this;
}
