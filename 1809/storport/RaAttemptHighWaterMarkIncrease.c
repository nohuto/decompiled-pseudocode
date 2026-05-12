/*
 * XREFs of RaAttemptHighWaterMarkIncrease @ 0x1C004BD20
 * Callers:
 *     RaidStartIoPacket @ 0x1C0009C40 (RaidStartIoPacket.c)
 *     StorSubmitIoGatewayItem @ 0x1C000D7A8 (StorSubmitIoGatewayItem.c)
 *     StorNextIoGatewayItem @ 0x1C0013D44 (StorNextIoGatewayItem.c)
 *     RaAttemptHighWaterMarkIncreasePassive @ 0x1C0028400 (RaAttemptHighWaterMarkIncreasePassive.c)
 * Callees:
 *     StorAllocateContiguousIoResources @ 0x1C0007F4C (StorAllocateContiguousIoResources.c)
 *     RaidAllocatePool @ 0x1C00081B4 (RaidAllocatePool.c)
 *     McTemplateK0zqqqqq @ 0x1C004BB3C (McTemplateK0zqqqqq.c)
 *     McTemplateK0zqqqqqqq @ 0x1C004BC1C (McTemplateK0zqqqqqqq.c)
 */

char __fastcall RaAttemptHighWaterMarkIncrease(__int64 a1, int a2)
{
  char v3; // r14
  __int64 v4; // rbx
  PIO_WORKITEM WorkItem; // rax
  __int64 v7; // r9
  __int64 v8; // r15
  __int64 Pool; // rax
  __int64 v10; // r8
  struct _SLIST_ENTRY *v11; // rdi
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  union _SLIST_HEADER *v15; // rcx
  ULONG TimeIncrement; // eax
  __int64 v17; // r8
  __int64 v18; // rcx

  v3 = 0;
  if ( KeGetCurrentIrql() && !*(_BYTE *)(a1 + 184) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 64LL);
    if ( *(_QWORD *)(v4 + 5864)
      || (WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v4 + 8)), (*(_QWORD *)(v4 + 5864) = WorkItem) != 0LL) )
    {
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v4 + 5880), 1, 0) )
        IoQueueWorkItem(
          *(PIO_WORKITEM *)(v4 + 5864),
          (PIO_WORKITEM_ROUTINE)RaAttemptHighWaterMarkIncreasePassive,
          CriticalWorkQueue,
          (PVOID)v4);
    }
    return 0;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 188), 1, 0) )
    return 0;
  if ( *(_DWORD *)(a1 + 136) < *(_DWORD *)(a1 + 144) )
  {
    if ( !*(_QWORD *)(a1 + 168) )
      goto LABEL_13;
    if ( MEMORY[0xFFFFF78000000320] >= *(_QWORD *)(a1 + 168) )
    {
      *(_QWORD *)(a1 + 168) = 0LL;
LABEL_13:
      v7 = *(_QWORD *)(a1 + 152);
      v8 = *(_QWORD *)(v7 + 64);
      if ( *(_BYTE *)(a1 + 184) )
        Pool = (__int64)RaidAllocatePool(NonPagedPoolNx, *(unsigned int *)(a1 + 148), 0x53526152u, v7);
      else
        Pool = StorAllocateContiguousIoResources(*(_DWORD *)(a1 + 148), a2, *(_QWORD *)(v7 + 64));
      v11 = (struct _SLIST_ENTRY *)Pool;
      if ( Pool )
      {
        *(_DWORD *)(Pool + 32) = 523124044;
        *(_DWORD *)(Pool + 776) = *(_DWORD *)(a1 + 180);
        v12 = *(_DWORD *)(a1 + 180);
        if ( v12 )
          *(_QWORD *)(Pool + 792) = Pool + (unsigned int)(*(_DWORD *)(a1 + 148) - v12);
        if ( *(_BYTE *)(a1 + 184) )
          *(_QWORD *)(Pool + 816) = 0LL;
        *(_DWORD *)(a1 + 164) = 0;
        v3 = 1;
        if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
          McTemplateK0zqqqqq(
            (unsigned int)(*(_DWORD *)(a1 + 136) + 1),
            *(unsigned int *)(a1 + 136),
            v10,
            *(const struct _MCGEN_TRACE_CONTEXT **)(v8 + 48),
            *(_DWORD *)(v8 + 56),
            *(_DWORD *)(a1 + 192),
            *(_DWORD *)(a1 + 136),
            *(_DWORD *)(a1 + 136) + 1,
            *(_DWORD *)(a1 + 144));
        _InterlockedAdd((volatile signed __int32 *)(a1 + 136), 1u);
        v13 = *(_DWORD *)(a1 + 136);
        *(_DWORD *)(a1 + 28) = v13;
        *(_DWORD *)(a1 + 32) = v13;
        v14 = *(_DWORD *)(a1 + 128);
        if ( v14 )
          v15 = *(union _SLIST_HEADER **)(*(_QWORD *)(a1 + 64)
                                        + 8LL
                                        * ((unsigned int)(v14 * HIDWORD(KeGetPcr()[1].LockArray))
                                         / *(_DWORD *)(a1 + 132)));
        else
          v15 = (union _SLIST_HEADER *)(a1 + 64);
        ExpInterlockedPushEntrySList(v15, v11);
      }
      else
      {
        ++*(_DWORD *)(a1 + 160);
        ++*(_DWORD *)(a1 + 164);
        *(_QWORD *)(a1 + 168) = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        *(_QWORD *)(a1 + 168) += 30 * (0x989680 / TimeIncrement);
        v18 = (unsigned int)(*(_DWORD *)(a1 + 176) + 1);
        *(_DWORD *)(a1 + 176) = v18;
        if ( (Microsoft_Windows_StorPortEnableBits & 0x20) != 0 )
          McTemplateK0zqqqqqqq(
            v18,
            0x989680 % TimeIncrement,
            v17,
            *(const struct _MCGEN_TRACE_CONTEXT **)(v8 + 48),
            *(_DWORD *)(v8 + 56),
            *(_DWORD *)(a1 + 192),
            *(_DWORD *)(a1 + 28),
            *(_DWORD *)(a1 + 144),
            *(_DWORD *)(a1 + 160),
            *(_DWORD *)(a1 + 164),
            v18);
      }
      goto LABEL_30;
    }
  }
  v3 = 0;
LABEL_30:
  *(_DWORD *)(a1 + 188) = 0;
  return v3;
}
