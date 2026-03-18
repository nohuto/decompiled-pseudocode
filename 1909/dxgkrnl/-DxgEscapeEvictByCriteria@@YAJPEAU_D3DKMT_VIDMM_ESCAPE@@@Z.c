/*
 * XREFs of ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C023F414
 * Callers:
 *     DxgkEscape @ 0x1C0106440 (DxgkEscape.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C025E458 (-EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z.c)
 */

__int64 __fastcall DxgEscapeEvictByCriteria(struct _D3DKMT_VIDMM_ESCAPE *a1, __int64 a2)
{
  __int64 v3; // rax
  DXGPROCESS *Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax

  if ( a1->Type != D3DKMT_VIDMMESCAPETYPE_EVICT_BY_CRITERIA )
  {
    v3 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v3 + 24) = 356LL;
    WdLogEvent5_WdAssertion(v3);
  }
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
  if ( Current )
    return DXGPROCESS::EvictAllResources(Current, &a1->EvictByCriteria);
  v8 = WdLogNewEntry5_WdError(v6, v5, v7);
  *(_QWORD *)(v8 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v8);
  return 3221225485LL;
}
