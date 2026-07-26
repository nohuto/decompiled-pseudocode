/*
 * XREFs of ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@KPEAK@Z @ 0x1C0024C70
 * Callers:
 *     NdisIfRegisterInterface @ 0x1C00668C0 (NdisIfRegisterInterface.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C010301C (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C0011F54 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C001B4E4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_Llq @ 0x1C0025144 (WPP_RECORDER_SF_Llq.c)
 *     ndisIfAllocateIfIndex @ 0x1C00251EC (ndisIfAllocateIfIndex.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C002527C (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     NdisAllocateRefCount @ 0x1C00252E0 (NdisAllocateRefCount.c)
 *     WPP_RECORDER_SF_qllq @ 0x1C00253A0 (WPP_RECORDER_SF_qllq.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C00368BC (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00FF488 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C0106450 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 */

__int64 __fastcall ndisIfRegisterInterfaceEx(
        _QWORD *a1,
        union _NET_LUID_LH a2,
        _QWORD *a3,
        struct _NET_IF_INFORMATION *a4,
        enum NdisIfBlockSource a5,
        char a6,
        unsigned int *a7)
{
  union _NET_LUID_LH v7; // rbx
  _DWORD *v10; // rdi
  unsigned __int16 FriendlyNameLength; // bp
  _DWORD *PoolWithTag; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  _OWORD *v15; // rax
  struct _NET_IF_INFORMATION *v16; // rsi
  __int128 v17; // xmm1
  KIRQL v18; // bp
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  struct _NDIS_IF_NETWORK_BLOCK *v20; // rsi
  _LIST_ENTRY *i; // r14
  unsigned int IfIndex; // ebx
  _LIST_ENTRY *v23; // rcx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *Flink; // rdx
  _QWORD *v26; // rcx
  __int64 v27; // rdx
  _QWORD *v28; // rax
  _LIST_ENTRY *p_InterfaceLink; // rcx
  _LIST_ENTRY *v30; // rdx
  _LIST_ENTRY *v31; // rax
  _QWORD *v32; // rax
  KIRQL v33; // bl
  _GUID NetworkGuid; // xmm0
  unsigned __int16 PhysAddressLength; // ax
  unsigned __int16 v37; // ax
  unsigned __int16 PermanentPhysAddressOffset; // ax
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  unsigned int v40; // [rsp+50h] [rbp-48h] BYREF
  _QWORD *v41; // [rsp+58h] [rbp-40h]

  v7.Value = a2.Value;
  LODWORD(a2.Value) = 0;
  v40 = (v7.Value >> 24) & 0xFFFFFF;
  v10 = 0LL;
  v41 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qllq(*((_QWORD *)WPP_GLOBAL_Control + 8), 0, (_DWORD)a3, (_DWORD)a4);
  if ( ndisNsiInitialized != 1 )
  {
    IfIndex = -1073741823;
    goto LABEL_34;
  }
  if ( !a4 )
  {
    IfIndex = -1073741811;
LABEL_56:
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
    goto LABEL_34;
  }
  if ( a4->Header.Revision != 1 )
  {
    IfIndex = -1073741637;
    goto LABEL_34;
  }
  if ( a4->Header.Size < 0x60u )
  {
    IfIndex = -1073741811;
    goto LABEL_34;
  }
  FriendlyNameLength = 512;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x5D8uLL, 0x6669444Eu);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    IfIndex = -1073741670;
    goto LABEL_34;
  }
  memset(PoolWithTag + 1, 0, 0x5D4uLL);
  *v10 = 98042131;
  if ( ((v7.Value >> 24) & 0xFFFFFF) - 32512 > 0x4100
    && (unsigned int)ndisIfAllocateAndVerifyNetLuidIndex(*((unsigned __int16 *)&v7.Info + 3), &v40, 0, 0) )
  {
    goto LABEL_43;
  }
  *((union _NET_LUID_LH *)v10 + 164) = v7;
  LOBYTE(a2.Value) = 2;
  LOBYTE(v13) = 16;
  v10[334] = a4->Flags;
  v10[140] = a4->Flags;
  v10[335] = a4->WanTunnelType;
  v10[336] = a4->PortNumber;
  v10[354] = a4->SupportedStatistics;
  v10[350] = a5;
  v10[326] = 1;
  *((_QWORD *)v10 + 179) = ((__int64 (__fastcall *)(_QWORD, _QWORD))NdisAllocateRefCount)(
                             v13,
                             (union _NET_LUID_LH)a2.Value);
  if ( a4->FriendlyNameLength <= 0x200u )
    FriendlyNameLength = a4->FriendlyNameLength;
  *((_WORD *)v10 + 4) = FriendlyNameLength;
  if ( FriendlyNameLength )
    memmove((char *)v10 + 10, &a4->Header.Type + a4->FriendlyNameOffset, FriendlyNameLength);
  *((_WORD *)v10 + 262) = *((_WORD *)&v7.Info + 3);
  v10[132] = a4->AccessType;
  v10[133] = a4->DirectionType;
  v10[134] = a4->ConnectionType;
  *((_BYTE *)v10 + 556) = a4->ifConnectorPresent;
  *(_GUID *)(v10 + 135) = a4->InterfaceGuid;
  v10[141] = a4->MediaType;
  v10[142] = a4->PhysicalMediumType;
  *((_QWORD *)v10 + 166) = a1;
  if ( a1 != ndisIfProviderHandle && a1 != ndisIfLoopbackProviderHandle )
  {
    NetworkGuid = a4->NetworkGuid;
    *((_QWORD *)v10 + 165) = a3;
    *(_GUID *)(v10 + 145) = NetworkGuid;
    PhysAddressLength = a4->PhysAddressLength;
    if ( PhysAddressLength <= 0x20u )
    {
      *((_WORD *)v10 + 562) = PhysAddressLength;
      *((_WORD *)v10 + 579) = a4->PhysAddressLength;
      v37 = a4->PhysAddressLength;
      if ( v37 )
      {
        memmove((char *)v10 + 1126, &a4->Header.Type + a4->PhysAddressOffset, v37);
        PermanentPhysAddressOffset = a4->PermanentPhysAddressOffset;
        if ( PermanentPhysAddressOffset )
          memmove(v10 + 290, &a4->Header.Type + PermanentPhysAddressOffset, a4->PhysAddressLength);
      }
      goto LABEL_19;
    }
LABEL_43:
    IfIndex = -1073741811;
    goto LABEL_56;
  }
  v14 = 5LL;
  v15 = v10 + 144;
  v16 = a4 + 1;
  do
  {
    *v15 = *(_OWORD *)&v16->Header.Type;
    v15[1] = *(_OWORD *)&v16->PhysicalLocation.FunctionNumber;
    v15[2] = *(_OWORD *)&v16->DirectionType;
    v15[3] = *(_OWORD *)&v16->FriendlyNameLength;
    v15[4] = *(_OWORD *)&v16->InterfaceGuid.Data4[4];
    v15[5] = *(_OWORD *)&v16->NetworkGuid.Data4[4];
    v15[6] = *(_OWORD *)&v16[1].Header.Type;
    v15 += 8;
    v17 = *(_OWORD *)&v16[1].PhysicalLocation.FunctionNumber;
    v16 = (struct _NET_IF_INFORMATION *)((char *)v16 + 128);
    *(v15 - 1) = v17;
    --v14;
  }
  while ( v14 );
  *v15 = *(_OWORD *)&v16->Header.Type;
  *((_BYTE *)v10 + 1393) = 1;
  *((_QWORD *)v10 + 165) = v10;
  if ( a3 )
  {
    v41 = a3;
    *((_QWORD *)v10 + 176) = a3;
    *((_BYTE *)v10 + 1394) = 1;
  }
