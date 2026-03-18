/*
 * XREFs of ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800786A0
 * Callers:
 *     ??0CWindowNode@@IEAA@PEAVCComposition@@@Z @ 0x18004BBD8 (--0CWindowNode@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CSpriteVisual@@QEAA@PEAVCComposition@@@Z @ 0x18007A164 (--0CSpriteVisual@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CLayerVisual@@QEAA@PEAVCComposition@@@Z @ 0x1800CF7D0 (--0CLayerVisual@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CRedirectVisual@@QEAA@PEAVCComposition@@@Z @ 0x18019C0D4 (--0CRedirectVisual@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CShapeVisual@@QEAA@PEAVCComposition@@@Z @ 0x18019C39C (--0CShapeVisual@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CSceneVisual@@QEAA@PEAVCComposition@@@Z @ 0x1801C5618 (--0CSceneVisual@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CGlyphRunVisual@@QEAA@PEAVCComposition@@@Z @ 0x1801D4E30 (--0CGlyphRunVisual@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z @ 0x1801E98E0 (--0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CCursorVisual@@QEAA@PEAVCComposition@@@Z @ 0x180212984 (--0CCursorVisual@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CTreeData@@IEAA@XZ @ 0x180078748 (--0CTreeData@@IEAA@XZ.c)
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1800C1430 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 */

CVisual *__fastcall CVisual::CVisual(CVisual *this, struct CComposition *a2)
{
  CTreeData *v3; // rcx

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
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
  CTreeData::CTreeData((CVisual *)((char *)this + 328));
  *(_QWORD *)v3 = &CDesktopTreeData::`vftable';
  *((_BYTE *)this + 95) |= 4u;
  CTreeData::Initialize(v3, 0LL, this);
  return this;
}
