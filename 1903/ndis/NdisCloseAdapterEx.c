/*
 * XREFs of NdisCloseAdapterEx @ 0x1C0092770
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     NdisCloseAdapter @ 0x1C0138530 (NdisCloseAdapter.c)
 */

NDIS_STATUS __stdcall NdisCloseAdapterEx(NDIS_HANDLE NdisBindingHandle)
{
  int v2; // edx
  NDIS_STATUS v3; // edi
  NDIS_STATUS v5; // [rsp+50h] [rbp+8h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      71,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      (char)NdisBindingHandle);
  *((_BYTE *)NdisBindingHandle + 65) = 1;
  NdisCloseAdapter(&v5, NdisBindingHandle);
  v3 = v5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      6,
      72,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      (char)NdisBindingHandle,
      v5);
  }
  return v3;
}
