/*
 * XREFs of ?Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV12@@Z @ 0x1800D6E28
 * Callers:
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800D6D60 (-CreateRenderingResources@CDrawListBatchManager@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800D6EC0 (-Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ??0CSharedDirect3DResources@CDrawListEntryBatch@@AEAA@XZ @ 0x1800D73BC (--0CSharedDirect3DResources@CDrawListEntryBatch@@AEAA@XZ.c)
 */

__int64 __fastcall CDrawListEntryBatch::CSharedDirect3DResources::Create(
        struct CD3DDeviceLevel1 *a1,
        struct CDrawListEntryBatch::CSharedDirect3DResources **a2)
{
  CDrawListEntryBatch::CSharedDirect3DResources *v4; // rax
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi

  v4 = (CDrawListEntryBatch::CSharedDirect3DResources *)HeapAlloc(WPF::g_processHeap, 0, 0x4A0uLL);
  if ( v4 )
    v6 = (volatile signed __int32 *)CDrawListEntryBatch::CSharedDirect3DResources::CSharedDirect3DResources(v4);
  else
    v6 = 0LL;
  if ( v6 )
  {
    _InterlockedIncrement(v6 + 2);
    v7 = CDrawListEntryBatch::CSharedDirect3DResources::Init((CDrawListEntryBatch::CSharedDirect3DResources *)v6, a1);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x18u);
      CMILRefCountBase::Release((CMILRefCountBase *)v6);
    }
    else
    {
      *a2 = (struct CDrawListEntryBatch::CSharedDirect3DResources *)v6;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x17u);
  }
  return v9;
}
