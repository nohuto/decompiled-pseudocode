/*
 * XREFs of ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C007C9E4
 * Callers:
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C005B6B8 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005C4E0 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005CF70 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00B7668 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmCompareForInsertAlignedRange(ULONG_PTR *a1, struct _RTL_BALANCED_NODE *a2)
{
  ULONG_PTR v2; // r8
  struct _RTL_BALANCED_NODE *v4; // rax
  unsigned __int64 v5; // rcx

  v2 = a2[1].ParentValue - (unsigned __int64)a2[1].Children[1];
  if ( v2 < *a1 )
    return 0xFFFFFFFFLL;
  if ( v2 > *a1 )
    return 1LL;
  v4 = a2[2].Children[1];
  v5 = a1[1];
  if ( (unsigned __int64)v4 < v5 )
    return 0xFFFFFFFFLL;
  return (unsigned __int64)v4 > v5;
}
