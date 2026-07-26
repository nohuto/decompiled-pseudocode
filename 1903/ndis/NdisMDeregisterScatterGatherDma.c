/*
 * XREFs of NdisMDeregisterScatterGatherDma @ 0x1C0078EB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisDereferenceDmaAdapter @ 0x1C009F5F8 (ndisDereferenceDmaAdapter.c)
 */

void __stdcall NdisMDeregisterScatterGatherDma(NDIS_HANDLE NdisMiniportDmaHandle)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)NdisMiniportDmaHandle + 1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      18,
      (struct _GUID *)&WPP_7e4e4e2c73163f40df239693cce6d855_Traceguids,
      v1);
  ndisDereferenceDmaAdapter(NdisMiniportDmaHandle);
  *(_DWORD *)(v1 + 120) &= ~0x200u;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      19,
      (struct _GUID *)&WPP_7e4e4e2c73163f40df239693cce6d855_Traceguids,
      v1);
}
