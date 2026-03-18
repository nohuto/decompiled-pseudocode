/*
 * XREFs of ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x18004D008
 * Callers:
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x1800115D4 (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x18004C89C (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 * Callees:
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x1800115D4 (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 *     ?PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z @ 0x1800116E8 (-PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?MatchStateToHomogeneousLayer@CBatchOptimizer@@CA_NAEBUSharedStateLayer@@AEBUStateBlock@2@@Z @ 0x1800174C0 (-MatchStateToHomogeneousLayer@CBatchOptimizer@@CA_NAEBUSharedStateLayer@@AEBUStateBlock@2@@Z.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x18004C848 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 *     ?GetCommonSuperset@CRenderingEffect@@SA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAV1@0@Z @ 0x18004D188 (-GetCommonSuperset@CRenderingEffect@@SA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@.c)
 *     ??1?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800CF950 (--1-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CBatchOptimizer::ConsolidateAdjacentHomogeneousLayers(CBatchOptimizer *this, int a2)
{
  __int64 v3; // rcx
  char *v4; // rdi
  __int64 *v5; // rsi
  char *v6; // rdx
  __int64 *v7; // r14
  CBatchOptimizer *v8; // r9
  int v9; // r10d
  void (__fastcall ****CommonSuperset)(_QWORD); // rax
  void (__fastcall ***v11)(_QWORD); // rbx
  char v12; // [rsp+40h] [rbp+8h] BYREF
  void (__fastcall ***v13)(_QWORD); // [rsp+50h] [rbp+18h] BYREF

  if ( a2 != *((_DWORD *)this + 8) - 1 )
  {
    v3 = 520LL * *((int *)this + a2 + 12);
    if ( *(_DWORD *)((char *)this + v3 + 100) )
    {
      v4 = (char *)this + v3;
      v5 = (__int64 *)((char *)this + v3 + 112);
      if ( *v5 )
      {
        v6 = (char *)this + 520 * *((int *)this + a2 + 13) + 80;
        v7 = (__int64 *)(v6 + 32);
        if ( *((_QWORD *)v6 + 4) )
        {
          if ( CBatchOptimizer::MatchStateToHomogeneousLayer(
                 (const struct SharedStateLayer *)(v4 + 80),
                 (const struct SharedStateLayer::StateBlock *)v6) )
          {
            CBatchOptimizer::PurgeStateSettingEntriesFromLayer(v8, v9 + 1);
            CommonSuperset = (void (__fastcall ****)(_QWORD))CRenderingEffect::GetCommonSuperset(&v12, *v5, *v7);
            v11 = *CommonSuperset;
            *CommonSuperset = 0LL;
            v13 = v11;
            wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::~com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(&v12);
            if ( v11 )
            {
              wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v5, v11);
              wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v7, v11);
              *((_DWORD *)v4 + 26) = 1;
            }
            wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::~com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(&v13);
          }
        }
      }
    }
    else
    {
      CBatchOptimizer::TryRemoveEmptyStateSettingLayer(this, a2);
    }
  }
}
