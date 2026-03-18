/*
 * XREFs of ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x180015D84
 * Callers:
 *     ?ContinueLayer@CBatchOptimizer@@AEAAXH@Z @ 0x180015CC0 (-ContinueLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18004D4D0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x18004E740 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 * Callees:
 *     ?RawAddDrawListEntries@CDrawListBatchManager@@QEAAJAEBV?$span@PEAVCBaseDrawListEntry@@$0?0@gsl@@@Z @ 0x180015F34 (-RawAddDrawListEntries@CDrawListBatchManager@@QEAAJAEBV-$span@PEAVCBaseDrawListEntry@@$0-0@gsl@@.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x18004C848 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 *     ??$TakeItemFromCache@VCGroupDrawListEntry@@@CDrawListBatchManager@@CAJPEAV?$ShrinkableReferenceArray@PEAVCGroupDrawListEntry@@@@PEAPEAVCGroupDrawListEntry@@@Z @ 0x18004CB74 (--$TakeItemFromCache@VCGroupDrawListEntry@@@CDrawListBatchManager@@CAJPEAV-$ShrinkableReferenceA.c)
 *     ?reset@?$com_ptr_t@VCD3DSurface@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C993C (-reset@-$com_ptr_t@VCD3DSurface@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CBatchOptimizer::FlushBottomLayer(CBatchOptimizer *this)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  char *v4; // rbx
  char *v5; // r14
  unsigned int v6; // r15d
  char *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // r14
  unsigned int v10; // r12d
  int v11; // eax
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // [rsp+20h] [rbp-10h] BYREF
  char *v25; // [rsp+28h] [rbp-8h]
  void *retaddr; // [rsp+68h] [rbp+38h]
  __int64 v27; // [rsp+70h] [rbp+40h] BYREF
  __int64 v28; // [rsp+78h] [rbp+48h] BYREF

  v1 = *((int *)this + 12);
  v2 = 520 * v1;
  v4 = (char *)this + 520 * v1 + 120;
  v5 = v4;
  v6 = *((_DWORD *)this + 130 * v1 + 24);
  v7 = (char *)this + 520 * v1;
  v8 = *((_QWORD *)v7 + 14);
  if ( v8 )
  {
    v9 = *((_QWORD *)this + 5);
    if ( v9 )
    {
      wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v9 + 24, v8);
      *(_DWORD *)(v9 + 40) += *(_DWORD *)((char *)this + v2 + 100);
      v5 = v4;
    }
    else
    {
      v10 = *(_DWORD *)((char *)this + v2 + 100);
      if ( v10 > 1 || (v5 = (char *)this + 520 * v1 + 120, *(_DWORD *)((char *)this + v2 + 104)) )
      {
        v5 = (char *)this + 520 * v1 + 120;
        v11 = v6 - v10;
        if ( v6 != v10 )
        {
          v12 = v11;
          v24 = v11;
          if ( v11 < 0 || (v25 = v4) == 0LL && v11 )
          {
            ((void (__fastcall *)(CBatchOptimizer *, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
              this,
              v8);
            __debugbreak();
          }
          v13 = CDrawListBatchManager::RawAddDrawListEntries(*((_QWORD *)this + 1), &v24);
          if ( v13 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v13, retaddr, v14);
          v5 = &v4[8 * v12];
          v6 = v10;
        }
        v15 = *((_QWORD *)this + 1);
        v27 = 0LL;
        v16 = CDrawListBatchManager::TakeItemFromCache<CGroupDrawListEntry>(v15 + 80, &v27);
        if ( v16 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v16, retaddr, v17);
        v18 = v27;
        *(_DWORD *)(v27 + 32) = *(_DWORD *)((char *)this + v2 + 88);
        *(_BYTE *)(v18 + 36) = *((_BYTE *)this + v2 + 92);
        wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v18 + 24, *((_QWORD *)v7 + 14));
        *(_DWORD *)(v18 + 40) = *(_DWORD *)((char *)this + v2 + 100);
        *((_QWORD *)this + 5) = v18;
        ++*(_DWORD *)(v18 + 16);
        v19 = *((_QWORD *)this + 1);
        v28 = *((_QWORD *)this + 5);
        v25 = (char *)&v28;
        v24 = 1LL;
        v20 = CDrawListBatchManager::RawAddDrawListEntries(v19, &v24);
        if ( v20 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v20, retaddr, v21);
      }
    }
    wil::com_ptr_t<CD3DSurface,wil::err_returncode_policy>::reset(v7 + 112);
  }
  v24 = v6;
  v25 = v5;
  if ( !v5 && v6 )
  {
    ((void (__fastcall *)(CBatchOptimizer *, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(this, v8);
    __debugbreak();
  }
  v22 = CDrawListBatchManager::RawAddDrawListEntries(*((_QWORD *)this + 1), &v24);
  if ( v22 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v22, retaddr, v23);
  *(_DWORD *)((char *)this + v2 + 96) = 0;
  *(_DWORD *)((char *)this + v2 + 100) = 0;
  if ( !*(_DWORD *)((char *)this + v2 + 104) )
    *((_QWORD *)this + 5) = 0LL;
  *(_DWORD *)((char *)this + v2 + 104) = 0;
}
