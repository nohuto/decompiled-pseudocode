/*
 * XREFs of ndisIovDeleteDefaultNicSwitch @ 0x1C006F850
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 *     ndisPnPRemoveDevice @ 0x1C0118F00 (ndisPnPRemoveDevice.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C000AC50 (ndisQuerySetMiniportEx.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisIovDeleteNicSwitch @ 0x1C006F9A4 (ndisIovDeleteNicSwitch.c)
 *     ndisIovDeleteNicSwitchDefaultVPortAndPFBlock @ 0x1C006FA5C (ndisIovDeleteNicSwitchDefaultVPortAndPFBlock.c)
 *     ndisIovFindSwitchBySwitchId @ 0x1C006FF78 (ndisIovFindSwitchBySwitchId.c)
 */

void __fastcall ndisIovDeleteDefaultNicSwitch(_DWORD *MiniportAdapterHandle)
{
  int v2; // edi
  struct _NDIS_OID_REQUEST Request; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v4; // [rsp+138h] [rbp+30h] BYREF
  int v5; // [rsp+140h] [rbp+38h]

  v2 = 0;
  memset(&Request, 0, 0xF8uLL);
  v4 = 0LL;
  v5 = 0;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_q(0x53u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, (__int64)MiniportAdapterHandle);
  if ( ndisIovFindSwitchBySwitchId(MiniportAdapterHandle, 0LL) )
  {
    ndisIovDeleteNicSwitchDefaultVPortAndPFBlock(MiniportAdapterHandle, 0LL);
    if ( (MiniportAdapterHandle[30] & 4) == 0 )
    {
      LODWORD(v4) = 786816;
      v5 = 0;
      memset(&Request, 0, 0xF8uLL);
      *(_DWORD *)&Request.NdisReserved[16] |= 8u;
      *(_QWORD *)&Request.NdisReserved[32] = &ndisIntReqGeneric;
      Request.DATA.QUERY_INFORMATION.InformationBuffer = &v4;
      Request.Header = (NDIS_OBJECT_HEADER)15466902;
      Request.DATA.QUERY_INFORMATION.Oid = 66105;
      *(_QWORD *)&Request.RequestType = 1LL;
      Request.DATA.QUERY_INFORMATION.InformationBufferLength = 12;
      v2 = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Request, 0, 0LL, 0LL);
    }
    ndisIovDeleteNicSwitch(MiniportAdapterHandle, 0LL);
  }
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qD(0x54u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, (__int64)MiniportAdapterHandle, v2);
}
