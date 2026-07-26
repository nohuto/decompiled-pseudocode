/*
 * XREFs of NdisMSetInformationComplete @ 0x1C00691D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisCompleteLegacyRequest @ 0x1C006A2F8 (ndisCompleteLegacyRequest.c)
 */

__int64 __fastcall NdisMSetInformationComplete(ULONG_PTR a1, char a2)
{
  __int64 result; // rax
  int v5; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      58,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a1,
      a2);
  if ( *(_BYTE *)(a1 + 32) >= 6u )
  {
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      *(_QWORD *)(a1 + 3856),
      "NDIS 6 Miniport calling NDIS 5 API");
    KeBugCheckEx(0x7Cu, 0x15uLL, a1, 0LL, 0LL);
  }
  result = ndisCompleteLegacyRequest(a1, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    return WPP_RECORDER_SF_q(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             v5,
             11,
             59,
             (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
             a1);
  }
  return result;
}
