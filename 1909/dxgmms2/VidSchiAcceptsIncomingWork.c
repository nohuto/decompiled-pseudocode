/*
 * XREFs of VidSchiAcceptsIncomingWork @ 0x1C00067B0
 * Callers:
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C00178DC (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C007B070 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchTerminateAdapter @ 0x1C00CC510 (VidSchTerminateAdapter.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiAcceptsIncomingWork(__int64 a1)
{
  return ((*(_DWORD *)(a1 + 296) - 1) & 0xFFFFFFFD) == 0;
}
