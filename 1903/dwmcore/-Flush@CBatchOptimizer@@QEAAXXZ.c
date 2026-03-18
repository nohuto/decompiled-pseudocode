/*
 * XREFs of ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x18004C450
 * Callers:
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x180024840 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA?AV?$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18002649C (-CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA-AV-$com_ptr_t@VCDrawListEntryBatch@@.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x18004B340 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x18004CD60 (-SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 * Callees:
 *     ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x1800118C8 (-DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z.c)
 *     ?RawAddDrawListEntries@CDrawListBatchManager@@QEAAJAEBV?$span@PEAVCBaseDrawListEntry@@$0?0@gsl@@@Z @ 0x180015F34 (-RawAddDrawListEntries@CDrawListBatchManager@@QEAAJAEBV-$span@PEAVCBaseDrawListEntry@@$0-0@gsl@@.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x18004C848 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x18004C89C (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseDrawListEntry@@$0A@@@QEAAJPEFBQEAVCBaseDrawListEntry@@I@Z @ 0x18004CB04 (-AddMultipleAndSet@-$DynArray@PEAVCBaseDrawListEntry@@$0A@@@QEAAJPEFBQEAVCBaseDrawListEntry@@I@Z.c)
 *     ??$TakeItemFromCache@VCGroupDrawListEntry@@@CDrawListBatchManager@@CAJPEAV?$ShrinkableReferenceArray@PEAVCGroupDrawListEntry@@@@PEAPEAVCGroupDrawListEntry@@@Z @ 0x18004CB74 (--$TakeItemFromCache@VCGroupDrawListEntry@@@CDrawListBatchManager@@CAJPEAV-$ShrinkableReferenceA.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CBatchOptimizer::Flush(unsigned __int64 this)
{
  unsigned __int64 i; // rdi
  int v2; // edx
  int v3; // r8d
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  unsigned int v6; // r15d
  const void *v7; // r14
  __int64 v8; // rbp
  unsigned int v9; // ebp
  __int64 v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // ebp
  char *v13; // rdx
  int v14; // r10d
  char *v15; // r8
  __int64 v16; // r9
  _DWORD *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // rbx
  __int64 v23; // rcx
  int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // ebx
  __int64 v27; // r14
  int v28; // eax
  __int64 v29; // r8
  int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // ebx
  __int64 v33; // r8
  unsigned int v34; // ecx
  __int64 v35; // r8
  _QWORD v36[2]; // [rsp+30h] [rbp-48h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v38; // [rsp+80h] [rbp+8h] BYREF
  __int64 v39; // [rsp+88h] [rbp+10h] BYREF

  for ( i = this; *(_BYTE *)(i + 4240); CBatchOptimizer::TryMergeOneLayer((CBatchOptimizer *)i) )
  {
    if ( *(_DWORD *)(i + 32) <= 1u )
      break;
  }
  v2 = *(_DWORD *)(i + 32);
  if ( v2 )
  {
    v3 = *(_DWORD *)(i + 32);
    do
    {
      v2 = v3;
      this = *(int *)(i + 4LL * v3 + 44);
      if ( *(_DWORD *)(520 * this + i + 100) )
        break;
      CBatchOptimizer::DiscardEmptyLayers((CBatchOptimizer *)i, (unsigned int)(v3 - 1), 1u);
      v2 = *(_DWORD *)(i + 32);
      v3 = v2;
    }
    while ( v2 );
  }
  if ( v2 )
  {
    while ( 1 )
    {
      v4 = i + 520LL * *(int *)(i + 48);
      v5 = *(_QWORD *)(v4 + 112);
      v6 = *(_DWORD *)(v4 + 96);
      v7 = (const void *)(v4 + 120);
      if ( v5 )
      {
        v8 = *(_QWORD *)(i + 40);
        if ( v8 )
        {
          wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v8 + 24, v5);
          *(_DWORD *)(v8 + 40) += *(_DWORD *)(v4 + 100);
        }
        else
        {
          v9 = *(_DWORD *)(v4 + 100);
          if ( v9 > 1 || *(_DWORD *)(v4 + 104) )
          {
            v7 = (const void *)(v4 + 120);
            v18 = v6 - v9;
            if ( v6 != v9 )
            {
              v27 = v18;
              v36[0] = v18;
              if ( v18 < 0 || (v36[1] = v4 + 120, v4 == -120LL) && v18 )
              {
                ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
                __debugbreak();
              }
              v28 = CDrawListBatchManager::RawAddDrawListEntries(*(_QWORD *)(i + 8), (unsigned int *)v36);
              if ( v28 < 0 )
                ModuleFailFastForHRESULT((unsigned int)v28, retaddr, v29);
              v7 = (const void *)(v4 + 120 + 8 * v27);
              v6 = v9;
            }
            v19 = *(_QWORD *)(i + 8) + 80LL;
            v38 = 0LL;
            v20 = CDrawListBatchManager::TakeItemFromCache<CGroupDrawListEntry>(v19, &v38);
            if ( v20 < 0 )
              ModuleFailFastForHRESULT((unsigned int)v20, retaddr, v21);
            v22 = v38;
            *(_DWORD *)(v38 + 32) = *(_DWORD *)(v4 + 88);
            *(_BYTE *)(v22 + 36) = *(_BYTE *)(v4 + 92);
            wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v22 + 24, *(_QWORD *)(v4 + 112));
            *(_DWORD *)(v22 + 40) = *(_DWORD *)(v4 + 100);
            *(_QWORD *)(i + 40) = v22;
            ++*(_DWORD *)(v22 + 16);
            v23 = *(_QWORD *)(i + 8);
            v39 = *(_QWORD *)(i + 40);
            v24 = DynArray<CBaseDrawListEntry *,0>::AddMultipleAndSet(v23, &v39, 1LL);
            v26 = v24;
            if ( v24 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x9Au, 0LL);
              ModuleFailFastForHRESULT(v26, retaddr, v33);
            }
          }
        }
        this = *(_QWORD *)(v4 + 112);
        *(_QWORD *)(v4 + 112) = 0LL;
        if ( this )
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)this + 8LL))(this);
      }
      v10 = *(_QWORD *)(i + 8);
      if ( !v7 && v6 )
      {
        ((void (__fastcall *)(unsigned __int64, __int64, _QWORD))`gsl::details::get_terminate_handler'::`2'::handler)(
          this,
          v5,
          v6);
        __debugbreak();
      }
      v11 = *(_DWORD *)(v10 + 24);
      v12 = v11 + v6;
      if ( v11 + v6 < v11 )
        break;
      if ( v12 > *(_DWORD *)(v10 + 20) )
      {
        v30 = DynArrayImpl<0>::AddMultipleAndSet(*(_QWORD *)(i + 8), 8LL, v6, v7);
        v32 = v30;
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0xC3u, 0LL);
          goto LABEL_47;
        }
      }
      else
      {
        memcpy_0((void *)(*(_QWORD *)v10 + 8LL * v11), v7, 8LL * v6);
        *(_DWORD *)(v10 + 24) = v12;
      }
      *(_QWORD *)(v4 + 96) = 0LL;
      if ( !*(_DWORD *)(v4 + 104) )
        *(_QWORD *)(i + 40) = 0LL;
      *(_DWORD *)(v4 + 104) = 0;
      v13 = 0LL;
      this = *(int *)(i + 32);
      if ( (_DWORD)this != 1 )
      {
        v14 = *(_DWORD *)(i + 48);
        v15 = (char *)(this - 1);
        v16 = *(int *)(i + 32);
        v17 = (_DWORD *)(i + 48);
        do
        {
          ++v13;
          *v17 = v17[1];
          ++v17;
        }
        while ( v13 != v15 );
        *(_DWORD *)(i + 4 * v16 + 44) = v14;
        this = *(unsigned int *)(i + 32);
      }
      *(_DWORD *)(i + 32) = this - 1;
      if ( (_DWORD)this == 1 )
        goto LABEL_20;
    }
    v32 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, -2147024362, 0xB8u, 0LL);
LABEL_47:
    MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v32, 0x9Au, 0LL);
    ModuleFailFastForHRESULT(v32, retaddr, v35);
  }
LABEL_20:
  *(_OWORD *)(i + 16) = SharedStateLayer::StateBlock::kBlank;
  *(_BYTE *)(i + 4240) = 0;
  *(_DWORD *)(i + 48) = 0;
  *(_DWORD *)(i + 52) = 1;
  *(_DWORD *)(i + 56) = 2;
  *(_DWORD *)(i + 60) = 3;
  *(_DWORD *)(i + 64) = 4;
  *(_DWORD *)(i + 68) = 5;
  *(_DWORD *)(i + 72) = 6;
  *(_DWORD *)(i + 76) = 7;
}
