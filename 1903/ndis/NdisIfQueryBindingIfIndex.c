/*
 * XREFs of NdisIfQueryBindingIfIndex @ 0x1C010AF70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C0104FA8 (ndisIfQueryBindingMiniportIfIndex.c)
 */

NDIS_STATUS __stdcall NdisIfQueryBindingIfIndex(
        NDIS_HANDLE NdisBindingHandle,
        PNET_IFINDEX pBoundIfIndex,
        PNET_LUID pBoundIfNetLuid,
        PNET_IFINDEX pLowestIfIndex,
        PNET_LUID pLowestIfNetLuid)
{
  __int64 v5; // r14
  PNET_IFINDEX v8; // rbp
  char v9; // bl
  int v10; // edx
  NDIS_STATUS BindingMiniportIfIndex; // edi

  v5 = *((_QWORD *)NdisBindingHandle + 2);
  v8 = pBoundIfIndex;
  v9 = (char)NdisBindingHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(pBoundIfIndex) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)pBoundIfIndex,
      22,
      40,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)NdisBindingHandle);
  }
  BindingMiniportIfIndex = ndisIfQueryBindingMiniportIfIndex(v5, v8, pBoundIfNetLuid, pLowestIfIndex, pLowestIfNetLuid);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      22,
      41,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      v9);
  }
  return BindingMiniportIfIndex;
}
