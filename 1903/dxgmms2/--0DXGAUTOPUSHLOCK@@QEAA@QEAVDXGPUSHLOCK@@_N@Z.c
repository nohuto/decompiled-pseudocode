/*
 * XREFs of ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000381C
 * Callers:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00037EC (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008433C (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C0084710 (-ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     ?AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C00848BC (-AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     <none>
 */

DXGAUTOPUSHLOCK *__fastcall DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK(DXGAUTOPUSHLOCK *this, struct _KTHREAD **a2, char a3)
{
  __int64 v5; // rax

  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = a2;
  if ( !a3 && a2 && a2[1] == KeGetCurrentThread() )
  {
    v5 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v5 + 24) = 1448LL;
    WdLogEvent5_WdAssertion(v5);
  }
  return this;
}
