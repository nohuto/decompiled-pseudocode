/*
 * XREFs of ?CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA?AV?$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18002649C
 * Callers:
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x180025CD8 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180026410 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 * Callees:
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x18004C450 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 */

_QWORD *__fastcall CDrawListBatchManager::CloseCurrentDrawListEntryBatch(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  CBatchOptimizer *v7; // rcx
  __int64 v8; // rax

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 168);
  if ( v4 )
  {
    v7 = *(CBatchOptimizer **)(a1 + 176);
    if ( v7 )
    {
      CBatchOptimizer::Flush(v7);
      v4 = *(_QWORD *)(a1 + 168);
    }
    *(_DWORD *)(v4 + 52) = *(_DWORD *)(a1 + 24);
    v8 = *(_QWORD *)(a1 + 168);
    *(_QWORD *)(a1 + 168) = 0LL;
    v3 = v8;
  }
  *a2 = v3;
  return a2;
}
