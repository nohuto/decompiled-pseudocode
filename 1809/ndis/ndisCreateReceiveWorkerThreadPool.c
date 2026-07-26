/*
 * XREFs of ndisCreateReceiveWorkerThreadPool @ 0x1C00C4DF8
 * Callers:
 *     ndisConfigurePeriodicReceives @ 0x1C001E5FC (ndisConfigurePeriodicReceives.c)
 * Callees:
 *     NdisGroupActiveProcessorCount @ 0x1C0025BB0 (NdisGroupActiveProcessorCount.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     ndisCreateThread @ 0x1C00C4E7C (ndisCreateThread.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1C00EA9AC (ndisKillReceiveWorkerThreadPool.c)
 */

__int64 ndisCreateReceiveWorkerThreadPool()
{
  int Thread; // ebx
  __int64 v1; // rdi
  __int64 v2; // rcx
  ULONG active; // esi

  Thread = 0;
  if ( (unsigned __int8)byte_1C00A025B >= 4u )
    WPP_SF_(0x4Eu, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids);
  v1 = 0LL;
  active = NdisGroupActiveProcessorCount(0xFFFFu);
  if ( active )
  {
    while ( 1 )
    {
      Thread = ndisCreateThread(
                 v2,
                 (unsigned int)v1,
                 LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink),
                 (char *)WPP_MAIN_CB.Dpc.DeferredContext + 8 * v1);
      if ( Thread < 0 )
        break;
      v1 = (unsigned int)(v1 + 1);
      if ( (unsigned int)v1 >= active )
        goto LABEL_6;
    }
    ndisKillReceiveWorkerThreadPool();
  }
  else
  {
LABEL_6:
    if ( (unsigned __int8)byte_1C00A025B >= 4u )
      WPP_SF_(0x4Fu, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids);
  }
  return (unsigned int)Thread;
}
