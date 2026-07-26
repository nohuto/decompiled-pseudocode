/*
 * XREFs of ndisMSendPacketsToNetBufferLists @ 0x1C008BFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000BDC8 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032744 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisXlateSendPacketArrayToNetBufferLists @ 0x1C007B9B8 (ndisXlateSendPacketArrayToNetBufferLists.c)
 *     PktMonClientNblLogNdis @ 0x1C00C98FC (PktMonClientNblLogNdis.c)
 */

char __fastcall ndisMSendPacketsToNetBufferLists(__int64 a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v6; // rdi
  char result; // al
  __int64 v8; // r8
  __int64 v9; // rsi
  char v10; // r12
  __int64 v11; // rax
  struct _NDIS_PACKET **v12; // rsi
  __int64 v13; // rbx
  _QWORD v14[2]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v15; // [rsp+40h] [rbp-20h]
  _BYTE v16[12]; // [rsp+44h] [rbp-1Ch] BYREF
  unsigned int v17; // [rsp+50h] [rbp-10h]
  __int64 v18; // [rsp+54h] [rbp-Ch]
  int v19; // [rsp+5Ch] [rbp-4h]
  struct _NDIS_STACK_RESERVED *v20; // [rsp+90h] [rbp+30h] BYREF

  memset(v16, 0, sizeof(v16));
  v18 = 0LL;
  v19 = 0;
  NDIS_STACK_RESERVED_FROM_PACKET(*a2, &v20);
  v17 = 0;
  v15 = a3;
  v14[1] = a2;
  v6 = *(_QWORD *)v20;
  v14[0] = *(_QWORD *)v20;
  do
  {
    result = ndisXlateSendPacketArrayToNetBufferLists((__int64)v14);
    v9 = *(_QWORD *)&v16[4];
    v10 = result;
    if ( *(_QWORD *)&v16[4] )
    {
      if ( *(_DWORD *)ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          *(struct _NET_BUFFER_LIST **)&v16[4],
          *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v6 + 584),
          *(_QWORD *)(a1 + 2560),
          0x8Fu,
          BYTE4(v18) & 1);
      if ( byte_1C00E5E20 )
      {
        v11 = *(_QWORD *)(v6 + 944);
        if ( v11 )
        {
          if ( (*(_DWORD *)(v11 + 12) & 1) != 0 )
            PktMonClientNblLogNdis(v6 + 936, v9, v8, 2LL);
        }
      }
      result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(a1 + 656))(a1, v9, 0LL, HIDWORD(v18));
    }
  }
  while ( v10 );
  if ( !v9 && v17 < a3 )
  {
    v12 = &a2[v17];
    v13 = a3 - v17;
    do
    {
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v6 + 112))(v6, *v12++, 3221225626LL);
      --v13;
    }
    while ( v13 );
  }
  return result;
}
