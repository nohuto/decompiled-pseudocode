/*
 * XREFs of ndisQueueRequestOnTopAsync @ 0x1C006F920
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisQueueRequestOnTopAsync(__int64 a1, void (__fastcall *a2)(void *))
{
  void (__fastcall *v2)(void *); // rbp
  unsigned int v4; // edi
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  int v6; // edx
  struct _WORK_QUEUE_ITEM *v7; // rbx
  char v9; // [rsp+30h] [rbp-28h]
  _LIST_ENTRY *retaddr; // [rsp+58h] [rbp+0h]

  v2 = a2;
  v4 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      48,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a1,
      v9);
  }
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x50uLL);
    if ( (unsigned __int8)ndisReferenceMiniport(a1) )
    {
      v7[1].List.Blink = 0LL;
      v7[1].List.Flink = retaddr;
      v7[1].WorkerRoutine = v2;
      v7[1].Parameter = (void *)a1;
      v7->List.Flink = 0LL;
      v7->WorkerRoutine = (void (__fastcall *)(void *))ndisProcessRequestAsync;
      v7->Parameter = v7;
      ExQueueWorkItem(v7, (WORK_QUEUE_TYPE)40);
      v4 = 259;
    }
    else
    {
      ExFreePoolWithTag(v7, 0);
    }
  }
  else
  {
    v4 = -1073741670;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      11,
      49,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a1,
      (char)v2,
      v4);
  }
  return v4;
}
