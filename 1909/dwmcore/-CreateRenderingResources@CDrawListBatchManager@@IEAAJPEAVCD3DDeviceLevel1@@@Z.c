/*
 * XREFs of ?CreateRenderingResources@CDrawListBatchManager@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x18002E1D0
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x18002DEEC (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ?Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV12@@Z @ 0x18002E284 (-Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV12@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18007AE34 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CBatchOptimizer@@QEAA@PEAVCDrawListBatchManager@@@Z @ 0x1800DE354 (--0CBatchOptimizer@@QEAA@PEAVCDrawListBatchManager@@@Z.c)
 */

__int64 __fastcall CDrawListBatchManager::CreateRenderingResources(
        CDrawListBatchManager *this,
        struct CD3DDeviceLevel1 *a2)
{
  struct CDrawListEntryBatch::CSharedDirect3DResources **v2; // rbx
  CDirtyRegion *v4; // rcx
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  CBatchOptimizer *v10; // rax
  unsigned int v11; // ecx
  _QWORD *v12; // rsi

  v2 = (struct CDrawListEntryBatch::CSharedDirect3DResources **)((char *)this + 160);
  v4 = (CDirtyRegion *)*((_QWORD *)this + 20);
  *v2 = 0LL;
  if ( v4 )
    CDirtyRegion::Release(v4);
  v6 = CDrawListEntryBatch::CSharedDirect3DResources::Create(a2, v2);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x5Fu, 0LL);
  }
  else if ( CCommonRegistryData::m_fEnablePrimitiveReordering
         && (!*((_QWORD *)a2 + 77) || CCommonRegistryData::m_fUseHWDrawListEntriesOnWARP) )
  {
    v10 = (CBatchOptimizer *)DefaultHeap::Alloc(0x1098uLL);
    if ( v10 )
      v10 = CBatchOptimizer::CBatchOptimizer(v10, this);
    v12 = (_QWORD *)*((_QWORD *)this + 22);
    *((_QWORD *)this + 22) = v10;
    if ( v12 )
    {
      *v12 = &CBatchOptimizer::`vftable';
      `vector destructor iterator'(v12 + 10, 0x208uLL, 8uLL, (void (*)(void *))SharedStateLayer::~SharedStateLayer);
      operator delete(v12, 0x1098uLL);
      v10 = (CBatchOptimizer *)*((_QWORD *)this + 22);
    }
    if ( !v10 )
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0x68u, 0LL);
    }
  }
  return v8;
}
