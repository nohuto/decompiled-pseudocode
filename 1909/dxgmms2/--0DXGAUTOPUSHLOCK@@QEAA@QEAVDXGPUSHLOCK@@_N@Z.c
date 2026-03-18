/*
 * XREFs of ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00037DC
 * Callers:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00037AC (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008559C (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C0085970 (-ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     ?AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0085B1C (-AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z.c)
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
    *(_QWORD *)(v5 + 24) = 1449LL;
    WdLogEvent5_WdAssertion(v5);
  }
  return this;
}
