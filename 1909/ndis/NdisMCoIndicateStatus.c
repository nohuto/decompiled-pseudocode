/*
 * XREFs of NdisMCoIndicateStatus @ 0x1C0086730
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?ndisCoIndicateStatusInternal@@YAXPEAX0PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008212C (-ndisCoIndicateStatusInternal@@YAXPEAX0PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 */

void __stdcall NdisMCoIndicateStatus(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE NdisVcHandle,
        NDIS_STATUS GeneralStatus,
        PVOID StatusBuffer,
        ULONG StatusBufferSize)
{
  _QWORD *v7; // rdi
  int v9; // edx
  struct _NDIS_STATUS_INDICATION v10; // [rsp+30h] [rbp-B8h] BYREF

  v7 = NdisVcHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(NdisVcHandle) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)NdisVcHandle,
      19,
      51,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids);
  }
  memset(&v10, 0, sizeof(v10));
  v10.StatusBufferSize = StatusBufferSize;
  v10.Header = (_NDIS_OBJECT_HEADER)7340440;
  v10.SourceHandle = MiniportAdapterHandle;
  v10.StatusCode = GeneralStatus;
  v10.StatusBuffer = StatusBuffer;
  ndisCoIndicateStatusInternal(MiniportAdapterHandle, v7, &v10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      19,
      52,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids);
  }
}
