/*
 * XREFs of ndisSetupMiniportProtocolHandlers @ 0x1C001BB50
 * Callers:
 *     ndisSetupNdis6OpenHandlers @ 0x1C001B388 (ndisSetupNdis6OpenHandlers.c)
 * Callees:
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 */

void *__fastcall ndisSetupMiniportProtocolHandlers(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // bp
  unsigned __int8 v5; // r14
  __int64 v8; // rcx
  void *result; // rax

  v3 = *(_BYTE *)(a2 + 56);
  v5 = *(_BYTE *)(a3 + 32);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_qqq(154LL, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2, a3, a1);
  if ( v3 < 6u )
  {
    result = &ndisMSendNetBufferListsCompleteToNdisPackets;
    a1[67] = a1;
    a1[65] = &ndisMSendNetBufferListsCompleteToNdisPackets;
  }
  else
  {
    if ( v5 < 6u )
    {
      if ( !*(_BYTE *)(a3 + 2001) )
      {
        *(_DWORD *)(a3 + 2020) = 0;
        *(_BYTE *)(a3 + 2001) = 1;
      }
      a1[66] = a3;
      a1[65] = *(_QWORD *)(a2 + 184);
      a1[67] = a1[4];
      if ( (*(_DWORD *)(a3 + 120) & 0x20000000) != 0 )
        *(_QWORD *)(a3 + 432) = ndisMIndicatePacketsToNetBufferLists;
      *(_QWORD *)(a3 + 1904) = ndisMIndicatePacketsToNetBufferLists;
      *(_QWORD *)(a3 + 2192) = ndisSynchReturnPacketsForTranslation;
      *(_QWORD *)(a3 + 640) = EthIndicateReceive;
      *(_QWORD *)(a3 + 2200) = a3;
      v8 = a1[4];
    }
    else
    {
      v8 = a1[4];
      a1[65] = *(_QWORD *)(a2 + 184);
      a1[67] = v8;
    }
    result = *(void **)(a2 + 176);
    a1[68] = result;
    a1[69] = v8;
    *(_DWORD *)(a3 + 2256) = 1;
  }
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    return (void *)WPP_SF_qqq(155LL, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2, a3, a1);
  return result;
}
