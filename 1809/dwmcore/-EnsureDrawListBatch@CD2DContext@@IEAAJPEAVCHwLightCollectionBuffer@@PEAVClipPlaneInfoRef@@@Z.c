/*
 * XREFs of ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x180024BE0
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800239F0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x180024BE0 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?AppendDrawListEntry@CD2DContext@@QEAAJPEAVCDrawListEntry@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1801FDC60 (-AppendDrawListEntry@CD2DContext@@QEAAJPEAVCDrawListEntry@@PEAVCHwLightCollectionBuffer@@PEAVCli.c)
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800234C0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x180024BE0 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x180024C90 (-SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCDrawListEntryBatch@@@Z @ 0x18002596C (-OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCDrawListEntryB.c)
 *     ??4?$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@QEAAAEAV012@PEAVClipPlaneInfoRef@@@Z @ 0x18006BDCC (--4-$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@QEAAAEAV012@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::EnsureDrawListBatch(
        CD2DContext *this,
        struct CHwLightCollectionBuffer *a2,
        struct ClipPlaneInfoRef *a3)
{
  struct ClipPlaneInfoRef **v5; // rcx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  struct CD3DDeviceLevel1 *v11; // rax
  int v12; // eax
  unsigned int v13; // ecx
  struct CHwLightCollectionBuffer *v14; // rdx
  struct CDrawListEntryBatch *v15; // rsi
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  struct CDrawListEntryBatch *v20; // [rsp+40h] [rbp+8h] BYREF

  v5 = (struct ClipPlaneInfoRef **)*((_QWORD *)this + 22);
  v20 = (struct CDrawListEntryBatch *)v5;
  if ( v5 )
  {
    if ( v5[4] == a3 )
    {
      v7 = CDrawListEntryBatch::SetLightingCollection((CDrawListEntryBatch *)v5, a2);
      v9 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x2C9u);
    }
    else
    {
      CD2DContext::FlushDrawList(this);
      v18 = CD2DContext::EnsureDrawListBatch(this, a2, a3);
      v9 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x2C5u);
    }
  }
  else
  {
    v11 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)this + 160LL))(this);
    v12 = CDrawListBatchManager::OpenDrawListEntryBatch((CD2DContext *)((char *)this + 8), v11, &v20);
    v9 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x2B8u);
    }
    else
    {
      v14 = a2;
      v15 = v20;
      v16 = CDrawListEntryBatch::SetLightingCollection(v20, v14);
      v9 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x2B9u);
      else
        Microsoft::WRL::ComPtr<ClipPlaneInfoRef>::operator=((char *)v15 + 32, a3);
    }
  }
  return v9;
}
