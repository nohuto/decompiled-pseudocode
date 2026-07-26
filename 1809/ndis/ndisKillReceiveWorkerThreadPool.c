/*
 * XREFs of ndisKillReceiveWorkerThreadPool @ 0x1C00EA9AC
 * Callers:
 *     ndisConfigurePeriodicReceives @ 0x1C001E5FC (ndisConfigurePeriodicReceives.c)
 *     ndisCreateReceiveWorkerThreadPool @ 0x1C00C4DF8 (ndisCreateReceiveWorkerThreadPool.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x1C004F05C (-ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z.c)
 */

void ndisKillReceiveWorkerThreadPool()
{
  unsigned int v0; // edx
  __int64 i; // rbx
  struct _WORK_QUEUE_ITEM *v2; // rdx
  __int64 v3; // rbx
  void *v4; // rcx

  if ( (unsigned __int8)byte_1C00A025B >= 4u )
    WPP_SF_(0x50u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids);
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
  if ( (unsigned __int8)byte_1C00A025B >= 4u )
    WPP_SF_(0x51u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids);
}
