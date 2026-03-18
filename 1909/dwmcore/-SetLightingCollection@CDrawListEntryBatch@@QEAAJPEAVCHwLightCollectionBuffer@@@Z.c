/*
 * XREFs of ?SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x180066488
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180065430 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1800663D8 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 * Callees:
 *     ?AddStateSettingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCStateSettingDrawListEntry@@@Z @ 0x18000CAFC (-AddStateSettingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCStateSettingDrawListEntry@@@Z.c)
 *     ??$TakeItemFromCache@VCStateSettingDrawListEntry@@@CDrawListBatchManager@@CAJPEAV?$ShrinkableReferenceArray@PEAVCStateSettingDrawListEntry@@@@PEAPEAVCStateSettingDrawListEntry@@@Z @ 0x180013B70 (--$TakeItemFromCache@VCStateSettingDrawListEntry@@@CDrawListBatchManager@@CAJPEAV-$ShrinkableRef.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?BatchDrawListEntry@CDrawListBatchManager@@QEAAJPEAVCBaseDrawListEntry@@@Z @ 0x1801AB9B0 (-BatchDrawListEntry@CDrawListBatchManager@@QEAAJPEAVCBaseDrawListEntry@@@Z.c)
 */

__int64 __fastcall CDrawListEntryBatch::SetLightingCollection(
        CDrawListEntryBatch *this,
        struct CHwLightCollectionBuffer *a2)
{
  unsigned int v2; // edi
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ecx
  CDirtyRegion *v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rax
  CBatchOptimizer *v12; // rcx
  CDirtyRegion *v13; // rcx
  int v14; // eax
  unsigned int v15; // ecx
  CDirtyRegion *v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( a2 != *((struct CHwLightCollectionBuffer **)this + 5) )
  {
    ++dword_18033984C;
    v6 = *((_QWORD *)this + 3);
    v16 = 0LL;
    v7 = CDrawListBatchManager::TakeItemFromCache<CStateSettingDrawListEntry>(v6 + 48, &v16);
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xC5u, 0LL);
      v13 = v16;
      if ( !v16 )
        return v2;
      goto LABEL_13;
    }
    v9 = v16;
    v10 = *((_QWORD *)v16 + 3);
    *((_QWORD *)v16 + 3) = a2;
    if ( a2 )
      (**(void (__fastcall ***)(struct CHwLightCollectionBuffer *))a2)(a2);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = *((_QWORD *)this + 3);
    v12 = *(CBatchOptimizer **)(v11 + 184);
    if ( v12 )
    {
      CBatchOptimizer::AddStateSettingDrawListEntry(v12, v9);
    }
    else
    {
      v14 = CDrawListBatchManager::BatchDrawListEntry((CDrawListBatchManager *)(v11 + 8), v9);
      v2 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xCFu, 0LL);
        goto LABEL_11;
      }
    }
    *((_QWORD *)this + 5) = a2;
LABEL_11:
    if ( !v9 )
      return v2;
    v13 = v9;
LABEL_13:
    CDirtyRegion::Release(v13);
  }
  return v2;
}
