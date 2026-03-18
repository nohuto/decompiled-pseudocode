/*
 * XREFs of ?DxgkCddUnsubscribeWnfStateChange@@YAXPEAU_CDD_WNF_CALLBACK_CONTEXT@@@Z @ 0x1C014BF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgkCddUnsubscribeWnfStateChange(struct _EX_RUNDOWN_REF *Context)
{
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax

  ExWaitForRundownProtectionRelease(Context + 4);
  WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
  if ( WorkItem )
  {
    IoQueueWorkItemEx(WorkItem, DxgkUnsubscribeWnfStateChangeWork, DelayedWorkQueue, Context);
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v4, v3, v5);
    *(_QWORD *)(v6 + 24) = 3870LL;
    WdLogEvent5_WdError(v6);
  }
}
