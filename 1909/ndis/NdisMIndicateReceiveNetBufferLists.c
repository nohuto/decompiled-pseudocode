/*
 * XREFs of NdisMIndicateReceiveNetBufferLists @ 0x1C000E7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000BDC8 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ndisInvokeNextReceiveHandler @ 0x1C00210F0 (ndisInvokeNextReceiveHandler.c)
 *     ?ndisPeriodicReceivesLearning@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAT_LARGE_INTEGER@@@Z @ 0x1C0040D4C (-ndisPeriodicReceivesLearning@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAT_LARGE_INTEGER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C007AD6C (ndisGenerateNetBufferListCorrelationIds.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C007AE58 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x1C00A9EF8 (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00AF688 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00AF81C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C00C98AC (PktMonClientNblDropNdis.c)
 *     PktMonClientNblLogNdis @ 0x1C00C98FC (PktMonClientNblLogNdis.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisMIndicateReceiveNetBufferLists(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG NumberOfNetBufferLists,
        ULONG ReceiveFlags)
{
  KIRQL v5; // r12
  unsigned int v6; // ebx
  char v10; // si
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned int v14; // ebx
  int v15; // esi
  unsigned int v16; // r9d
  LARGE_INTEGER *v17; // r13
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v19; // rax
  struct NDIS_PCW_CONTEXT v20; // [rsp+40h] [rbp-48h] BYREF
  union _LARGE_INTEGER v21; // [rsp+90h] [rbp+8h] BYREF

  v5 = 2;
  v6 = 0;
  v20.PcwBlock = 0LL;
  *(_QWORD *)&v20.DatapathEventsMask = 0LL;
  v20.CurrentCpu = -1;
  if ( *((_DWORD *)MiniportAdapterHandle + 12) || *((_DWORD *)MiniportAdapterHandle + 20) )
  {
    v20.DatapathEventsMask = *((_DWORD *)MiniportAdapterHandle + 12);
    v20.DatapathCyclesMask = *((_DWORD *)MiniportAdapterHandle + 20);
    v20.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)*((_QWORD *)MiniportAdapterHandle + 5);
    if ( !v20.PcwBlock )
      v20.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)*((_QWORD *)MiniportAdapterHandle + 5);
  }
  v10 = ReceiveFlags;
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 0x800) != 0 )
    ndisNblVerifyRxIndication(
      (ULONG_PTR)NetBufferList,
      PortNumber,
      NumberOfNetBufferLists,
      ReceiveFlags,
      (const struct _NDIS_OBJECT_HEADER *)MiniportAdapterHandle,
      *((enum _NDIS_MEDIUM *)MiniportAdapterHandle + 459));
  if ( (v20.DatapathCyclesMask & 4) != 0 )
  {
    if ( (v10 & 1) == 0 )
      v5 = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter(&v20, 2u);
  }
  if ( (*((_DWORD *)MiniportAdapterHandle + 670) & 1) != 0 )
  {
    v17 = (LARGE_INTEGER *)NetBufferList;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( NetBufferList )
    {
      do
      {
        v17[44] = PerformanceCounter;
        v17 = (LARGE_INTEGER *)v17->QuadPart;
      }
      while ( v17 );
    }
  }
  if ( *((_BYTE *)MiniportAdapterHandle + 2664) )
  {
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      ndisGenerateNetBufferListCorrelationIds(NetBufferList, NumberOfNetBufferLists);
    if ( *(_DWORD *)ndisNblTrackerMode )
    {
      v16 = 129;
      if ( (v10 & 2) == 0 )
        v16 = 128;
      if ( (v10 & 1) != 0 )
        v6 = 1;
      ndisNblTrackerTransferOwnershipInternal(
        NetBufferList,
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 510),
        *((_QWORD *)MiniportAdapterHandle + 313),
        v16,
        v6);
    }
    if ( byte_1C00E5E20 )
    {
      v19 = *((_QWORD *)MiniportAdapterHandle + 728);
      if ( v19 )
      {
        if ( (*(_DWORD *)(v19 + 12) & 1) != 0 )
          PktMonClientNblLogNdis((char *)MiniportAdapterHandle + 5816, NetBufferList, *(_QWORD *)&PortNumber, 1LL);
      }
    }
    v11 = MEMORY[0xFFFFF78000000320];
    ndisInvokeNextReceiveHandler(
      NetBufferList,
      *((struct _NDIS_FILTER_BLOCK **)MiniportAdapterHandle + 314),
      *((void **)MiniportAdapterHandle + 312),
      *((void (**)(void))MiniportAdapterHandle + 328));
    v13 = ndisTimeIncrement * (MEMORY[0xFFFFF78000000320] - v11) / 10000;
    v21.QuadPart = v13;
    v14 = v10 & 1;
    if ( (v10 & 1) != 0 || KeGetCurrentIrql() == 2 )
      ndisPeriodicReceivesLearning((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, NumberOfNetBufferLists, &v21);
    v15 = v10 & 2;
    if ( v15 && *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        NetBufferList,
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 313),
        *((_QWORD *)MiniportAdapterHandle + 510),
        0x8Eu,
        v14);
    if ( (Microsoft_Windows_Networking_CorrelationEnabled || byte_1C00E5E20) && v15 )
      ndisMarkNetBufferListCorrelationIdsAsUsed(NetBufferList, v13, v12);
  }
  else
  {
    if ( byte_1C00E5E20 && (*((_DWORD *)MiniportAdapterHandle + 1453) & 2) != 0 )
      PktMonClientNblDropNdis(
        (_DWORD)MiniportAdapterHandle + 5800,
        (_DWORD)NetBufferList,
        PortNumber,
        1,
        -1071448033,
        -536866808);
    if ( (v10 & 2) == 0 )
    {
      if ( (v10 & 1) != 0 )
        v6 = 1;
      (*((void (__fastcall **)(_QWORD, PNET_BUFFER_LIST, _QWORD))MiniportAdapterHandle + 307))(
        *((_QWORD *)MiniportAdapterHandle + 293),
        NetBufferList,
        v6);
    }
  }
  if ( (v20.DatapathCyclesMask & 4) != 0 )
  {
    ndisPcwEndCycleCounter(&v20, 2u, 0xFuLL);
    if ( v5 != 2 )
      KeLowerIrql(v5);
  }
}
