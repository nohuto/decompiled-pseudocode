/*
 * XREFs of ?QueueSignal@DXGPROTECTEDSESSION@@QEAAJXZ @ 0x1C0261598
 * Callers:
 *     ?SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z @ 0x1C00448F4 (-SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGPROTECTEDSESSION::QueueSignal(char *Context)
{
  struct _EX_RUNDOWN_REF *v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _IO_WORKITEM *WorkItem; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v10; // rax

  v1 = (struct _EX_RUNDOWN_REF *)(Context + 128);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Context + 16) )
  {
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)Context + 2) + 16LL) + 192LL));
    if ( !WorkItem )
    {
      v8 = WdLogNewEntry5_WdLowResource(v4, v3, v6, v7);
      *(_QWORD *)(v8 + 24) = 1191LL;
      WdLogEvent5_WdLowResource(v8);
      ExReleaseRundownProtection(v1);
      return 3221225495LL;
    }
    v10 = WdLogNewEntry5_WdEvent(v4);
    *(_QWORD *)(v10 + 24) = 1196LL;
    WdLogEvent5_WdEvent(v10);
    _InterlockedIncrement((volatile signed __int32 *)Context + 18);
    IoQueueWorkItemEx(WorkItem, DXGPROTECTEDSESSION::SignalFenceWorkItemRoutine, DelayedWorkQueue, Context);
  }
  else
  {
    Context[136] = 1;
  }
  return 0LL;
}
