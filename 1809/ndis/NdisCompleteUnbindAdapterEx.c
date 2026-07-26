/*
 * XREFs of NdisCompleteUnbindAdapterEx @ 0x1C01176C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __stdcall NdisCompleteUnbindAdapterEx(NDIS_HANDLE UnbindContext)
{
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0x49u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (__int64)UnbindContext);
  *((_DWORD *)UnbindContext + 22) = 0;
  KeSetEvent((PRKEVENT)UnbindContext + 4, 0, 0);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0x4Au, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (__int64)UnbindContext);
}
