/*
 * XREFs of NdisAllocatePacketPoolEx @ 0x1C001F3D0
 * Callers:
 *     NdisAllocatePacketPool @ 0x1C0051EA0 (NdisAllocatePacketPool.c)
 *     ndisVerifierAllocatePacketPoolEx @ 0x1C006A450 (ndisVerifierAllocatePacketPoolEx.c)
 *     DriverEntry @ 0x1C0127870 (DriverEntry.c)
 * Callees:
 *     NdisFreePacket @ 0x1C001F5D0 (NdisFreePacket.c)
 *     NdisAllocatePacket @ 0x1C001F690 (NdisAllocatePacket.c)
 *     NdisPacketSize @ 0x1C001FBD0 (NdisPacketSize.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 */

void __stdcall NdisAllocatePacketPoolEx(
        PNDIS_STATUS Status,
        PNDIS_HANDLE PoolHandle,
        UINT NumberOfDescriptors,
        UINT NumberOfOverflowDescriptors,
        UINT ProtocolReservedLength)
{
  PVOID v5; // rdi
  ULONG v10; // ebp
  UINT v11; // edi
  UINT v12; // eax
  unsigned __int16 v13; // r15
  _QWORD *PoolWithTag; // rax
  _QWORD *v15; // rbx
  UINT v16; // eax
  KIRQL v17; // al
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v19; // rdi
  int v20; // eax
  KIRQL v21; // al
  _LIST_ENTRY *v22; // r8
  _LIST_ENTRY **v23; // rdx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  PNDIS_PACKET Packet; // [rsp+58h] [rbp+10h] BYREF

  v5 = *PoolHandle;
  v10 = 1886405710;
  if ( (unsigned __int8)byte_1C00A0264 >= 4u )
    WPP_SF_(10LL, &WPP_8df08a1cf1a93f964e71fb8294d520a8_Traceguids);
  *PoolHandle = 0LL;
  if ( ((((unsigned int)v5 & 0xFFFFFF) - 5260366LL) & 0xFFFFFFFFFFDFFFFFuLL) == 0 )
    v10 = (unsigned int)v5 & 0x7FFFFFFF;
  if ( NumberOfDescriptors > 0xFFFF )
    goto LABEL_27;
  v11 = NumberOfDescriptors + NumberOfOverflowDescriptors;
  if ( NumberOfDescriptors + NumberOfOverflowDescriptors < NumberOfDescriptors )
  {
    *Status = -1073741811;
    return;
  }
  if ( v11 > 0xFFFF )
    v11 = 0xFFFF;
  v12 = NdisPacketSize(ProtocolReservedLength);
  v13 = v12;
  if ( v12 - 1 > 0xFFFE
    || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, v10), (v15 = PoolWithTag) == 0LL) )
  {
LABEL_27:
    *Status = -1073741670;
    return;
  }
  memset(PoolWithTag, 0, 0x70uLL);
  *(_DWORD *)v15 = v10;
  *((_WORD *)v15 + 2) = v13;
  *((_WORD *)v15 + 3) = 0xFC0u / v13;
  if ( 0xFC0u / v13 )
  {
    *((_DWORD *)v15 + 5) = 4096;
    *((_WORD *)v15 + 4) = (0xFC0u / v13 + v11 - 1) / (0xFC0u / v13);
  }
  KeInitializeSpinLock(v15 + 4);
  v16 = *((unsigned __int16 *)v15 + 3);
  if ( v16 > v11 || !(_WORD)v16 )
  {
    v20 = v11 * *((unsigned __int16 *)v15 + 2);
    *((_WORD *)v15 + 3) = v11;
    *((_DWORD *)v15 + 5) = v20 + 64;
    *((_WORD *)v15 + 4) = 1;
  }
  *((_DWORD *)v15 + 4) = 0;
  v15[10] = v15 + 9;
  v15[9] = v15 + 9;
  v15[6] = v15 + 5;
  v15[5] = v15 + 5;
  v15[8] = v15 + 7;
  v15[7] = v15 + 7;
  v17 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalPacketPoolListLock);
  Flink = ndisGlobalPacketPoolList.Flink;
  v19 = (_LIST_ENTRY *)(v15 + 11);
  if ( ndisGlobalPacketPoolList.Flink->Blink != &ndisGlobalPacketPoolList )
    goto LABEL_26;
  v19->Flink = ndisGlobalPacketPoolList.Flink;
  v15[12] = &ndisGlobalPacketPoolList;
  Flink->Blink = v19;
  ndisGlobalPacketPoolList.Flink = (_LIST_ENTRY *)(v15 + 11);
  KeReleaseSpinLock(&ndisGlobalPacketPoolListLock, v17);
  NdisAllocatePacket(Status, &Packet, v15);
  if ( !*Status )
  {
    NdisFreePacket(Packet);
    *PoolHandle = v15;
    v15[3] = retaddr;
    goto LABEL_18;
  }
  v21 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalPacketPoolListLock);
  v22 = v19->Flink;
  if ( v19->Flink->Blink != v19 || (v23 = (_LIST_ENTRY **)v15[12], *v23 != v19) )
LABEL_26:
    __fastfail(3u);
  *v23 = v22;
  v22->Blink = (_LIST_ENTRY *)v23;
  KeReleaseSpinLock(&ndisGlobalPacketPoolListLock, v21);
  ExFreePoolWithTag(v15, 0);
LABEL_18:
  if ( (unsigned __int8)byte_1C00A0264 >= 4u )
    WPP_SF_D(11LL, &WPP_8df08a1cf1a93f964e71fb8294d520a8_Traceguids, (unsigned int)*Status);
}
