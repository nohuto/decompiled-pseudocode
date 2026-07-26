/*
 * XREFs of ndisMSetGeneralAttributes @ 0x1C001DD54
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00C95F0 (NdisMSetMiniportAttributes.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisIfSetInterfaceState @ 0x1C0019BD4 (ndisIfSetInterfaceState.c)
 *     ndisMDereferenceIfBlock @ 0x1C0019E34 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0019EC8 (ndisMReferenceIfBlock.c)
 *     ndisMSetPowerManagementCapabilities @ 0x1C001E1E8 (ndisMSetPowerManagementCapabilities.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisMSetRssCapabilities @ 0x1C00C9A50 (ndisMSetRssCapabilities.c)
 *     ?ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C9AE0 (-ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z @ 0x1C00EF050 (-ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z.c)
 */

__int64 __fastcall ndisMSetGeneralAttributes(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  unsigned int v4; // ebp
  __int64 v5; // rdx
  unsigned int InterlockedFlags; // eax
  unsigned int v7; // ett
  bool v8; // zf
  _NDIS_MEDIUM DataLinkLayerType; // eax
  KIRQL v10; // r14
  unsigned __int8 LinkStateIndicationFlags; // dl
  _NET_IF_MEDIA_CONNECT_STATE v12; // eax
  unsigned int Flags; // ecx
  unsigned int v14; // ecx
  unsigned __int8 v15; // al
  __int64 result; // rax
  unsigned int v17; // ecx
  __int64 MediaType; // rcx
  unsigned int v19; // eax
  _NDIS_PHYSICAL_MEDIUM v20; // eax
  _NDIS_MEDIUM v21; // eax
  bool v22; // cf
  _NDIS_PHYSICAL_MEDIUM PhysicalMediumType; // eax
  unsigned int v24; // eax
  unsigned int *PoolWithTag; // rax
  __int128 v26; // xmm0
  int v27; // eax
  SIZE_T SupportedOidListLength; // rdx
  unsigned int *v29; // rax
  __int64 v30; // rax
  __int16 v31; // cx
  int v32; // r8d
  int v33; // r9d
  int v34; // eax
  void *v35; // rcx
  struct _NDIS_PNP_CAPABILITIES *v36; // rcx
  unsigned int SupportedStatistics; // eax

  v4 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(130LL, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
  if ( (a1->Flags & 0x80u) != 0 )
  {
    v30 = ndisMReferenceIfBlock((__int64)a1, 0x17u);
    if ( !v30 )
      return 3221291025LL;
    v31 = *(_WORD *)(v30 + 524);
    *(_WORD *)(a2 + 180) = v31;
    v32 = *(_DWORD *)(v30 + 564);
    *(_DWORD *)(a2 + 8) = v32;
    v33 = *(_DWORD *)(v30 + 568);
    *(_DWORD *)(a2 + 12) = v33;
    *(_BYTE *)(a2 + 182) = *(_BYTE *)(v30 + 556);
    *(_DWORD *)(a2 + 168) = *(_DWORD *)(v30 + 528);
    *(_DWORD *)(a2 + 176) = *(_DWORD *)(v30 + 536);
    *(_DWORD *)(a2 + 172) = *(_DWORD *)(v30 + 532);
    *(_DWORD *)(a2 + 64) = 1500;
    *(_DWORD *)(a2 + 80) = 581;
    if ( v31 == 243 && v32 == 9 && v33 == 8 )
    {
      v34 = 312;
      v35 = &ndisHandledWmbClassOids;
    }
    else
    {
      v34 = 108;
      v35 = &ndisHandledWdfOids;
    }
    *(_QWORD *)(a2 + 200) = v35;
    *(_DWORD *)(a2 + 208) = v34;
    ndisMDereferenceIfBlock((__int64)a1, MPIFREF_SET_ATTRIBUTES);
  }
  v5 = 0LL;
  if ( !(_DWORD)ndisMediumArraySize )
    return 3221291033LL;
  do
  {
    if ( *(_DWORD *)(a2 + 8) == *((_DWORD *)ndisMediumArray + v5) )
      break;
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < (unsigned int)ndisMediumArraySize );
  if ( (unsigned int)v5 >= (unsigned int)ndisMediumArraySize )
    return 3221291033LL;
  ndisReadDataLinkLayerKeywords(a1);
  _m_prefetchw(&a1->InterlockedFlags);
  InterlockedFlags = a1->InterlockedFlags;
  do
  {
    v7 = InterlockedFlags;
    InterlockedFlags = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&a1->InterlockedFlags,
                         InterlockedFlags,
                         InterlockedFlags);
  }
  while ( v7 != InterlockedFlags );
  v8 = (InterlockedFlags & 0x100) == 0;
  DataLinkLayerType = *(_DWORD *)(a2 + 8);
  if ( !v8 )
  {
    a1->MpSpecifiedMediaType = DataLinkLayerType;
    DataLinkLayerType = a1->DataLinkLayerType;
  }
  a1->MediaType = DataLinkLayerType;
  a1->MiniportMediaType = DataLinkLayerType;
  v10 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  LinkStateIndicationFlags = a1->LinkStateIndicationFlags;
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 729360;
  if ( (LinkStateIndicationFlags & 8) == 0 )
    a1->MiniportMediaConnectState = *(_DWORD *)(a2 + 56);
  if ( (LinkStateIndicationFlags & 0x10) == 0 )
  {
    a1->MiniportRcvLinkSpeed = *(_QWORD *)(a2 + 48);
    a1->MiniportXmitLinkSpeed = *(_QWORD *)(a2 + 32);
    a1->MiniportMediaDuplexState = *(_DWORD *)(a2 + 60);
    a1->MiniportAutoNegotiationFlags = *(_DWORD *)(a2 + 212);
  }
  if ( (LinkStateIndicationFlags & 1) == 0 )
  {
    v12 = *(_DWORD *)(a2 + 56);
    Flags = a1->Flags;
    a1->MediaConnectState = v12;
    if ( v12 == MediaConnectStateConnected )
      v14 = Flags | 0x20000000;
    else
      v14 = Flags & 0xDFFFFFFF;
    a1->Flags = v14;
  }
  if ( (LinkStateIndicationFlags & 2) == 0 )
  {
    a1->RcvLinkSpeed = *(_QWORD *)(a2 + 48);
    a1->XmitLinkSpeed = *(_QWORD *)(a2 + 32);
  }
  if ( (LinkStateIndicationFlags & 4) == 0 )
    a1->MediaDuplexState = *(_DWORD *)(a2 + 60);
  ndisIfSetInterfaceState((__int64)a1, 0LL, v10);
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLock(&a1->Lock, v10);
  a1->MP6SupportPM = 1;
  *(_QWORD *)&a1->PMCurrentParameters.Header.Type = 0LL;
  *(_QWORD *)&a1->PMCurrentParameters.EnabledProtocolOffloads = 0LL;
  a1->PMCurrentParameters.MediaSpecificWakeUpEvents = 0;
  v15 = *(_BYTE *)(a2 + 1);
  if ( v15 == 1 )
  {
    v36 = *(struct _NDIS_PNP_CAPABILITIES **)(a2 + 72);
    if ( v36 )
    {
      ndisConvertPnpCapabilitiesToPM(v36, &a1->PMHardwareCapabilities);
      goto LABEL_27;
    }
    goto LABEL_75;
  }
  if ( v15 < 2u || !*(_QWORD *)(a2 + 216) )
  {
LABEL_75:
    if ( a1->MajorNdisVersion >= 6u )
      a1->MP6SupportPM = 0;
    goto LABEL_27;
  }
  result = ndisMSetPowerManagementCapabilities(a1);
  v4 = result;
  if ( (_DWORD)result )
    return result;
LABEL_27:
  if ( *(_QWORD *)(a2 + 160) )
  {
    result = ndisMSetRssCapabilities(a1);
    v4 = result;
    if ( (_DWORD)result )
      return result;
  }
  v8 = (a1->DeviceFlags & 1) == 0;
  v17 = *(_DWORD *)(a2 + 84);
  a1->SupportedPacketFilters = v17;
  if ( !v8 )
    a1->SupportedPacketFilters = v17 | 0x20;
  MediaType = a1->MediaType;
  a1->MaxXmitLinkSpeed = *(_QWORD *)(a2 + 24);
  a1->MaxRcvLinkSpeed = *(_QWORD *)(a2 + 40);
  a1->MacOptions |= *(_DWORD *)(a2 + 80);
  if ( !(_DWORD)MediaType )
  {
    v19 = *(_DWORD *)(a2 + 64);
    if ( v19 > 0x200 )
      v19 = 512;
LABEL_34:
    a1->MiniportMaximumLookahead = v19;
    goto LABEL_35;
  }
  if ( (_DWORD)MediaType != 3 )
  {
    if ( (_DWORD)MediaType == 4
      || (int)MediaType > 8
      && ((int)MediaType <= 10 || (int)MediaType > 14 && ((int)MediaType <= 16 || (unsigned int)(MediaType - 18) <= 1)) )
    {
      a1->MiniportMaximumLookahead = *(_DWORD *)(a2 + 64);
    }
    if ( (int)MediaType < 20 )
      goto LABEL_35;
    v19 = *(_DWORD *)(a2 + 64);
    goto LABEL_34;
  }
  a1->MiniportMaximumLookahead = 512;
LABEL_35:
  if ( ((unsigned int)MediaType <= 0x13 && ndisMediaTypeCl[MediaType] || (_DWORD)MediaType == 3)
    && (a1->MacOptions & 0x80000001) == 0x80000001 )
  {
    a1->MiniportMaximumLookahead = 512;
  }
  if ( (int)MediaType >= 2
    && ((int)MediaType <= 8 || (int)MediaType > 9 && ((int)MediaType <= 15 || (_DWORD)MediaType == 17))
    || (int)MediaType >= 20 )
  {
    v20 = NdisPhysicalMediumUnspecified;
  }
  else
  {
    v20 = *(_DWORD *)(a2 + 12);
  }
  a1->PhysicalMediumType = v20;
  if ( (a1->MacOptions & 8) != 0 )
    a1->Flags |= 0x8000000u;
  v21 = a1->MediaType;
  if ( v21 )
  {
    if ( v21 == NdisMediumNative802_11 )
      a1->MaximumLongAddresses = *(_DWORD *)(a2 + 88);
  }
  else
  {
    v22 = a1->MajorNdisVersion < 6u;
    a1->MaximumLongAddresses = *(_DWORD *)(a2 + 88);
    if ( !v22 && a1->PhysicalMediumType == NdisPhysicalMediumWirelessLan )
      return 3221225659LL;
  }
  PhysicalMediumType = a1->PhysicalMediumType;
  if ( PhysicalMediumType == NdisPhysicalMediumUnspecified )
  {
    PhysicalMediumType = NdisPhysicalMediumUnspecified;
    if ( a1->PhysicalMediumInInf == 14 )
    {
      a1->PhysicalMediumType = NdisPhysicalMedium802_3;
      PhysicalMediumType = NdisPhysicalMedium802_3;
    }
  }
  v22 = a1->MajorNdisVersion < 6u;
  a1->MiniportPhysicalMediumType = PhysicalMediumType;
  if ( v22 && (SupportedStatistics = a1->SupportedStatistics) != 0 )
    *(_DWORD *)(a2 + 184) = SupportedStatistics;
  else
    a1->SupportedStatistics = *(_DWORD *)(a2 + 184);
  a1->DataBackFillSize = *(_DWORD *)(a2 + 192);
  a1->ContextBackFillSize = *(_DWORD *)(a2 + 196);
  v24 = *(_DWORD *)(a2 + 208);
  if ( v24 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v24, 0x6D61444Eu);
    a1->SupportedOidList = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *(const void **)(a2 + 200), *(unsigned int *)(a2 + 208));
      a1->SupportedOidListLength = *(_DWORD *)(a2 + 208);
    }
  }
  v26 = *(_OWORD *)&a1->RecvScaleCapabilities.Header.Type;
  a1->TopFilterRestartAttributes.AccessType = *(_DWORD *)(a2 + 168);
  a1->TopFilterRestartAttributes.ConnectionType = *(_DWORD *)(a2 + 176);
  a1->TopFilterRestartAttributes.ContextBackFillSize = *(_DWORD *)(a2 + 196);
  a1->TopFilterRestartAttributes.DataBackFillSize = *(_DWORD *)(a2 + 192);
  a1->TopFilterRestartAttributes.Header = *(_NDIS_OBJECT_HEADER *)a2;
  a1->TopFilterRestartAttributes.LookaheadSize = *(_DWORD *)(a2 + 64);
  a1->TopFilterRestartAttributes.MacOptions = a1->MacOptions;
  a1->TopFilterRestartAttributes.MaxMulticastListSize = *(_DWORD *)(a2 + 88);
  a1->TopFilterRestartAttributes.MtuSize = *(_DWORD *)(a2 + 16);
  v27 = *(_DWORD *)&a1->RecvScaleCapabilities.NumberOfIndirectionTableEntries;
  *(_OWORD *)&a1->TopRecvScaleCapabilities.Header.Type = v26;
  *(_DWORD *)&a1->TopRecvScaleCapabilities.NumberOfIndirectionTableEntries = v27;
  a1->TopFilterRestartAttributes.RecvScaleCapabilities = &a1->TopRecvScaleCapabilities;
  a1->TopFilterRestartAttributes.SupportedPacketFilters = *(_DWORD *)(a2 + 84);
  a1->TopFilterRestartAttributes.SupportedStatistics = *(_DWORD *)(a2 + 184);
  a1->TopFilterRestartAttributes.MaxXmitLinkSpeed = *(_QWORD *)(a2 + 24);
  a1->TopFilterRestartAttributes.MaxRcvLinkSpeed = *(_QWORD *)(a2 + 40);
  SupportedOidListLength = *(unsigned int *)(a2 + 208);
  if ( (_DWORD)SupportedOidListLength || a1->MajorNdisVersion < 6u && a1->SupportedOidListLength )
  {
    if ( a1->MajorNdisVersion < 6u )
    {
      SupportedOidListLength = a1->SupportedOidListLength;
      *(_DWORD *)(a2 + 208) = SupportedOidListLength;
      *(_QWORD *)(a2 + 200) = a1->SupportedOidList;
    }
    v29 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, SupportedOidListLength, 0x6D61444Eu);
    a1->TopFilterRestartAttributes.SupportedOidList = v29;
    if ( v29 )
    {
      memmove(v29, *(const void **)(a2 + 200), *(unsigned int *)(a2 + 208));
      a1->TopFilterRestartAttributes.SupportedOidListLength = *(_DWORD *)(a2 + 208);
    }
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(131LL, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, v4);
  return 0LL;
}
