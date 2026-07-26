/*
 * XREFs of ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C00AE2A4
 * Callers:
 *     ndisMTopReceiveNetBufferLists @ 0x1C000AE30 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0038710 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C00AC480 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisMIndicateSplitNblChain@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKKK@Z @ 0x1C00AD2D4 (-ndisMIndicateSplitNblChain@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKKK@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C00AE460 (ndisMDispatchReceiveNetBufferLists.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisXlateRecvNetBufferListsToPacketArray @ 0x1C007ACC8 (ndisXlateRecvNetBufferListsToPacketArray.c)
 *     ndisXlateReturnPacketToNetBufferList @ 0x1C007B1D0 (ndisXlateReturnPacketToNetBufferList.c)
 */

void __fastcall ndisIndicateXlatedPacketsToNdis5Protocols(__int64 *a1)
{
  __int64 v1; // rax
  __int64 *v2; // rbx
  KIRQL v3; // di
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  char v8; // al
  __int64 v9; // r15
  char v10; // r13
  struct _NDIS_PACKET **v11; // r14
  char v12; // [rsp+20h] [rbp-E0h]
  unsigned int v13; // [rsp+24h] [rbp-DCh]
  __int64 v14[6]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h]
  __int64 *v16; // [rsp+60h] [rbp-A0h]
  char v17; // [rsp+70h] [rbp-90h] BYREF

  v1 = *a1;
  v2 = a1;
  v16 = a1;
  v15 = v1;
  memset(v14, 0, sizeof(v14));
  v13 = *((_DWORD *)v2 + 172);
  if ( (v2[2] & 1) != 0 )
  {
    v12 = 1;
    v3 = 2;
  }
  else
  {
    v12 = 0;
    v3 = KfRaiseIrql(2u);
  }
  v4 = 0LL;
  v5 = *(_QWORD *)(v2[1] + 328);
  if ( v5 && *(_DWORD *)(v5 + 608) < 6u )
  {
    if ( (v2[2] & 2) == 0 )
      goto LABEL_10;
  }
  else
  {
    *((_BYTE *)v2 + 692) = 1;
  }
  HIDWORD(v14[1]) = -1073741670;
  do
  {
LABEL_10:
    v6 = 5 * v4;
    v4 = (unsigned int)(v4 + 1);
    v14[2] = v2[v6 + 8];
    if ( v14[2] )
    {
      v14[3] = 0LL;
      v7 = v15;
      LODWORD(v14[4]) = 0;
      v14[0] = (__int64)&v17;
      v14[5] = v15;
      LODWORD(v14[1]) = 32;
      do
      {
        v8 = ndisXlateRecvNetBufferListsToPacketArray(v14);
        v9 = LODWORD(v14[4]);
        v10 = v8;
        v11 = (struct _NDIS_PACKET **)v14[0];
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(v7 + 3392))(v7, v14[0], LODWORD(v14[4]));
        if ( HIDWORD(v14[1]) == -1073741670 && (_DWORD)v9 )
        {
          do
          {
            ndisXlateReturnPacketToNetBufferList(*v11++);
            --v9;
          }
          while ( v9 );
        }
      }
      while ( v10 == 1 );
      v2 = v16;
      HIDWORD(v14[1]) = -1073741670;
    }
  }
  while ( (unsigned int)v4 <= v13 );
  if ( !v12 && v3 != 2 )
    KeLowerIrql(v3);
}
