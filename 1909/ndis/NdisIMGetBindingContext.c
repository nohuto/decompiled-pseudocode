/*
 * XREFs of NdisIMGetBindingContext @ 0x1C007FAE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 */

NDIS_HANDLE __stdcall NdisIMGetBindingContext(NDIS_HANDLE NdisBindingHandle)
{
  __int64 v1; // rdi
  char v2; // bl

  v1 = *((_QWORD *)NdisBindingHandle + 2);
  v2 = (char)NdisBindingHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      58,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      (char)NdisBindingHandle);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        1,
        59,
        &WPP_a3868331fe073391203672ef2b551460_Traceguids,
        v2);
  }
  return *(NDIS_HANDLE *)(v1 + 1976);
}
