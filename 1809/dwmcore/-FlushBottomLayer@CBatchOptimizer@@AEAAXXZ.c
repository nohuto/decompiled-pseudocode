/*
 * XREFs of ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x180024D34
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800239F0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x180024CD0 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?ContinueLayer@CBatchOptimizer@@AEAAXH@Z @ 0x180189FF8 (-ContinueLayer@CBatchOptimizer@@AEAAXH@Z.c)
 * Callees:
 *     ?RawAddDrawListEntries@CDrawListBatchManager@@QEAAJAEBV?$span@PEAVCBaseDrawListEntry@@$0?0@gsl@@@Z @ 0x180023418 (-RawAddDrawListEntries@CDrawListBatchManager@@QEAAJAEBV-$span@PEAVCBaseDrawListEntry@@$0-0@gsl@@.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x180025230 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseDrawListEntry@@$0A@@@QEAAJPEFBQEAVCBaseDrawListEntry@@I@Z @ 0x18002551C (-AddMultipleAndSet@-$DynArray@PEAVCBaseDrawListEntry@@$0A@@@QEAAJPEFBQEAVCBaseDrawListEntry@@I@Z.c)
 *     ??$TakeItemFromCache@VCGroupDrawListEntry@@@CDrawListBatchManager@@CAJPEAV?$ShrinkableReferenceArray@PEAVCGroupDrawListEntry@@@@PEAPEAVCGroupDrawListEntry@@@Z @ 0x180025594 (--$TakeItemFromCache@VCGroupDrawListEntry@@@CDrawListBatchManager@@CAJPEAV-$ShrinkableReferenceA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CBatchOptimizer::FlushBottomLayer(CBatchOptimizer *this)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  CBatchOptimizer *v3; // rdi
  char *v4; // rbx
  char *v5; // rbp
  __int64 v6; // rdx
  unsigned int v7; // r15d
  __int64 v8; // rbp
  unsigned int v9; // r14d
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  __int64 v19; // rbp
  int v20; // eax
  __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  char *v22; // [rsp+38h] [rbp-30h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v24; // [rsp+70h] [rbp+8h] BYREF
  __int64 v25; // [rsp+78h] [rbp+10h] BYREF

  v1 = *((int *)this + 12);
  v2 = 520 * v1;
  v3 = this;
  v4 = (char *)this + 520 * v1 + 120;
  v5 = v4;
  v6 = *((_QWORD *)this + 65 * v1 + 14);
  v7 = *((_DWORD *)this + 130 * v1 + 24);
  if ( v6 )
  {
    v8 = *((_QWORD *)this + 5);
    if ( v8 )
    {
      wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v8 + 24, v6);
      *(_DWORD *)(v8 + 36) += *(_DWORD *)((char *)v3 + v2 + 100);
      v5 = v4;
    }
    else
    {
      v9 = *(_DWORD *)((char *)this + v2 + 100);
      if ( v9 > 1 || (v5 = (char *)this + 520 * v1 + 120, *(_DWORD *)((char *)this + v2 + 104)) )
      {
        v5 = (char *)this + 520 * v1 + 120;
        v10 = v7 - v9;
        if ( v7 != v9 )
        {
          v19 = v10;
          v21 = v10;
          if ( v10 < 0 || (v22 = v4) == 0LL && v10 )
          {
            gsl::details::terminate(this);
            JUMPOUT(0x180024EF1LL);
          }
          v20 = CDrawListBatchManager::RawAddDrawListEntries(*((_QWORD *)this + 1), (unsigned int *)&v21);
          if ( v20 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v20, retaddr);
          v5 = &v4[8 * v19];
          v7 = v9;
        }
        v11 = *((_QWORD *)v3 + 1);
        v24 = 0LL;
        v12 = CDrawListBatchManager::TakeItemFromCache<CGroupDrawListEntry>(v11 + 80, &v24);
        if ( v12 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v12, retaddr);
        v13 = v24;
        *(_DWORD *)(v24 + 32) = *(_DWORD *)((char *)v3 + v2 + 88);
        wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(
          v13 + 24,
          *(_QWORD *)((char *)v3 + v2 + 112));
        *(_DWORD *)(v13 + 36) = *(_DWORD *)((char *)v3 + v2 + 100);
        *((_QWORD *)v3 + 5) = v13;
        ++*(_DWORD *)(v13 + 16);
        v14 = *((_QWORD *)v3 + 1);
        v25 = *((_QWORD *)v3 + 5);
        v22 = (char *)&v25;
        v21 = 1LL;
        v15 = CDrawListBatchManager::RawAddDrawListEntries(v14, (unsigned int *)&v21);
        if ( v15 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v15, retaddr);
      }
    }
    this = *(CBatchOptimizer **)((char *)v3 + v2 + 112);
    *(_QWORD *)((char *)v3 + v2 + 112) = 0LL;
    if ( this )
      (*(void (__fastcall **)(CBatchOptimizer *))(*(_QWORD *)this + 8LL))(this);
  }
  if ( !v5 && v7 )
  {
    gsl::details::terminate(this);
    __debugbreak();
  }
  v16 = DynArray<CBaseDrawListEntry *,0>::AddMultipleAndSet(*((_QWORD *)v3 + 1), v5, v7);
  v18 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x9Au);
    ModuleFailFastForHRESULT(v18, retaddr);
  }
  *(_DWORD *)((char *)v3 + v2 + 96) = 0;
  *(_DWORD *)((char *)v3 + v2 + 100) = 0;
  if ( !*(_DWORD *)((char *)v3 + v2 + 104) )
    *((_QWORD *)v3 + 5) = 0LL;
  *(_DWORD *)((char *)v3 + v2 + 104) = 0;
}
