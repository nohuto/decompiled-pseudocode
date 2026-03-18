/*
 * XREFs of ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18004E478
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18004D4D0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18004E478 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?AppendDrawListEntry@CD2DContext@@QEAAJPEAVCDrawListEntry@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18015FDE8 (-AppendDrawListEntry@CD2DContext@@QEAAJPEAVCDrawListEntry@@PEAVCHwLightCollectionBuffer@@PEAVCli.c)
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180026410 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18004E478 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x18004E528 (-SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCDrawListEntryBatch@@@Z @ 0x18004E5EC (-OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCDrawListEntryB.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::EnsureDrawListBatch(
        CD2DContext *this,
        struct CHwLightCollectionBuffer *a2,
        struct ClipPlaneInfoRef *a3)
{
  struct ClipPlaneInfoRef **v5; // rcx
  struct CD3DDeviceLevel1 *v7; // rax
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  struct CHwLightCollectionBuffer *v11; // rdx
  struct CDrawListEntryBatch *v12; // rsi
  int v13; // eax
  unsigned int v14; // ecx
  struct ClipPlaneInfoRef *v15; // rcx
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // ecx
  struct CDrawListEntryBatch *v21; // [rsp+40h] [rbp+8h] BYREF

  v5 = (struct ClipPlaneInfoRef **)*((_QWORD *)this + 22);
  v21 = (struct CDrawListEntryBatch *)v5;
  if ( v5 )
  {
    if ( v5[4] == a3 )
    {
      v17 = CDrawListEntryBatch::SetLightingCollection((CDrawListEntryBatch *)v5, a2);
      v10 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x2C9u, 0LL);
    }
    else
    {
      CD2DContext::FlushDrawList(this);
      v19 = CD2DContext::EnsureDrawListBatch(this, a2, a3);
      v10 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x2C5u, 0LL);
    }
  }
  else
  {
    v7 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)this + 160LL))(this);
    v8 = CDrawListBatchManager::OpenDrawListEntryBatch((CD2DContext *)((char *)this + 8), v7, &v21);
    v10 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x2B8u, 0LL);
    }
    else
    {
      v11 = a2;
      v12 = v21;
      v13 = CDrawListEntryBatch::SetLightingCollection(v21, v11);
      v10 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x2B9u, 0LL);
      }
      else
      {
        v15 = (struct ClipPlaneInfoRef *)*((_QWORD *)v12 + 4);
        if ( v15 != a3 )
        {
          if ( a3 )
          {
            (**(void (__fastcall ***)(struct ClipPlaneInfoRef *))a3)(a3);
            v15 = (struct ClipPlaneInfoRef *)*((_QWORD *)v12 + 4);
          }
          *((_QWORD *)v12 + 4) = a3;
          if ( v15 )
            (*(void (__fastcall **)(struct ClipPlaneInfoRef *))(*(_QWORD *)v15 + 8LL))(v15);
        }
      }
    }
  }
  return v10;
}