LABEL_19:
  v18 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( !(unsigned int)ndisCompareGuid((const struct _GUID *)(v10 + 145), &ndisDefaultNetworkGuid) )
  {
    CompartmentBlock = ndisIfFindCompartmentBlock(1u);
    if ( !CompartmentBlock )
    {
LABEL_50:
      IfIndex = -1073741811;
      KeReleaseSpinLock(&ndisIfListLock, v18);
      goto LABEL_56;
    }
    *(_GUID *)(v10 + 145) = CompartmentBlock->LoopbackNetwork->NetworkGuid;
  }
  NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)(v10 + 145));
  v20 = NetworkBlock;
  if ( !NetworkBlock || (NetworkBlock->Flags & 3) != 0 )
    goto LABEL_50;
  for ( i = ndisIfList.Flink; i != &ndisIfList && i[5].Flink <= (_LIST_ENTRY *)v7.Value; i = i->Flink )
  {
    if ( i[5].Flink == (_LIST_ENTRY *)v7.Value )
    {
      IfIndex = -1073741270;
      KeReleaseSpinLock(&ndisIfListLock, v18);
      goto LABEL_56;
    }
  }
  IfIndex = ndisIfAllocateIfIndex(a6);
  if ( IfIndex )
  {
    KeReleaseSpinLock(&ndisIfListLock, v18);
    goto LABEL_56;
  }
  v23 = (_LIST_ENTRY *)(v10 + 308);
  v10[1] = 0;
  Blink = i->Blink;
  Flink = Blink->Flink;
  if ( Blink->Flink->Blink != Blink )
    goto LABEL_53;
  *((_QWORD *)v10 + 155) = Blink;
  v23->Flink = Flink;
  Flink->Blink = v23;
  Blink->Flink = v23;
  v26 = a1 + 3;
  v27 = a1[3];
  v28 = v10 + 312;
  if ( *(_QWORD **)(v27 + 8) != a1 + 3
    || (*((_QWORD *)v10 + 157) = v26,
        *v28 = v27,
        *(_QWORD *)(v27 + 8) = v28,
        *v26 = v28,
        p_InterfaceLink = &v20->InterfaceLink,
        v30 = v20->InterfaceLink.Flink,
        v31 = (_LIST_ENTRY *)(v10 + 316),
        v30->Blink != &v20->InterfaceLink) )
  {
LABEL_53:
    __fastfail(3u);
  }
  v31->Flink = v30;
  ++ndisInterfaceCount;
  *((_QWORD *)v10 + 159) = p_InterfaceLink;
  v30->Blink = v31;
  p_InterfaceLink->Flink = v31;
  v10[144] = v20->Compartment->CompartmentId;
  *((_QWORD *)v10 + 171) = v20;
  *((_QWORD *)v10 + 172) = v20->Compartment;
  ++v20->Ref;
  v32 = v41;
  if ( v41 )
  {
    v41[87] = v10;
    *((_DWORD *)v32 + 172) = 0;
  }
  NdisReferenceWithTag(*((struct _NDIS_REFCOUNT_BLOCK **)v10 + 179), 0);
  ++v10[326];
  KeReleaseSpinLock(&ndisIfListLock, v18);
  ndisNsiNotifyClientInterfaceChange(v10, 1LL, 0LL);
  v33 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF((char *)v10, 0);
  KeReleaseSpinLock(&ndisIfListLock, v33);
  IfIndex = 0;
  *a7 = 0;
LABEL_34:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Llq(*((_QWORD *)WPP_GLOBAL_Control + 8), a2.Value, (_DWORD)a3, (_DWORD)a4);
  return IfIndex;
}
