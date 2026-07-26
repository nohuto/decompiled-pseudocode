/*
 * XREFs of ?ndisKillReceiveWorkerThreadPool@@YAXXZ @ 0x1C007C258
 * Callers:
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C0031BA4 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 *     ?ndisCreateReceiveWorkerThreadPool@@YAHXZ @ 0x1C0031C50 (-ndisCreateReceiveWorkerThreadPool@@YAHXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x1C007C038 (-ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z.c)
 */

void ndisKillReceiveWorkerThreadPool(void)
{
  unsigned int v0; // edx
  __int64 i; // rbx
  struct _WORK_QUEUE_ITEM *v2; // rdx
  __int64 v3; // rbx
  void *v4; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      12,
      78,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids);
  v0 = ndisMaxNumberOfProcessors;
  for ( i = 0LL; (unsigned int)i < ndisMaxNumberOfProcessors; i = (unsigned int)(i + 1) )
  {
    if ( !*((_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + i) )
      break;
    v2 = (struct _WORK_QUEUE_ITEM *)((char *)ndisPerCpuPoisonPills + 32 * (unsigned int)i);
    v2->WorkerRoutine = 0LL;
    v2->List.Flink = 0LL;
    v2->Parameter = v2;
    ndisInsertInWorkQueue(
      (struct _KSEMAPHORE *)WPP_MAIN_CB.Dpc.DeferredRoutine + 2 * (unsigned __int64)(unsigned int)i,
      v2,
      0);
    v0 = ndisMaxNumberOfProcessors;
  }
  v3 = 0LL;
  if ( v0 )
  {
    do
    {
      v4 = (void *)*((_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + v3);
      if ( !v4 )
        break;
      KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
      ObfDereferenceObject(*((PVOID *)WPP_MAIN_CB.Dpc.DeferredContext + v3));
      *((_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + v3) = 0LL;
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < ndisMaxNumberOfProcessors );
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      12,
      79,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids);
}
