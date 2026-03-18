/*
 * XREFs of VidSchFlushQueuePackets @ 0x1C00178D0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C00178EC (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 */

__int64 __fastcall VidSchFlushQueuePackets(__int64 a1)
{
  return VidSchFlushQueuePacketsInternal(a1);
}
