/*
 * XREFs of ?DxgkCddUnsubscribeWnfStateChange@@YAXPEAU_CDD_WNF_CALLBACK_CONTEXT@@@Z @ 0x1C013B9A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgkCddUnsubscribeWnfStateChange(struct _EX_RUNDOWN_REF *Context)
{
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v3; // rcx
  __int64 v4; // rax

  ExWaitForRundownProtectionRelease(Context + 4);
  WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
  if ( WorkItem )
  {
    IoQueueWorkItemEx(WorkItem, DxgkUnsubscribeWnfStateChangeWork, DelayedWorkQueue, Context);
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v4 + 24) = 3911LL;
    WdLogEvent5_WdError(v4);
  }
}
