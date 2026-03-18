/*
 * XREFs of ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x180058510
 * Callers:
 *     ?ContinueLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18001473C (-ContinueLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x180014800 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x180057BF4 (-ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x180058AB0 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ?AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z @ 0x180065F38 (-AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z.c)
 *     ?UpdateAdapterInfo@CGlobalSurfaceManager@@UEAAXPEAVCDXGIEnumeration@@@Z @ 0x1800CEF30 (-UpdateAdapterInfo@CGlobalSurfaceManager@@UEAAXPEAVCDXGIEnumeration@@@Z.c)
 *     ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800CEFF0 (-EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?CreateTokenThread@CGlobalSurfaceManager@@IEAAJXZ @ 0x1800E0398 (-CreateTokenThread@CGlobalSurfaceManager@@IEAAJXZ.c)
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x1801ACF54 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(
        __int64 *a1,
        void (__fastcall ***a2)(_QWORD))
{
  __int64 v2; // rdi

  v2 = *a1;
  *a1 = (__int64)a2;
  if ( a2 )
    (**a2)(a2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a1;
}
