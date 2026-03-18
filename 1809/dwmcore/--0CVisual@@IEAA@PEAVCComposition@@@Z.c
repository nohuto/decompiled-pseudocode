/*
 * XREFs of ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18004D428
 * Callers:
 *     ??0CWindowNode@@IEAA@PEAVCComposition@@@Z @ 0x18009484C (--0CWindowNode@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800CFCE4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z @ 0x1801AA818 (--0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1800650B0 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 */

CVisual *__fastcall CVisual::CVisual(CVisual *this, struct CComposition *a2)
{
  char *v3; // rcx

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CVisual::`vftable';
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 27) = &CSparseStorage::s_defaultEmptyAllocatedStorage;
  *((_QWORD *)this + 28) = &CSparseAlignedStorage<8,8>::k_defaultEmptyAllocatedStorage;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  v3 = (char *)this + 328;
  v3[16] &= 0xF2u;
  *((_QWORD *)v3 + 1) = 0LL;
  *((_QWORD *)v3 + 3) = 0LL;
  *((_QWORD *)v3 + 4) = 0LL;
  *(_OWORD *)(v3 + 40) = _xmm;
  *((_WORD *)v3 + 52) = 32085;
  *(_OWORD *)(v3 + 56) = _xmm;
  *(_OWORD *)(v3 + 72) = _xmm;
  *(_OWORD *)(v3 + 88) = _xmm;
  *((_QWORD *)v3 + 14) = 0LL;
  *((_QWORD *)v3 + 15) = 0LL;
  *((_QWORD *)v3 + 16) = 0LL;
  *((_QWORD *)v3 + 19) = 0LL;
  *((_QWORD *)v3 + 20) = 0LL;
  *((_DWORD *)v3 + 34) = 0;
  *((_QWORD *)v3 + 18) = 0LL;
  *((_QWORD *)v3 + 21) = 0LL;
  *((_QWORD *)v3 + 22) = 0LL;
  *((_QWORD *)v3 + 23) = 0LL;
  *((_QWORD *)v3 + 24) = 0LL;
  *((_QWORD *)v3 + 25) = 0LL;
  *((_DWORD *)v3 + 52) = 0;
  v3[212] = 0;
  *((_QWORD *)v3 + 27) = 0LL;
  *(_QWORD *)v3 = &CDesktopTreeData::`vftable';
  *((_BYTE *)this + 95) |= 8u;
  CTreeData::Initialize((CTreeData *)v3, 0LL, this);
  return this;
}
