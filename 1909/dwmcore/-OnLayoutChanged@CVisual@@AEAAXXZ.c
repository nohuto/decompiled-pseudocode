/*
 * XREFs of ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18007B730
 * Callers:
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1800219C0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180087420 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x1800A09A8 (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 * Callees:
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x180004010 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x180004130 (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x180005100 (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180006E98 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18007BCD4 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 */

void __fastcall CVisual::OnLayoutChanged(CVisual *this)
{
  __int64 v2; // rbx
  int v3; // r10d
  __int64 ProjectedShadowCasters; // rax
  __int64 v5; // r14
  CProjectedShadowCaster **v6; // rsi
  unsigned __int64 v7; // rbp
  __int64 ProjectedShadowReceivers; // rax
  CProjectedShadowReceiver **v9; // rsi
  unsigned __int64 v10; // rdi

  CVisual::ClearContentTreeDataCaches(this);
  v2 = 0LL;
  v3 = **((_DWORD **)this + 28);
  if ( (v3 & 0x20000) != 0 )
  {
    ProjectedShadowCasters = CVisual::GetProjectedShadowCasters((__int64)this);
    v5 = 0LL;
    v6 = *(CProjectedShadowCaster ***)ProjectedShadowCasters;
    v7 = (unsigned __int64)(*(_QWORD *)(ProjectedShadowCasters + 8) - *(_QWORD *)ProjectedShadowCasters + 7LL) >> 3;
    if ( *(_QWORD *)ProjectedShadowCasters > *(_QWORD *)(ProjectedShadowCasters + 8) )
      v7 = 0LL;
    if ( v7 )
    {
      do
      {
        CProjectedShadowCaster::InvalidateMaskContent(*v6);
        ++v5;
        ++v6;
      }
      while ( v5 != v7 );
      v3 = **((_DWORD **)this + 28);
    }
  }
  if ( (v3 & 0x10000) != 0 )
  {
    ProjectedShadowReceivers = CVisual::GetProjectedShadowReceivers((__int64)this);
    v9 = *(CProjectedShadowReceiver ***)ProjectedShadowReceivers;
    v10 = (unsigned __int64)(*(_QWORD *)(ProjectedShadowReceivers + 8) - *(_QWORD *)ProjectedShadowReceivers + 7LL) >> 3;
    if ( *(_QWORD *)ProjectedShadowReceivers > *(_QWORD *)(ProjectedShadowReceivers + 8) )
      v10 = 0LL;
    if ( v10 )
    {
      do
      {
        CProjectedShadowReceiver::InvalidateMaskContent(*v9);
        ++v2;
        ++v9;
      }
      while ( v2 != v10 );
    }
  }
}
