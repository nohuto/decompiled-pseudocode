/*
 * XREFs of NdisMAllocateSharedMemoryAsync @ 0x1C009DD70
 * Callers:
 *     NdisMAllocateSharedMemoryAsyncEx @ 0x1C009DF40 (NdisMAllocateSharedMemoryAsyncEx.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 */

NDIS_STATUS __stdcall NdisMAllocateSharedMemoryAsync(
        NDIS_HANDLE MiniportAdapterHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID Context)
{
  ULONG v6; // ebp
  int v8; // edx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rsi
  NDIS_STATUS v10; // ebx
  NDIS_HANDLE v11; // rdi
  NDIS_HANDLE v12; // rcx
  char v15; // [rsp+30h] [rbp-28h]

  v6 = Length;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = Length;
    LOBYTE(Length) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Length,
      21,
      32,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)MiniportAdapterHandle,
      v15);
  }
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x7361444Eu);
  if ( !PoolWithTag )
  {
    v10 = -1073741670;
    goto LABEL_13;
  }
  if ( *(_BYTE *)MiniportAdapterHandle == 17 )
  {
    v11 = (NDIS_HANDLE)*((_QWORD *)MiniportAdapterHandle + 63);
    v12 = MiniportAdapterHandle;
    if ( !v11 || !*((_QWORD *)v11 + 3) )
      goto LABEL_11;
    if ( *((_BYTE *)MiniportAdapterHandle + 32) >= 6u
       ? *((_QWORD *)v11 + 5) == 0LL
       : *(_QWORD *)(*((_QWORD *)MiniportAdapterHandle + 470) + 240LL) == 0LL )
    {
      goto LABEL_11;
    }
  }
  else if ( *(_BYTE *)MiniportAdapterHandle != 15
         || (v11 = MiniportAdapterHandle,
             v12 = (NDIS_HANDLE)*((_QWORD *)MiniportAdapterHandle + 1),
             !*((_QWORD *)MiniportAdapterHandle + 3))
         || !*((_QWORD *)MiniportAdapterHandle + 5) )
  {
LABEL_11:
    v10 = -1073741823;
LABEL_12:
    ExFreePoolWithTag(PoolWithTag, 0);
    goto LABEL_13;
  }
  if ( !(unsigned __int8)ndisReferenceMiniport((__int64)v12) )
  {
    v10 = -1073741670;
    goto LABEL_12;
  }
  _InterlockedIncrement((volatile signed __int32 *)v11 + 18);
  PoolWithTag[1].List.Flink = (_LIST_ENTRY *)MiniportAdapterHandle;
  LODWORD(PoolWithTag[1].List.Blink) = v6;
  BYTE4(PoolWithTag[1].List.Blink) = Cached;
  PoolWithTag[1].Parameter = Context;
  PoolWithTag->List.Flink = 0LL;
  PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))ndisMQueuedAllocateSharedHandler;
  PoolWithTag->Parameter = PoolWithTag;
  ExQueueWorkItem(PoolWithTag, (WORK_QUEUE_TYPE)40);
  v10 = 259;
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      21,
      33,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      v10);
  }
  return v10;
}
