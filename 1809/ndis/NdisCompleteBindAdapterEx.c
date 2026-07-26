/*
 * XREFs of NdisCompleteBindAdapterEx @ 0x1C005E0D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

void __stdcall NdisCompleteBindAdapterEx(NDIS_HANDLE BindAdapterContext, NDIS_STATUS Status)
{
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_qD(0x45u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (__int64)BindAdapterContext, Status);
  *((_DWORD *)BindAdapterContext + 22) = Status;
  KeSetEvent((PRKEVENT)BindAdapterContext + 4, 0, 0);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0x46u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (__int64)BindAdapterContext);
}
