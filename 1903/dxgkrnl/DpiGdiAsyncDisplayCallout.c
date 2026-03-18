/*
 * XREFs of DpiGdiAsyncDisplayCallout @ 0x1C029C710
 * Callers:
 *     ?SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@_K@Z @ 0x1C0246040 (-SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1C024615C (-SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGdiAsyncDisplayCallout(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _IO_WORKITEM *WorkItem; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  _QWORD *PoolWithTag; // rax

  v2 = 0;
  WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
  if ( WorkItem )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x74727044u);
    if ( PoolWithTag )
    {
      *PoolWithTag = a1;
      IoQueueWorkItemEx(WorkItem, DpiGdiHandleAsyncDisplayCallout, DelayedWorkQueue, PoolWithTag);
      return v2;
    }
    IoFreeWorkItem(WorkItem);
  }
  v2 = -1073741670;
  v8 = WdLogNewEntry5_WdLowResource(v4, v3, v6, v7);
  *(_QWORD *)(v8 + 24) = -1073741670LL;
  WdLogEvent5_WdLowResource(v8);
  return v2;
}
