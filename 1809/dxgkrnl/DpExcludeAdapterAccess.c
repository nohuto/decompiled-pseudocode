/*
 * XREFs of DpExcludeAdapterAccess @ 0x1C0262380
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1C01C7DD0 (DxgkIsAdapterCoreSyncAcquired.c)
 */

__int64 __fastcall DpExcludeAdapterAccess(PDEVICE_OBJECT DeviceObject, int a2, __int64 a3, __int64 a4)
{
  _QWORD *PoolWithTag; // r14
  PIO_WORKITEM WorkItem; // rbp
  PVOID DeviceExtension; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rax
  int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  NTSTATUS v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF

  PoolWithTag = 0LL;
  WorkItem = 0LL;
  if ( !DeviceObject || !a3 )
  {
    LODWORD(v13) = -1073741811;
    v27 = WdLogNewEntry5_WdError(DeviceObject);
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v27);
LABEL_32:
    if ( (int)v13 >= 0 )
      return (unsigned int)v13;
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    goto LABEL_35;
  }
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( !DeviceExtension
    || *((_DWORD *)DeviceExtension + 4) != 1953656900
    || (v11 = 2LL, *((_DWORD *)DeviceExtension + 5) != 2) )
  {
    v12 = -1073741811LL;
    goto LABEL_29;
  }
  if ( KeGetCurrentIrql() )
  {
    v12 = -1073741811LL;
    LODWORD(v13) = -1073741811;
    if ( *(_DWORD *)(*((_QWORD *)DeviceExtension + 5) + 28LL) >= 0x2003u )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(DeviceObject);
      v14[3] = 275LL;
      v14[4] = 21LL;
      v14[5] = -1073741811LL;
      WdLogEvent5_WdCriticalError(v14);
    }
    goto LABEL_9;
  }
  if ( ((*((_DWORD *)DeviceExtension + 972) - 1) & 0xFFFFFFFB) == 0 )
  {
    v12 = -1073741661LL;
LABEL_29:
    LODWORD(v13) = v12;
LABEL_9:
    v15 = WdLogNewEntry5_WdError(DeviceObject);
    *(_QWORD *)(v15 + 24) = v12;
LABEL_10:
    WdLogEvent5_WdError(v15);
    return (unsigned int)v13;
  }
  v16 = a2 & 2;
  if ( (a2 & 2) != 0 && ((a2 & 1) != 0 || !DxgkIsAdapterCoreSyncAcquired(*((DXGADAPTER **)DeviceExtension + 474), 2)) )
  {
    LODWORD(v13) = -1073741637;
    v15 = WdLogNewEntry5_WdError(DeviceObject);
    *(_QWORD *)(v15 + 24) = -1073741637LL;
    goto LABEL_10;
  }
  if ( (a2 & 4) != 0 && (!*((_QWORD *)DeviceExtension + 354) || !*((_QWORD *)DeviceExtension + 355)) )
  {
    LODWORD(v13) = -1073741637;
    v17 = WdLogNewEntry5_WdWarning(DeviceObject, v11, a3);
    *(_QWORD *)(v17 + 24) = DeviceExtension;
    WdLogEvent5_WdWarning(v17);
    return (unsigned int)v13;
  }
  WorkItem = IoAllocateWorkItem(DeviceObject);
  if ( !WorkItem )
  {
    LODWORD(v13) = -1073741670;
    v19 = WdLogNewEntry5_WdLowResource(v18);
    *(_QWORD *)(v19 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v19);
    return (unsigned int)v13;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x68uLL, 0x74727044u);
  if ( PoolWithTag )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    *PoolWithTag = a3;
    PoolWithTag[1] = a4;
    *((_DWORD *)PoolWithTag + 4) = a2;
    PoolWithTag[3] = (unsigned __int64)&Event & -(__int64)(v16 != 0);
    memset(PoolWithTag + 4, 0, 0x48uLL);
    EtwActivityIdControl(3u, (LPGUID)(PoolWithTag + 5));
    PoolWithTag[12] = MEMORY[0xFFFFF78000000014];
    *((_DWORD *)PoolWithTag + 14) = 13;
    *((_BYTE *)PoolWithTag + 80) = -1;
    v22 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, WorkItem, File, 1u, 0x20u);
    v13 = v22;
    if ( v22 >= 0 )
    {
      IoQueueWorkItemEx(WorkItem, DpiFdoExcludeAdapterAccess, DelayedWorkQueue, PoolWithTag);
      if ( v16 )
        LODWORD(v13) = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    }
    else
    {
      v26 = WdLogNewEntry5_WdWarning(v24, v23, v25);
      *(_QWORD *)(v26 + 24) = v13;
      WdLogEvent5_WdWarning(v26);
    }
    goto LABEL_32;
  }
  LODWORD(v13) = -1073741801;
  v21 = WdLogNewEntry5_WdLowResource(v20);
  *(_QWORD *)(v21 + 24) = -1073741801LL;
  WdLogEvent5_WdLowResource(v21);
LABEL_35:
  if ( WorkItem )
    IoFreeWorkItem(WorkItem);
  return (unsigned int)v13;
}
