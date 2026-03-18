/*
 * XREFs of DpiMiracastIoCompleteRoutine @ 0x1C0046350
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqqqq @ 0x1C002FFF8 (McTemplateK0pqqqq.c)
 */

__int64 __fastcall DpiMiracastIoCompleteRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  bool v5; // zf
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  int v10; // [rsp+20h] [rbp-28h]
  int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+38h] [rbp-10h]

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
  {
    v13 = *(_DWORD *)(a2 + 48);
    v12 = *(_DWORD *)(a2 + 56);
    v11 = 0;
    v10 = 0;
    McTemplateK0pqqqq(
      a1,
      &EventCompleteMiracastSendUserModeRequest,
      (const GUID *)a3,
      *(_QWORD *)(a3 + 8),
      v10,
      v11,
      v12,
      v13);
  }
  v5 = *(_DWORD *)(a3 + 56) == 0;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(a2 + 48);
  if ( !v5 )
    IoFreeIrp((PIRP)a2);
  if ( *(_QWORD *)(a3 + 32) || *(_QWORD *)(a3 + 48) && *(_QWORD *)(a3 + 24) )
  {
    WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
    if ( WorkItem )
    {
      IoQueueWorkItemEx(WorkItem, DpiMiracastIoCompleteWork, DelayedWorkQueue, (PVOID)a3);
    }
    else
    {
      v8 = WdLogNewEntry5_WdLowResource(v7);
      *(_QWORD *)(v8 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v8);
    }
  }
  else
  {
    ObDereferenceObjectDeferDelete(*(PVOID *)a3);
    ExFreePoolWithTag((PVOID)a3, 0);
  }
  return 3221225494LL;
}
