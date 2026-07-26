/*
 * XREFs of NdisMQueryInformationComplete @ 0x1C0043910
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisCompleteLegacyRequest @ 0x1C00445F4 (ndisCompleteLegacyRequest.c)
 */

void __fastcall NdisMQueryInformationComplete(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qD(0x4Bu, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, BugCheckParameter2, a2);
  if ( *(_BYTE *)(BugCheckParameter2 + 32) >= 6u )
  {
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      *(_QWORD *)(BugCheckParameter2 + 3888),
      "NDIS 6 Miniport calling NDIS 5 API");
    KeBugCheckEx(0x7Cu, 0x15uLL, BugCheckParameter2, 0LL, 0LL);
  }
  ndisCompleteLegacyRequest(BugCheckParameter2, a2, 0LL);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(0x4Cu, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, BugCheckParameter2);
}
