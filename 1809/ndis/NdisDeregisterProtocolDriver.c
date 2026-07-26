/*
 * XREFs of NdisDeregisterProtocolDriver @ 0x1C00ED9D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qZ @ 0x1C0049D60 (WPP_SF_qZ.c)
 *     NdisDeregisterProtocol @ 0x1C0117730 (NdisDeregisterProtocol.c)
 */

void __stdcall NdisDeregisterProtocolDriver(NDIS_HANDLE NdisProtocolHandle)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qZ(
      0xCu,
      &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids,
      (__int64)NdisProtocolHandle,
      (const wchar_t *)NdisProtocolHandle + 36);
  NdisDeregisterProtocol(&v2, NdisProtocolHandle);
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0xDu, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (__int64)NdisProtocolHandle);
}
