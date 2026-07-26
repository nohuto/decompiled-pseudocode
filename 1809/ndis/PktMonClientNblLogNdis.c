/*
 * XREFs of PktMonClientNblLogNdis @ 0x1C0083F98
 * Callers:
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0002560 (ndisMIndicateNetBufferListsToOpen.c)
 *     NdisSendNetBufferLists @ 0x1C0002DA0 (NdisSendNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0004D70 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMSendNBLToMiniportInternal @ 0x1C0005AC0 (ndisMSendNBLToMiniportInternal.c)
 *     NdisFSendNetBufferLists @ 0x1C00060D0 (NdisFSendNetBufferLists.c)
 *     ?ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0006F90 (-ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0008070 (-ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C0008370 (NdisFIndicateReceiveNetBufferLists.c)
 *     ndisMSendPacketsToNetBufferLists @ 0x1C0058B90 (ndisMSendPacketsToNetBufferLists.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C006DE10 (ndisMIndicatePacketsToNetBufferLists.c)
 * Callees:
 *     PktMonClientNblLog @ 0x1C0026B28 (PktMonClientNblLog.c)
 */

void __fastcall PktMonClientNblLogNdis(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int v5; // [rsp+20h] [rbp-18h]

  if ( byte_1C009FE30 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( v4 )
    {
      if ( (*(_DWORD *)(v4 + 52) & 1) != 0 )
        PktMonClientNblLog(a1, a2, *(_DWORD *)(a1 + 32), a4, v5, a4);
    }
  }
}
