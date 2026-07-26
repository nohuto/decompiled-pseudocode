/*
 * XREFs of ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@KPEAK@Z @ 0x1C001BD74
 * Callers:
 *     NdisIfRegisterInterface @ 0x1C0041680 (NdisIfRegisterInterface.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00C3AC8 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 * Callees:
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C000988C (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 *     NdisReferenceWithTag @ 0x1C000CF50 (NdisReferenceWithTag.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001C21C (IFBLOCK_DECREMENT_REF.c)
 *     ndisIfAllocateIfIndex @ 0x1C001C260 (ndisIfAllocateIfIndex.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001C2F0 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ndisIfFindCompartmentBlock @ 0x1C001FB00 (ndisIfFindCompartmentBlock.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_Llq @ 0x1C00419E8 (WPP_SF_Llq.c)
 *     WPP_SF_qllq @ 0x1C004201C (WPP_SF_qllq.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00C4184 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     NdisAllocateRefCount @ 0x1C00C42B0 (NdisAllocateRefCount.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00C4374 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 */

__int64 __fastcall ndisIfRegisterInterfaceEx(
        _QWORD *a1,
        union _NET_LUID_LH a2,
        _QWORD *a3,
        struct _NET_IF_INFORMATION *a4,
        enum NdisIfBlockSource a5,
        unsigned int a6,
        unsigned int *a7)
{
  __int64 v9; // rdx
  _DWORD *v11; // rdi
  unsigned __int16 FriendlyNameLength; // r14
  _DWORD *PoolWithTag; // rax
  __int64 v14; // rcx
  _OWORD *v15; // rax
  struct _NET_IF_INFORMATION *v16; // rsi
  __int128 v17; // xmm1
  KIRQL v18; // bp
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  struct _NDIS_IF_NETWORK_BLOCK *v20; // rsi
  _LIST_ENTRY *i; // r14
  union _NET_LUID_LH v22; // rax
  unsigned int IfIndex; // ebx
  _LIST_ENTRY *v24; // rcx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *Flink; // rdx
  _QWORD *v27; // rcx
  __int64 v28; // rdx
  _QWORD *v29; // rax
  _LIST_ENTRY *p_InterfaceLink; // rcx
  _LIST_ENTRY *v31; // rdx
  _LIST_ENTRY *v32; // rax
  _QWORD *v33; // rax
  KIRQL v34; // bl
  _GUID NetworkGuid; // xmm0
  unsigned __int16 PhysAddressLength; // ax
  unsigned __int16 v38; // ax
  unsigned __int16 PermanentPhysAddressOffset; // ax
  __int64 CompartmentBlock; // rax
  unsigned int v41; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v42; // [rsp+38h] [rbp-40h]
  _QWORD *v43; // [rsp+80h] [rbp+8h]

  v43 = a1;
  v9 = 0LL;
  v41 = (a2.Value >> 24) & 0xFFFFFF;
  v11 = 0LL;
  v42 = 0LL;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qllq(a1, 0LL, a1, HIWORD(a2.Value), (a2.Value >> 24) & 0xFFFFFF, a4, v41);
  if ( ndisNsiInitialized != 1 )
  {
    IfIndex = -1073741823;
    goto LABEL_34;
  }
  if ( !a4 )
  {
    IfIndex = -1073741811;
LABEL_58:
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      v11 = 0LL;
    }
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
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x5E0uLL, 0x6669444Eu);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    IfIndex = -1073741670;
    goto LABEL_34;
  }
  memset(PoolWithTag, 0, 0x5E0uLL);
  *v11 = 98566419;
  if ( ((a2.Value >> 24) & 0xFFFFFF) - 32512 > 0x4100
    && (unsigned int)ndisIfAllocateAndVerifyNetLuidIndex(*((unsigned __int16 *)&a2.Info + 3), &v41, 0, 0) )
  {
    IfIndex = -1073741811;
    goto LABEL_58;
  }
  *((union _NET_LUID_LH *)v11 + 164) = a2;
  LOBYTE(v9) = 2;
  LOBYTE(a1) = 16;
  v11[334] = a4->Flags;
  v11[140] = a4->Flags;
  *(_QWORD *)(v11 + 335) = *(_QWORD *)&a4->PhysicalLocation.BusNumber;
  v11[337] = a4->PhysicalLocation.FunctionNumber;
  v11[338] = a4->WanTunnelType;
  v11[339] = a4->PortNumber;
  v11[356] = a4->SupportedStatistics;
  v11[352] = a5;
  v11[326] = 1;
  *((_QWORD *)v11 + 180) = NdisAllocateRefCount(a1, v9);
  if ( a4->FriendlyNameLength <= 0x200u )
    FriendlyNameLength = a4->FriendlyNameLength;
  *((_WORD *)v11 + 4) = FriendlyNameLength;
  if ( FriendlyNameLength )
    memmove((char *)v11 + 10, &a4->Header.Type + a4->FriendlyNameOffset, FriendlyNameLength);
  *((_WORD *)v11 + 262) = *((_WORD *)&a2.Info + 3);
  v11[132] = a4->AccessType;
  v11[133] = a4->DirectionType;
  v11[134] = a4->ConnectionType;
  *((_BYTE *)v11 + 556) = a4->ifConnectorPresent;
  *(_GUID *)(v11 + 135) = a4->InterfaceGuid;
  v11[141] = a4->MediaType;
  v11[142] = a4->PhysicalMediumType;
  *((_QWORD *)v11 + 166) = v43;
  if ( v43 == ndisIfProviderHandle || v43 == ndisIfLoopbackProviderHandle )
  {
    v14 = 5LL;
    v15 = v11 + 144;
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
    *((_BYTE *)v11 + 1401) = 1;
    *((_QWORD *)v11 + 165) = v11;
    if ( a3 )
    {
      v42 = a3;
      *((_QWORD *)v11 + 177) = a3;
      *((_BYTE *)v11 + 1402) = 1;
    }
  }
  else
  {
    NetworkGuid = a4->NetworkGuid;
    *((_QWORD *)v11 + 165) = a3;
    *(_GUID *)(v11 + 145) = NetworkGuid;
    PhysAddressLength = a4->PhysAddressLength;
    if ( PhysAddressLength > 0x20u )
    {
      IfIndex = -1073741811;
      goto LABEL_58;
    }
    *((_WORD *)v11 + 562) = PhysAddressLength;
    *((_WORD *)v11 + 579) = a4->PhysAddressLength;
    v38 = a4->PhysAddressLength;
    if ( v38 )
    {
      memmove((char *)v11 + 1126, &a4->Header.Type + a4->PhysAddressOffset, v38);
      PermanentPhysAddressOffset = a4->PermanentPhysAddressOffset;
      if ( PermanentPhysAddressOffset )
        memmove(v11 + 290, &a4->Header.Type + PermanentPhysAddressOffset, a4->PhysAddressLength);
    }
  }
  v18 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( !(unsigned int)ndisCompareGuid((const struct _GUID *)(v11 + 145), &ndisDefaultNetworkGuid) )
  {
    CompartmentBlock = ndisIfFindCompartmentBlock(1LL);
    if ( !CompartmentBlock )
      goto LABEL_51;
    *(_OWORD *)(v11 + 145) = *(_OWORD *)(*(_QWORD *)(CompartmentBlock + 56) + 32LL);
  }
  NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)(v11 + 145));
  v20 = NetworkBlock;
  if ( !NetworkBlock || (NetworkBlock->Flags & 3) != 0 )
  {
LABEL_51:
    IfIndex = -1073741811;
LABEL_53:
    KeReleaseSpinLock(&ndisIfListLock, v18);
    goto LABEL_58;
  }
  for ( i = ndisIfList.Flink; i != &ndisIfList; i = i->Flink )
  {
    v22.Value = (ULONG64)i[5].Flink;
    if ( v22.Value > a2.Value )
      break;
    if ( v22.Value == a2.Value )
    {
      IfIndex = -1073741270;
      goto LABEL_53;
    }
  }
  IfIndex = ndisIfAllocateIfIndex(a6);
  if ( IfIndex )
    goto LABEL_53;
  v24 = (_LIST_ENTRY *)(v11 + 308);
  v11[1] = 0;
  Blink = i->Blink;
  Flink = Blink->Flink;
  if ( Blink->Flink->Blink != Blink )
    goto LABEL_55;
  *((_QWORD *)v11 + 155) = Blink;
  v24->Flink = Flink;
  Flink->Blink = v24;
  Blink->Flink = v24;
  v27 = v43 + 3;
  v28 = v43[3];
  v29 = v11 + 312;
  if ( *(_QWORD **)(v28 + 8) != v43 + 3
    || (*((_QWORD *)v11 + 157) = v27,
        *v29 = v28,
        *(_QWORD *)(v28 + 8) = v29,
        *v27 = v29,
        p_InterfaceLink = &v20->InterfaceLink,
        v31 = v20->InterfaceLink.Flink,
        v32 = (_LIST_ENTRY *)(v11 + 316),
        v31->Blink != &v20->InterfaceLink) )
  {
LABEL_55:
    __fastfail(3u);
  }
  v32->Flink = v31;
  ++ndisInterfaceCount;
  *((_QWORD *)v11 + 159) = p_InterfaceLink;
  v31->Blink = v32;
  p_InterfaceLink->Flink = v32;
  v11[144] = v20->Compartment->CompartmentId;
  *((_QWORD *)v11 + 172) = v20;
  *((_QWORD *)v11 + 173) = v20->Compartment;
  ++v20->Ref;
  v33 = v42;
  if ( v42 )
  {
    v42[88] = v11;
    *((_DWORD *)v33 + 174) = 0;
  }
  NdisReferenceWithTag(*((struct _NDIS_REFCOUNT_BLOCK **)v11 + 180), 0);
  ++v11[326];
  KeReleaseSpinLock(&ndisIfListLock, v18);
  ndisNsiNotifyClientInterfaceChange(v11, 1LL, 0LL, 1LL);
  v34 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF(v11);
  KeReleaseSpinLock(&ndisIfListLock, v34);
  IfIndex = 0;
  *a7 = 0;
LABEL_34:
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_Llq(a1, v9, IfIndex, 0LL, v11);
  return IfIndex;
}
