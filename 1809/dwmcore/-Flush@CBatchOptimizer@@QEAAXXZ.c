/*
 * XREFs of ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x180024F00
 * Callers:
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x1800230D0 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800234C0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x180023580 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180046D70 (-SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA?AV?$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800E98DC (-CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA-AV-$com_ptr_t@VCDrawListEntryBatch@@.c)
 * Callees:
 *     ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x18000A624 (-DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RawAddDrawListEntries@CDrawListBatchManager@@QEAAJAEBV?$span@PEAVCBaseDrawListEntry@@$0?0@gsl@@@Z @ 0x180023418 (-RawAddDrawListEntries@CDrawListBatchManager@@QEAAJAEBV-$span@PEAVCBaseDrawListEntry@@$0-0@gsl@@.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x180025230 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x180025284 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseDrawListEntry@@$0A@@@QEAAJPEFBQEAVCBaseDrawListEntry@@I@Z @ 0x18002551C (-AddMultipleAndSet@-$DynArray@PEAVCBaseDrawListEntry@@$0A@@@QEAAJPEFBQEAVCBaseDrawListEntry@@I@Z.c)
 *     ??$TakeItemFromCache@VCGroupDrawListEntry@@@CDrawListBatchManager@@CAJPEAV?$ShrinkableReferenceArray@PEAVCGroupDrawListEntry@@@@PEAPEAVCGroupDrawListEntry@@@Z @ 0x180025594 (--$TakeItemFromCache@VCGroupDrawListEntry@@@CDrawListBatchManager@@CAJPEAV-$ShrinkableReferenceA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CBatchOptimizer::Flush(CBatchOptimizer *this)
{
  CBatchOptimizer *i; // rdi
  int v2; // edx
  int v3; // r8d
  char *v4; // rsi
  __int64 v5; // rdx
  unsigned int v6; // r15d
  char *v7; // rbp
  __int64 v8; // rbp
  unsigned int v9; // r14d
  __int64 v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // r14d
  char *v13; // rdx
  int v14; // r10d
  char *v15; // r8
  __int64 v16; // r9
  _DWORD *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // ebx
  __int64 v26; // rbp
  int v27; // eax
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // ebx
  unsigned int v31; // ecx
  _QWORD v32[2]; // [rsp+30h] [rbp-48h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v34; // [rsp+80h] [rbp+8h] BYREF
  __int64 v35; // [rsp+88h] [rbp+10h] BYREF

  for ( i = this; *((_BYTE *)i + 4240); CBatchOptimizer::TryMergeOneLayer(i) )
  {
    if ( *((_DWORD *)i + 8) <= 1u )
      break;
  }
  v2 = *((_DWORD *)i + 8);
  if ( v2 )
  {
    v3 = *((_DWORD *)i + 8);
    do
    {
      v2 = v3;
      this = (CBatchOptimizer *)*((int *)i + v3 + 11);
      if ( *((_DWORD *)i + 130 * (_QWORD)this + 25) )
        break;
      CBatchOptimizer::DiscardEmptyLayers(i, v3 - 1, 1u);
      v2 = *((_DWORD *)i + 8);
      v3 = v2;
    }
    while ( v2 );
  }
  if ( v2 )
  {
    while ( 1 )
    {
      v4 = (char *)i + 520 * *((int *)i + 12);
      v5 = *((_QWORD *)v4 + 14);
      v6 = *((_DWORD *)v4 + 24);
      v7 = v4 + 120;
      if ( v5 )
      {
        v8 = *((_QWORD *)i + 5);
        if ( v8 )
        {
          wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v8 + 24, v5);
          *(_DWORD *)(v8 + 36) += *((_DWORD *)v4 + 25);
          v7 = v4 + 120;
        }
        else
        {
          v9 = *((_DWORD *)v4 + 25);
          if ( v9 > 1 || (v7 = v4 + 120, *((_DWORD *)v4 + 26)) )
          {
            v7 = v4 + 120;
            v18 = v6 - v9;
            if ( v6 != v9 )
            {
              v26 = v18;
              v32[0] = v18;
              if ( v18 < 0 || (v32[1] = v4 + 120, v4 == (char *)-120LL) && v18 )
              {
                gsl::details::terminate(this);
                JUMPOUT(0x180025229LL);
              }
              v27 = CDrawListBatchManager::RawAddDrawListEntries(*((_QWORD *)i + 1), (unsigned int *)v32);
              if ( v27 < 0 )
                ModuleFailFastForHRESULT((unsigned int)v27, retaddr);
              v7 = &v4[8 * v26 + 120];
              v6 = v9;
            }
            v19 = *((_QWORD *)i + 1) + 80LL;
            v34 = 0LL;
            v20 = CDrawListBatchManager::TakeItemFromCache<CGroupDrawListEntry>(v19, &v34);
            if ( v20 < 0 )
              ModuleFailFastForHRESULT((unsigned int)v20, retaddr);
            v21 = v34;
            *(_DWORD *)(v34 + 32) = *((_DWORD *)v4 + 22);
            wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v21 + 24, *((_QWORD *)v4 + 14));
            *(_DWORD *)(v21 + 36) = *((_DWORD *)v4 + 25);
            *((_QWORD *)i + 5) = v21;
            ++*(_DWORD *)(v21 + 16);
            v22 = *((_QWORD *)i + 1);
            v35 = *((_QWORD *)i + 5);
            v23 = DynArray<CBaseDrawListEntry *,0>::AddMultipleAndSet(v22, &v35, 1LL);
            v25 = v23;
            if ( v23 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x9Au);
              ModuleFailFastForHRESULT(v25, retaddr);
            }
          }
        }
        this = (CBatchOptimizer *)*((_QWORD *)v4 + 14);
        *((_QWORD *)v4 + 14) = 0LL;
        if ( this )
          (*(void (__fastcall **)(CBatchOptimizer *))(*(_QWORD *)this + 8LL))(this);
      }
      if ( !v7 && v6 )
      {
        gsl::details::terminate(this);
        __debugbreak();
      }
      v10 = *((_QWORD *)i + 1);
      v11 = *(_DWORD *)(v10 + 24);
      v12 = v11 + v6;
      if ( v11 + v6 < v11 )
        break;
      if ( v12 > *(_DWORD *)(v10 + 20) )
      {
        v28 = DynArrayImpl<0>::AddMultipleAndSet(*((_QWORD *)i + 1), 8, v6, v7);
        v30 = v28;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xC0u);
          goto LABEL_48;
        }
      }
      else
      {
        memcpy_0((void *)(*(_QWORD *)v10 + 8LL * v11), v7, 8LL * v6);
        *(_DWORD *)(v10 + 24) = v12;
      }
      *((_QWORD *)v4 + 12) = 0LL;
      if ( !*((_DWORD *)v4 + 26) )
        *((_QWORD *)i + 5) = 0LL;
      *((_DWORD *)v4 + 26) = 0;
      v13 = 0LL;
      this = (CBatchOptimizer *)*((int *)i + 8);
      if ( (_DWORD)this != 1 )
      {
        v14 = *((_DWORD *)i + 12);
        v15 = (char *)this - 1;
        v16 = *((int *)i + 8);
        v17 = (_DWORD *)((char *)i + 48);
        do
        {
          ++v13;
          *v17 = v17[1];
          ++v17;
        }
        while ( v13 != v15 );
        *((_DWORD *)i + v16 + 11) = v14;
        this = (CBatchOptimizer *)*((unsigned int *)i + 8);
      }
      *((_DWORD *)i + 8) = (_DWORD)this - 1;
      if ( (_DWORD)this == 1 )
        goto LABEL_23;
    }
    v30 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0xB5u);
LABEL_48:
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x9Au);
    ModuleFailFastForHRESULT(v30, retaddr);
  }
LABEL_23:
  *((_QWORD *)i + 2) = 0LL;
  *((_DWORD *)i + 6) = 24;
  *((_BYTE *)i + 4240) = 0;
  *((_DWORD *)i + 12) = 0;
  *((_DWORD *)i + 13) = 1;
  *((_DWORD *)i + 14) = 2;
  *((_DWORD *)i + 15) = 3;
  *((_DWORD *)i + 16) = 4;
  *((_DWORD *)i + 17) = 5;
  *((_DWORD *)i + 18) = 6;
  *((_DWORD *)i + 19) = 7;
}
