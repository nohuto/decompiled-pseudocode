/*
 * XREFs of ndisMSendPacketsToNetBufferLists @ 0x1C0058B90
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C001F8F4 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     ndisXlateSendPacketArrayToNetBufferLists @ 0x1C004ED18 (ndisXlateSendPacketArrayToNetBufferLists.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C006B784 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     PktMonClientNblLogNdis @ 0x1C0083F98 (PktMonClientNblLogNdis.c)
 */

void __fastcall ndisMSendPacketsToNetBufferLists(__int64 a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v6; // rsi
  __int64 v7; // r8
  bool v8; // r15
  __int64 v9; // rax
  struct _NDIS_PACKET **v10; // r15
  __int64 v11; // rbx
  _QWORD v12[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v13; // [rsp+40h] [rbp-38h]
  struct _NET_BUFFER_LIST *v14; // [rsp+48h] [rbp-30h]
  unsigned int v15; // [rsp+50h] [rbp-28h]
  unsigned int v16; // [rsp+58h] [rbp-20h]
  struct _NDIS_STACK_RESERVED *v17; // [rsp+80h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qqd(0x36u, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, a1, a2, a3);
  NDIS_STACK_RESERVED_FROM_PACKET(*a2, &v17);
  v15 = 0;
  v13 = a3;
  v12[1] = a2;
  v6 = *(_QWORD *)v17;
  v12[0] = *(_QWORD *)v17;
  do
  {
    v8 = ndisXlateSendPacketArrayToNetBufferLists((__int64)v12);
    if ( v14 )
    {
      if ( ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          v14,
          *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v6 + 584),
          *(struct NDIS_NBL_TRACKER_HANDLE__ **)(a1 + 2576),
          NdisNblTrackerEvent_ProtocolSent,
          v16 & 1);
      if ( byte_1C009FE30 )
      {
        v9 = *(_QWORD *)(v6 + 1000);
        if ( v9 )
        {
          if ( (*(_DWORD *)(v9 + 52) & 1) != 0 )
            PktMonClientNblLogNdis(v6 + 976, v14, v7, 2LL);
        }
      }
      (*(void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))(a1 + 656))(a1, v14, 0LL, v16);
    }
  }
  while ( v8 );
  if ( !v14 && v15 < a3 )
  {
    v10 = &a2[v15];
    v11 = a3 - v15;
    do
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(v6 + 112))(v6, *v10++, 3221225626LL);
      --v11;
    }
    while ( v11 );
  }
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qq(0x37u, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, a1, a2);
}
