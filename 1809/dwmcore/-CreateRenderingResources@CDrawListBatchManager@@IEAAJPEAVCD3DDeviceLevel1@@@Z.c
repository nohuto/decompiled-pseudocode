/*
 * XREFs of ?CreateRenderingResources@CDrawListBatchManager@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800D6D60
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x1800D6B04 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800C2AD8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CBatchOptimizer@@QEAA@PEAVCDrawListBatchManager@@@Z @ 0x1800D5A68 (--0CBatchOptimizer@@QEAA@PEAVCDrawListBatchManager@@@Z.c)
 *     ?Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV12@@Z @ 0x1800D6E28 (-Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV12@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CDrawListBatchManager::CreateRenderingResources(
        CDrawListBatchManager *this,
        struct CD3DDeviceLevel1 *a2)
{
  struct CDrawListEntryBatch::CSharedDirect3DResources **v2; // rbx
  CMILRefCountBase *v4; // rcx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  CBatchOptimizer *v10; // rax
  __int64 v11; // rcx
  char *v12; // rsi

  v2 = (struct CDrawListEntryBatch::CSharedDirect3DResources **)((char *)this + 160);
  v4 = (CMILRefCountBase *)*((_QWORD *)this + 20);
  *v2 = 0LL;
  if ( v4 )
    CMILRefCountBase::Release(v4);
  v6 = CDrawListEntryBatch::CSharedDirect3DResources::Create(a2, v2);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x5Fu);
  }
  else if ( CCommonRegistryData::m_fEnablePrimitiveReordering
         && (!*((_QWORD *)a2 + 77) || CCommonRegistryData::m_fUseHWDrawListEntriesOnWARP) )
  {
    v10 = (CBatchOptimizer *)HeapAlloc(WPF::g_processHeap, 0, 0x1098uLL);
    if ( v10 )
      v10 = CBatchOptimizer::CBatchOptimizer(v10, this);
    v12 = (char *)*((_QWORD *)this + 22);
    *((_QWORD *)this + 22) = v10;
    if ( v12 )
    {
      *(_QWORD *)v12 = &CBatchOptimizer::`vftable';
      `vector destructor iterator'(
        v12 + 80,
        520LL,
        8LL,
        (void (__fastcall *)(char *))SharedStateLayer::~SharedStateLayer);
      operator delete(v12, 0x1098uLL);
      v10 = (CBatchOptimizer *)*((_QWORD *)this + 22);
    }
    if ( !v10 )
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0x68u);
    }
  }
  return v8;
}
