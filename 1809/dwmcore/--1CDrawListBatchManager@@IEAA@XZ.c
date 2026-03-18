/*
 * XREFs of ??1CDrawListBatchManager@@IEAA@XZ @ 0x1800E9748
 * Callers:
 *     ??1CD2DContext@@UEAA@XZ @ 0x1800E9A30 (--1CD2DContext@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800C2AD8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x1800E97F0 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CDrawListBatchManager::~CDrawListBatchManager(void **this)
{
  char *v2; // rdi
  char *v3; // rcx
  CMILRefCountBase *v4; // rcx

  CDrawListBatchManager::DestroyDeviceResources((CDrawListBatchManager *)this);
  v2 = (char *)this[22];
  if ( v2 )
  {
    *(_QWORD *)v2 = &CBatchOptimizer::`vftable';
    `vector destructor iterator'(v2 + 80, 520LL, 8LL, (void (__fastcall *)(char *))SharedStateLayer::~SharedStateLayer);
    operator delete(v2, 0x1098uLL);
  }
  v3 = (char *)this[21];
  if ( v3 )
    CMILRefCountBase::Release((CMILRefCountBase *)(v3 + 8));
  v4 = (CMILRefCountBase *)this[20];
  if ( v4 )
    CMILRefCountBase::Release(v4);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 15);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 10);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 5);
  DynArrayImpl<1>::~DynArrayImpl<1>(this);
}
