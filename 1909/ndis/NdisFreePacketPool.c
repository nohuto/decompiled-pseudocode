/*
 * XREFs of NdisFreePacketPool @ 0x1C0081320
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisFreePacketPoolInternal @ 0x1C0081E20 (ndisFreePacketPoolInternal.c)
 */

void __stdcall NdisFreePacketPool(NDIS_HANDLE PoolHandle)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      21,
      12,
      (struct _GUID *)&WPP_34c34292621439c17f3df840409c7e2a_Traceguids,
      (char)PoolHandle);
  ndisFreePacketPoolInternal((struct _NDIS_PKT_POOL *)PoolHandle);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      21,
      13,
      (struct _GUID *)&WPP_34c34292621439c17f3df840409c7e2a_Traceguids,
      (char)PoolHandle);
}
