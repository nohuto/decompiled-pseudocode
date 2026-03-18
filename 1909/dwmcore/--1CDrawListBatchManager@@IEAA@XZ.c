/*
 * XREFs of ??1CDrawListBatchManager@@IEAA@XZ @ 0x18002CC84
 * Callers:
 *     ??1CD2DContext@@UEAA@XZ @ 0x18002C6A4 (--1CD2DContext@@UEAA@XZ.c)
 * Callees:
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x18002CD2C (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18007AE34 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
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
