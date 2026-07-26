/*
 * XREFs of NdisMCmCreateVc @ 0x1C0085D30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

NDIS_STATUS __stdcall NdisMCmCreateVc(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE MiniportVcContext,
        PNDIS_HANDLE NdisVcHandle)
{
  KSPIN_LOCK *PoolWithTag; // rax
  KSPIN_LOCK *v10; // rsi
  _LIST_ENTRY *v11; // rax
  _LIST_ENTRY *v12; // rbx
  __int64 v13; // rax
  _LIST_ENTRY *v14; // rax
  _LIST_ENTRY *v15; // rax
  __int64 v16; // rax
  _LIST_ENTRY *v17; // rax
  __int64 v18; // rax
  _LIST_ENTRY **p_Blink; // r14
  NDIS_STATUS v20; // ebp
  int v21; // edx
  void (__fastcall *v22)(void *, struct _NDIS_PACKET **, unsigned int); // rcx
  void (__fastcall *v23)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int); // rax
  void (*v24)(int, void *, struct _NDIS_PACKET *); // rdx
  void (__fastcall *v25)(void *, struct _NET_BUFFER_LIST *, unsigned int); // r8
  void (__fastcall *v26)(void *, struct _NET_BUFFER_LIST *, unsigned int); // r9

  if ( !NdisAfHandle )
    return -1073741823;
  *NdisVcHandle = 0LL;
  PoolWithTag = (KSPIN_LOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x6F63444Eu);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  memset(PoolWithTag, 0, 0x90uLL);
  KeInitializeSpinLock(v10 + 1);
  v11 = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x158uLL, 0x6F63444Eu);
  v12 = v11;
  if ( !v11 )
  {
    ExFreePoolWithTag(v10, 0);
    return -1073741670;
  }
  memset(v11, 0, 0x158uLL);
  KeInitializeSpinLock((PKSPIN_LOCK)&v12[1]);
  v12[12].Flink = (_LIST_ENTRY *)MiniportAdapterHandle;
  v13 = *((_QWORD *)MiniportAdapterHandle + 470);
  if ( *((_BYTE *)MiniportAdapterHandle + 32) < 6u )
  {
    v14 = *(_LIST_ENTRY **)(v13 + 280);
    v12[15].Flink = 0LL;
    v12[13].Flink = v14;
  }
  else
  {
    v12[15].Flink = *(_LIST_ENTRY **)(v13 + 536);
  }
  v12[13].Blink = *(_LIST_ENTRY **)(*((_QWORD *)MiniportAdapterHandle + 470) + 512LL);
  v12[14].Flink = *(_LIST_ENTRY **)(*((_QWORD *)MiniportAdapterHandle + 470) + 520LL);
  v12[14].Blink = *(_LIST_ENTRY **)(*((_QWORD *)MiniportAdapterHandle + 470) + 528LL);
  v10[15] = (KSPIN_LOCK)MiniportAdapterHandle;
  v10[16] = (KSPIN_LOCK)MiniportVcContext;
  v12[12].Blink = (_LIST_ENTRY *)MiniportVcContext;
  v12[4].Blink = (_LIST_ENTRY *)v10;
  v12->Blink = (_LIST_ENTRY *)((char *)v10 + 4);
  v12[4].Flink = (_LIST_ENTRY *)NdisAfHandle;
  LODWORD(v12->Flink) = 1;
  v15 = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 46);
  v12[8].Blink = 0LL;
  v12[5].Flink = v15;
  v10[2] = *((_QWORD *)NdisAfHandle + 46);
  v16 = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL);
  if ( *(_BYTE *)(v16 + 56) < 6u )
  {
    v10[6] = *(_QWORD *)(v16 + 304);
    v10[7] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 312LL);
  }
  else
  {
    v10[8] = *(_QWORD *)(v16 + 216);
    v10[9] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 208LL);
  }
  if ( *((_DWORD *)NdisAfHandle + 99) >= 6u )
  {
    v12[7].Flink = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 36);
    v12[7].Blink = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 41);
    v17 = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 44);
  }
  else
  {
    v12[7].Flink = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 17);
    v12[7].Blink = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 22);
    v17 = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 25);
  }
  v12[8].Flink = v17;
  if ( *((_DWORD *)NdisAfHandle + 98) >= 6u )
  {
    v12[10].Blink = *(_LIST_ENTRY **)(*((_QWORD *)NdisAfHandle + 4) + 96LL);
    v12[11].Flink = *(_LIST_ENTRY **)(*((_QWORD *)NdisAfHandle + 4) + 104LL);
    v18 = *((_QWORD *)NdisAfHandle + 4);
  }
  else
  {
    v12[10].Blink = *(_LIST_ENTRY **)(*((_QWORD *)NdisAfHandle + 3) + 96LL);
    v12[11].Flink = *(_LIST_ENTRY **)(*((_QWORD *)NdisAfHandle + 3) + 104LL);
    v18 = *((_QWORD *)NdisAfHandle + 3);
  }
  v12[11].Blink = *(_LIST_ENTRY **)(v18 + 112);
  v12[9].Flink = (_LIST_ENTRY *)MiniportVcContext;
  v10[11] = (KSPIN_LOCK)MiniportVcContext;
  p_Blink = &v12[1].Blink;
  v20 = (*(__int64 (__fastcall **)(_QWORD, _LIST_ENTRY *, _LIST_ENTRY **))(*((_QWORD *)NdisAfHandle + 46) + 984LL))(
          *((_QWORD *)NdisAfHandle + 47),
          v12,
          &v12[1].Blink);
  if ( v20 )
  {
    ExFreePoolWithTag(v10, 0);
    ExFreePoolWithTag(v12, 0);
    v12 = 0LL;
  }
  else
  {
    v10[3] = (KSPIN_LOCK)*p_Blink;
    v12[6].Blink = *p_Blink;
    v12[6].Flink = *(_LIST_ENTRY **)(*((_QWORD *)NdisAfHandle + 46) + 992LL);
    ExInterlockedInsertHeadList(
      (PLIST_ENTRY)(*((_QWORD *)NdisAfHandle + 46) + 1048LL),
      v12 + 2,
      (PKSPIN_LOCK)(*((_QWORD *)NdisAfHandle + 46) + 232LL));
    v10[5] = (KSPIN_LOCK)v12;
    LOBYTE(v21) = v12[12].Flink[2].Flink;
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 56LL) < 6u )
    {
      if ( (unsigned __int8)v21 < 6u )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v21) = 4;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v21,
            19,
            31,
            (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids);
        }
        v12[15].Blink = 0LL;
        v12[16].Flink = 0LL;
        v12[16].Blink = (_LIST_ENTRY *)ndisCoSendPacketsToNdisPackets;
        v12[17].Flink = (_LIST_ENTRY *)ndisMCoSendCompleteToNdisPacket;
        v12[17].Blink = (_LIST_ENTRY *)ndisMCoIndicateReceiveNdisPacketToNdisPacket;
        v23 = 0LL;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v21) = 4;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v21,
            19,
            30,
            (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids);
        }
        v12[15].Blink = 0LL;
        v12[17].Flink = 0LL;
        v12[17].Blink = 0LL;
        v12[16].Flink = (_LIST_ENTRY *)ndisMCoSendNetBufferListsCompleteToNdisPackets;
        v12[16].Blink = (_LIST_ENTRY *)ndisCoSendPacketsToNetBufferLists;
        v23 = ndisMCoIndicateReceiveNetBufferListsToNdisPacket;
      }
    }
    else
    {
      if ( (unsigned __int8)v21 < 6u )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v21) = 4;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v21,
            19,
            29,
            (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids);
        }
        v23 = 0LL;
        v22 = ndisMCoIndicateReceiveNdisPacketToNetBufferLists;
        v25 = 0LL;
        v24 = ndisMCoSendCompleteToNetBufferLists;
        v26 = ndisCoSendNetBufferListsToNdisPacket;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v21) = 4;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v21,
            19,
            28,
            (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids);
        }
        v22 = 0LL;
        v23 = ndisMCoIndicateReceiveNetBufferListsToNetBufferLists;
        v24 = 0LL;
        v25 = ndisMCoSendNetBufferListsCompleteToNetBufferLists;
        v26 = ndisCoSendNetBufferListsToNetBufferLists;
      }
      v12[15].Blink = (_LIST_ENTRY *)v26;
      v12[16].Flink = (_LIST_ENTRY *)v25;
      v12[16].Blink = 0LL;
      v12[17].Flink = (_LIST_ENTRY *)v24;
      v12[17].Blink = (_LIST_ENTRY *)v22;
    }
    v12[18].Flink = (_LIST_ENTRY *)v23;
  }
  *NdisVcHandle = v12;
  return v20;
}
