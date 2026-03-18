/*
 * XREFs of ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@K_K@Z @ 0x1C0084618
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00749D0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?PinAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C00845E4 (-PinAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z.c)
 *     ?PinAllocationAt@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@K_K@Z @ 0x1C00AE3DC (-PinAllocationAt@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@K_K@Z.c)
 * Callees:
 *     memset @ 0x1C0018980 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00645B0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C008454C (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C0084710 (-ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PinOneAllocation(VIDMM_GLOBAL *this, VIDMM_DEVICE **a2, int a3, __int64 a4)
{
  __int64 result; // rax
  VIDMM_DEVICE *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // rax
  _QWORD v15[10]; // [rsp+30h] [rbp-58h] BYREF
  bool v16; // [rsp+98h] [rbp+10h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  result = VIDMM_DEVICE::ReferencePinnedAllocation(a2[1], (struct VIDMM_ALLOC *)a2, &v16);
  if ( (int)result >= 0 && !v16 )
  {
    memset(v15, 0, sizeof(v15));
    v9 = *a2;
    LODWORD(v15[0]) = 203;
    v15[2] = a2;
    HIDWORD(v15[4]) = a3;
    v10 = *(_QWORD *)v9;
    v15[5] = a4;
    LODWORD(v15[4]) = (**(_DWORD **)(v10 + 504) & 0x20000) != 0 ? 5 : 0;
    v13 = VIDMM_GLOBAL::QueueDeferredCommand(
            this,
            (struct VIDMM_PAGING_QUEUE *)(*((_QWORD *)a2[1] + 9) + 176LL * (*(_DWORD *)(v10 + 76) & 0x3F)),
            (struct _VIDMM_DEFERRED_COMMAND *)v15,
            1,
            0LL);
    if ( v13 < 0 )
    {
      v14 = WdLogNewEntry5_WdWarning(v12, v11);
      *(_QWORD *)(v14 + 24) = a2;
      WdLogEvent5_WdWarning(v14);
      VIDMM_DEVICE::UnreferencePinnedAllocation(a2[1], (struct VIDMM_ALLOC *)a2, 1);
    }
    return (unsigned int)v13;
  }
  return result;
}
