/*
 * XREFs of NdisCloseAdapterEx @ 0x1C00ED960
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     NdisCloseAdapter @ 0x1C0117490 (NdisCloseAdapter.c)
 */

NDIS_STATUS __stdcall NdisCloseAdapterEx(NDIS_HANDLE NdisBindingHandle)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0x47u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (__int64)NdisBindingHandle);
  *((_BYTE *)NdisBindingHandle + 65) = 1;
  NdisCloseAdapter(&v3, NdisBindingHandle);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_qD(0x48u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (__int64)NdisBindingHandle, v3);
  return v3;
}
