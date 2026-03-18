/*
 * XREFs of ??1?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800CFAA0
 * Callers:
 *     ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x180057BF4 (-ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z.c)
 *     ??_ECGroupDrawListEntry@@EEAAPEAXI@Z @ 0x1800CFA50 (--_ECGroupDrawListEntry@@EEAAPEAXI@Z.c)
 *     ??1SharedStateLayer@@QEAA@XZ @ 0x1800CFA90 (--1SharedStateLayer@@QEAA@XZ.c)
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x1801ACF54 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::~com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
