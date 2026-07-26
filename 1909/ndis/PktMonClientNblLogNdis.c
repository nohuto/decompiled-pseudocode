/*
 * XREFs of PktMonClientNblLogNdis @ 0x1C00C98FC
 * Callers:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000B420 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisSendNetBufferLists @ 0x1C000BFC0 (NdisSendNetBufferLists.c)
 *     ndisMSendNBLToMiniportInternal @ 0x1C000DCC0 (ndisMSendNBLToMiniportInternal.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C000E7A0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000EA20 (-ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisFSendNetBufferLists @ 0x1C000F5D0 (NdisFSendNetBufferLists.c)
 *     ?ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0010E80 (-ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C00112C0 (NdisFIndicateReceiveNetBufferLists.c)
 *     ndisMSendPacketsToNetBufferLists @ 0x1C008BFF0 (ndisMSendPacketsToNetBufferLists.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C00AECA0 (ndisMIndicatePacketsToNetBufferLists.c)
 * Callees:
 *     PktMonClientNblLog @ 0x1C00410C0 (PktMonClientNblLog.c)
 */

void __fastcall PktMonClientNblLogNdis(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int v5; // [rsp+20h] [rbp-18h]

  if ( byte_1C00E5E20 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( v4 )
    {
      if ( (*(_DWORD *)(v4 + 12) & 1) != 0 )
        PktMonClientNblLog((__int64 *)a1, a2, *(_DWORD *)(a1 + 16), a4, v5, a4);
    }
  }
}
