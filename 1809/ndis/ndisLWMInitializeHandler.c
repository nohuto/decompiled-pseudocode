/*
 * XREFs of ndisLWMInitializeHandler @ 0x1C00F0124
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     NdisMSetMiniportAttributes @ 0x1C00C95F0 (NdisMSetMiniportAttributes.c)
 */

__int64 __fastcall ndisLWMInitializeHandler(NDIS_HANDLE NdisMiniportHandle)
{
  unsigned int v2; // edi
  _DWORD v4[10]; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xAu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, (__int64)NdisMiniportHandle);
  memset(v4, 0, 0x20uLL);
  v4[5] = 0;
  v4[6] = 0;
  v4[4] = 0;
  v4[0] = 1835678;
  v2 = NdisMSetMiniportAttributes(NdisMiniportHandle, (PNDIS_MINIPORT_ADAPTER_ATTRIBUTES)v4);
  if ( v2 && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
    WPP_SF_q(0xBu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, (__int64)NdisMiniportHandle);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0xCu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, (__int64)NdisMiniportHandle, v2);
  return v2;
}
