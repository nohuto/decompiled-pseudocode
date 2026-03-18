/*
 * XREFs of ??1CDrawListBatchManager@@IEAA@XZ @ 0x180024DC4
 * Callers:
 *     ??1CD2DContext@@UEAA@XZ @ 0x1800247E4 (--1CD2DContext@@UEAA@XZ.c)
 * Callees:
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x180025CD8 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18008877C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CDrawListBatchManager::~CDrawListBatchManager(CDirtyRegion **this)
{
  CDirtyRegion *v2; // rdi
  CDirtyRegion *v3; // rcx
  CDirtyRegion *v4; // rcx

  CDrawListBatchManager::DestroyDeviceResources((CDrawListBatchManager *)this);
  v2 = this[22];
  if ( v2 )
  {
    *(_QWORD *)v2 = &CBatchOptimizer::`vftable';
    `vector destructor iterator'((char *)v2 + 80, 0x208uLL, 8uLL, (void (*)(void *))SharedStateLayer::~SharedStateLayer);
    operator delete(v2, 0x1098uLL);
  }
  v3 = this[21];
  if ( v3 )
    CDirtyRegion::Release((CDirtyRegion *)((char *)v3 + 8));
  v4 = this[20];
  if ( v4 )
    CDirtyRegion::Release(v4);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 15);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 10);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 5);
  DynArrayImpl<0>::~DynArrayImpl<0>(this);
}
