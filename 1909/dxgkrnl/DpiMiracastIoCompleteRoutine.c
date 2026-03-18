/*
 * XREFs of DpiMiracastIoCompleteRoutine @ 0x1C004CE60
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqtqq @ 0x1C0035958 (McTemplateK0pqtqq.c)
 */

__int64 __fastcall DpiMiracastIoCompleteRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  bool v5; // zf
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  int v13; // [rsp+20h] [rbp-28h]
  int v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+30h] [rbp-18h]
  int v16; // [rsp+38h] [rbp-10h]

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
  {
    v16 = *(_DWORD *)(a2 + 48);
    v15 = *(_DWORD *)(a2 + 56);
    v14 = 0;
    v13 = 0;
    McTemplateK0pqtqq(
      a1,
      &EventCompleteMiracastSendUserModeRequest,
      (const GUID *)a3,
      *(_QWORD *)(a3 + 8),
      v13,
      v14,
      v15,
      v16);
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
      v11 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
      *(_QWORD *)(v11 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v11);
    }
  }
  else
  {
    ObDereferenceObjectDeferDelete(*(PVOID *)a3);
    ExFreePoolWithTag((PVOID)a3, 0);
  }
  return 3221225494LL;
}
