/*
 * XREFs of NdisMCoIndicateStatusEx @ 0x1C0086830
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ?ndisCoIndicateStatusInternal@@YAXPEAX0PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008212C (-ndisCoIndicateStatusInternal@@YAXPEAX0PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 */

void __stdcall NdisMCoIndicateStatusEx(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE NdisVcHandle,
        PNDIS_STATUS_INDICATION StatusIndication)
{
  _QWORD *v4; // rdi
  int v6; // edx

  v4 = NdisVcHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(NdisVcHandle) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)NdisVcHandle,
      19,
      53,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids);
  }
  ndisCoIndicateStatusInternal(MiniportAdapterHandle, v4, StatusIndication);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      19,
      54,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids);
  }
}
