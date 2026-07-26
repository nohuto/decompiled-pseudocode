/*
 * XREFs of ?ndisCreateReceiveWorkerThreadPool@@YAHXZ @ 0x1C0031C50
 * Callers:
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C0031BA4 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ?ndisCreateThread@@YAHP6AXPEAX@Z0JPEAPEAU_KTHREAD@@@Z @ 0x1C0031D34 (-ndisCreateThread@@YAHP6AXPEAX@Z0JPEAPEAU_KTHREAD@@@Z.c)
 *     ?ndisKillReceiveWorkerThreadPool@@YAXXZ @ 0x1C007C258 (-ndisKillReceiveWorkerThreadPool@@YAXXZ.c)
 */

__int64 ndisCreateReceiveWorkerThreadPool(void)
{
  int Thread; // ebx
  __int64 v1; // rdi
  void (*v2)(void *); // rcx
  ULONG ActiveProcessorCount; // esi

  Thread = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      12,
      76,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids);
  v1 = 0LL;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    while ( 1 )
    {
      Thread = ndisCreateThread(
                 v2,
                 (void *)(unsigned int)v1,
                 (int)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink,
                 (struct _KTHREAD **)WPP_MAIN_CB.Dpc.DeferredContext + v1);
      if ( Thread < 0 )
        break;
      v1 = (unsigned int)(v1 + 1);
      if ( (unsigned int)v1 >= ActiveProcessorCount )
        goto LABEL_6;
    }
    ndisKillReceiveWorkerThreadPool();
  }
  else
  {
LABEL_6:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        12,
        77,
        (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids);
  }
  return (unsigned int)Thread;
}
