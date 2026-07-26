/*
 * XREFs of ndisSetupNdis6OpenHandlers @ 0x1C001B388
 * Callers:
 *     ndisMOpenAdapter @ 0x1C010D8F0 (ndisMOpenAdapter.c)
 *     ndisSetMiniportHandlers @ 0x1C010E9D0 (ndisSetMiniportHandlers.c)
 * Callees:
 *     ndisSetupLwfMiniportHandlers @ 0x1C001B3F8 (ndisSetupLwfMiniportHandlers.c)
 *     ndisSetupMiniportProtocolHandlers @ 0x1C001BB50 (ndisSetupMiniportProtocolHandlers.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 *     WPP_SF_qqqDD @ 0x1C004401C (WPP_SF_qqqDD.c)
 */

__int64 __fastcall ndisSetupNdis6OpenHandlers(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_qqqDD(
      156LL,
      &WPP_f453a6740ca1326a168191528118e90e_Traceguids,
      a2,
      a3,
      a1,
      *(_BYTE *)(a2 + 56) >= 6u,
      *(_BYTE *)(a3 + 32) >= 6u);
  result = ndisSetupMiniportProtocolHandlers(a1, a2, a3);
  if ( *(_QWORD *)(a3 + 2064) )
    result = ndisSetupLwfMiniportHandlers(a3);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    return WPP_SF_qqq(157LL, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2, a3, a1);
  return result;
}
