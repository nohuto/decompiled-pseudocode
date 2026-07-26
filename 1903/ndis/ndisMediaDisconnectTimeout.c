/*
 * XREFs of ndisMediaDisconnectTimeout @ 0x1C00A6B10
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisMediaDisconnectTimeout(
        PVOID SystemSpecific1,
        KSPIN_LOCK *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  KSPIN_LOCK *v4; // rbx
  KSPIN_LOCK *v5; // rcx
  int v6; // eax
  int v7; // edx
  int v8; // edx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  char v10; // [rsp+28h] [rbp-10h]

  v4 = FunctionContext;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = (char)FunctionContext;
    LOBYTE(FunctionContext) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)FunctionContext,
      14,
      23,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      v10);
  }
  KeAcquireSpinLockAtDpcLevel(v4 + 12);
  v4[65] = 0LL;
  v5 = v4 + 12;
  v6 = *((_DWORD *)v4 + 31);
  if ( (v6 & 8) != 0 )
  {
    *((_DWORD *)v4 + 31) = v6 & 0xFFFFFFF7;
    KeReleaseSpinLockFromDpcLevel(v5);
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6977444Eu);
    if ( PoolWithTag )
    {
      *((_DWORD *)v4 + 31) |= 0x400u;
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))ndisMediaDisconnectWorker;
      PoolWithTag->Parameter = PoolWithTag;
      PoolWithTag[1].List.Flink = (_LIST_ENTRY *)v4;
      ExQueueWorkItem(PoolWithTag, (WORK_QUEUE_TYPE)40);
    }
    else
    {
      ndisDereferenceMiniport((__int64)v4, 0xBu);
    }
  }
  else
  {
    KeReleaseSpinLockFromDpcLevel(v5);
    ndisDereferenceMiniport((__int64)v4, 0xBu);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return;
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      14,
      24,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)v4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      14,
      25,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)v4);
  }
}
