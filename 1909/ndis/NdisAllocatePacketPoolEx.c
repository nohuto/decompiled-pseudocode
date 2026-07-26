/*
 * XREFs of NdisAllocatePacketPoolEx @ 0x1C0032100
 * Callers:
 *     NdisAllocatePacketPool @ 0x1C0080CB0 (NdisAllocatePacketPool.c)
 *     ?ndisVerifierAllocatePacketPoolEx@@YAXPEAHPEAPEAXIII@Z @ 0x1C00A9960 (-ndisVerifierAllocatePacketPoolEx@@YAXPEAHPEAPEAXIII@Z.c)
 *     DriverEntry @ 0x1C0144AD0 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032358 (WPP_RECORDER_SF_D.c)
 *     NdisFreePacket @ 0x1C0032420 (NdisFreePacket.c)
 *     NdisAllocatePacket @ 0x1C00324E0 (NdisAllocatePacket.c)
 *     NdisPacketSize @ 0x1C0032770 (NdisPacketSize.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

void __stdcall NdisAllocatePacketPoolEx(
        PNDIS_STATUS Status,
        PNDIS_HANDLE PoolHandle,
        UINT NumberOfDescriptors,
        UINT NumberOfOverflowDescriptors,
        UINT ProtocolReservedLength)
{
  PVOID v5; // rdi
  PNDIS_HANDLE v8; // r15
  ULONG v10; // esi
  UINT v11; // edi
  UINT v12; // eax
  unsigned __int16 v13; // bp
  _QWORD *PoolWithTag; // rax
  _QWORD *v15; // rbx
  UINT v16; // eax
  KIRQL v17; // al
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v19; // rdi
  int v20; // edx
  int v21; // eax
  KIRQL v22; // al
  _LIST_ENTRY *v23; // r8
  _LIST_ENTRY **v24; // rdx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  PNDIS_PACKET Packet; // [rsp+68h] [rbp+10h] BYREF

  v5 = *PoolHandle;
  v8 = PoolHandle;
  v10 = 1886405710;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(PoolHandle) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)PoolHandle,
      21,
      10,
      (struct _GUID *)&WPP_34c34292621439c17f3df840409c7e2a_Traceguids);
  }
  *v8 = 0LL;
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
  memset(PoolWithTag + 1, 0, 0x68uLL);
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
    v21 = v11 * *((unsigned __int16 *)v15 + 2);
    *((_WORD *)v15 + 3) = v11;
    *((_DWORD *)v15 + 5) = v21 + 64;
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
    *v8 = v15;
    v15[3] = retaddr;
    goto LABEL_18;
  }
  v22 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalPacketPoolListLock);
  v23 = v19->Flink;
  if ( v19->Flink->Blink != v19 || (v24 = (_LIST_ENTRY **)v15[12], *v24 != v19) )
LABEL_26:
    __fastfail(3u);
  *v24 = v23;
  v23->Blink = (_LIST_ENTRY *)v24;
  KeReleaseSpinLock(&ndisGlobalPacketPoolListLock, v22);
  ExFreePoolWithTag(v15, 0);
LABEL_18:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v20) = 4;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v20,
      21,
      11,
      (struct _GUID *)&WPP_34c34292621439c17f3df840409c7e2a_Traceguids,
      *Status);
  }
}
