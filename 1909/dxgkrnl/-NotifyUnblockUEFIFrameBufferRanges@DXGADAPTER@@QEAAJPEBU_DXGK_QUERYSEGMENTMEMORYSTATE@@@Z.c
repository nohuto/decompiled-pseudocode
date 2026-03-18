/*
 * XREFs of ?NotifyUnblockUEFIFrameBufferRanges@DXGADAPTER@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z @ 0x1C0033604
 * Callers:
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x1C003F0B0 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::NotifyUnblockUEFIFrameBufferRanges(
        DXGADAPTER *this,
        const struct _DXGK_QUERYSEGMENTMEMORYSTATE *a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  char *PoolWithTag; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _IO_WORKITEM *WorkItem; // r14
  __int64 v18; // rax
  __int64 v19; // rax

  v3 = 0;
  if ( a2->NumInvalidMemoryRanges == 1 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x28uLL, 0x4B677844u);
    if ( PoolWithTag )
    {
      WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)this + 24));
      if ( WorkItem )
      {
        *(_QWORD *)PoolWithTag = *(_QWORD *)((char *)this + 276);
        *(struct _DXGK_QUERYSEGMENTMEMORYSTATE *)(PoolWithTag + 8) = *a2;
        *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 24;
        *(DXGK_MEMORYRANGE *)(PoolWithTag + 24) = *a2->pMemoryRanges;
        v19 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v19 + 24) = 2546LL;
        WdLogEvent5_WdEvent(v19);
        IoQueueWorkItemEx(WorkItem, HandleUnblockUEFIFrameBufferRanges, DelayedWorkQueue, PoolWithTag);
        PoolWithTag = 0LL;
      }
      else
      {
        v3 = -1073741670;
        v18 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
        *(_QWORD *)(v18 + 24) = 2537LL;
        WdLogEvent5_WdLowResource(v18);
      }
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      v3 = -1073741670;
      v12 = WdLogNewEntry5_WdLowResource(v8, v7, v10, v11);
      *(_QWORD *)(v12 + 24) = 2529LL;
      WdLogEvent5_WdLowResource(v12);
    }
  }
  else
  {
    v3 = -1073741811;
    v6 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v6 + 24) = a2->NumInvalidMemoryRanges;
    WdLogEvent5_WdError(v6);
  }
  return v3;
}
