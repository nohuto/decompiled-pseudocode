/*
 * XREFs of ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002FBC4
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C002F6B0 (NdisMSetMiniportAttributes.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisMDereferenceIfBlock @ 0x1C001AE20 (ndisMDereferenceIfBlock.c)
 *     ndisIfSetInterfaceState @ 0x1C001AE84 (ndisIfSetInterfaceState.c)
 *     ndisMReferenceIfBlock @ 0x1C001C65C (ndisMReferenceIfBlock.c)
 *     ndisMSetPowerManagementCapabilities @ 0x1C00300B8 (ndisMSetPowerManagementCapabilities.c)
 *     ?ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z @ 0x1C00301C0 (-ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     ?ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0108568 (-ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z @ 0x1C0117134 (-ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z.c)
 */

int __fastcall ndisMSetGeneralAttributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *a2)
{
  struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v2; // rdi
  char v4; // r14
  __int64 v5; // rdx
  unsigned int InterlockedFlags; // eax
  unsigned int v7; // ett
  bool v8; // zf
  _NDIS_MEDIUM MediaType; // eax
  KIRQL v10; // bp
  unsigned __int8 LinkStateIndicationFlags; // dl
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // eax
  unsigned int Flags; // ecx
  unsigned int v14; // ecx
  UCHAR Revision; // al
  _NDIS_PM_CAPABILITIES *PowerManagementCapabilitiesEx; // rdx
  int result; // eax
  struct _NDIS_RECEIVE_SCALE_CAPABILITIES *RecvScaleCapabilities; // rdx
  unsigned int SupportedPacketFilters; // ecx
  __int64 v20; // rcx
  unsigned int v21; // edx
  unsigned int LookaheadSize; // eax
  _NDIS_PHYSICAL_MEDIUM PhysicalMediumType; // eax
  _NDIS_MEDIUM v24; // eax
  bool v25; // cf
  _NDIS_PHYSICAL_MEDIUM v26; // eax
  unsigned int SupportedOidListLength; // eax
  unsigned int *PoolWithTag; // rax
  __int128 v29; // xmm0
  int v30; // eax
  SIZE_T v31; // rdx
  unsigned int *v32; // rax
  __int64 v33; // rax
  struct _NDIS_PNP_CAPABILITIES *PowerManagementCapabilities; // rcx
  unsigned int SupportedStatistics; // eax

  v2 = a2;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      128,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1);
  }
  if ( (a1->Flags & 0x80u) != 0 )
  {
    v33 = ndisMReferenceIfBlock((__int64)a1, 0x17u);
    if ( !v33 )
      return -1073676271;
    v2->IfType = *(_WORD *)(v33 + 524);
    v2->MediaType = *(_DWORD *)(v33 + 564);
    v2->PhysicalMediumType = *(_DWORD *)(v33 + 568);
    v2->IfConnectorPresent = *(_BYTE *)(v33 + 556);
    v2->AccessType = *(_DWORD *)(v33 + 528);
    v2->ConnectionType = *(_DWORD *)(v33 + 536);
    v2->DirectionType = *(_DWORD *)(v33 + 532);
    v2->LookaheadSize = 1500;
    v2->MacOptions = 581;
    ndisMDereferenceIfBlock((__int64)a1, MPIFREF_SET_ATTRIBUTES);
  }
  v5 = 0LL;
  if ( !(_DWORD)ndisMediumArraySize )
    return -1073676263;
  do
  {
    if ( v2->MediaType == *((_DWORD *)ndisMediumArray + v5) )
      break;
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < (unsigned int)ndisMediumArraySize );
  if ( (unsigned int)v5 >= (unsigned int)ndisMediumArraySize )
    return -1073676263;
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
  MediaType = v2->MediaType;
  if ( !v8 )
  {
    a1->MpSpecifiedMediaType = MediaType;
    MediaType = a1->DataLinkLayerType;
  }
  a1->MediaType = MediaType;
  a1->MiniportMediaType = MediaType;
  v10 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  LinkStateIndicationFlags = a1->LinkStateIndicationFlags;
  a1->MiniportThread = KeGetCurrentThread();
  if ( (LinkStateIndicationFlags & 8) == 0 )
    a1->MiniportMediaConnectState = v2->MediaConnectState;
  if ( (LinkStateIndicationFlags & 0x10) == 0 )
  {
    a1->MiniportRcvLinkSpeed = v2->RcvLinkSpeed;
    a1->MiniportXmitLinkSpeed = v2->XmitLinkSpeed;
    a1->MiniportMediaDuplexState = v2->MediaDuplexState;
    a1->MiniportAutoNegotiationFlags = v2->AutoNegotiationFlags;
  }
  if ( (LinkStateIndicationFlags & 1) == 0 )
  {
    MediaConnectState = v2->MediaConnectState;
    Flags = a1->Flags;
    a1->MediaConnectState = MediaConnectState;
    if ( MediaConnectState == MediaConnectStateConnected )
      v14 = Flags | 0x20000000;
    else
      v14 = Flags & 0xDFFFFFFF;
    a1->Flags = v14;
  }
  if ( (LinkStateIndicationFlags & 2) == 0 )
  {
    a1->RcvLinkSpeed = v2->RcvLinkSpeed;
    a1->XmitLinkSpeed = v2->XmitLinkSpeed;
  }
  if ( (LinkStateIndicationFlags & 4) == 0 )
    a1->MediaDuplexState = v2->MediaDuplexState;
  ndisIfSetInterfaceState((__int64)a1, 0, v10);
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v10);
  a1->MP6SupportPM = 1;
  *(_QWORD *)&a1->PMCurrentParameters.EnabledWoLPacketPatterns = 0LL;
  *(_QWORD *)&a1->PMCurrentParameters.WakeUpFlags = 0LL;
  a1->PMCurrentParameters.Header = (_NDIS_OBJECT_HEADER)1311360;
  Revision = v2->Header.Revision;
  if ( Revision == 1 )
  {
    PowerManagementCapabilities = v2->PowerManagementCapabilities;
    if ( PowerManagementCapabilities )
    {
      ndisConvertPnpCapabilitiesToPM(PowerManagementCapabilities, &a1->PMHardwareCapabilities);
      goto LABEL_27;
    }
    goto LABEL_70;
  }
  if ( Revision < 2u || (PowerManagementCapabilitiesEx = v2->PowerManagementCapabilitiesEx) == 0LL )
  {
LABEL_70:
    if ( a1->MajorNdisVersion >= 6u )
      a1->MP6SupportPM = 0;
    goto LABEL_27;
  }
  result = ndisMSetPowerManagementCapabilities((char)a1, (char)PowerManagementCapabilitiesEx);
  v4 = result;
  if ( result )
    return result;
LABEL_27:
  RecvScaleCapabilities = v2->RecvScaleCapabilities;
  if ( RecvScaleCapabilities )
  {
    result = ndisMSetRssCapabilities(a1, RecvScaleCapabilities);
    v4 = result;
    if ( result )
      return result;
  }
  v8 = (a1->DeviceFlags & 1) == 0;
  SupportedPacketFilters = v2->SupportedPacketFilters;
  a1->SupportedPacketFilters = SupportedPacketFilters;
  if ( !v8 )
    a1->SupportedPacketFilters = SupportedPacketFilters | 0x20;
  v20 = a1->MediaType;
  a1->MaxXmitLinkSpeed = v2->MaxXmitLinkSpeed;
  a1->MaxRcvLinkSpeed = v2->MaxRcvLinkSpeed;
  v21 = a1->MacOptions | v2->MacOptions;
  a1->MacOptions = v21;
  if ( !(_DWORD)v20 )
  {
    LookaheadSize = v2->LookaheadSize;
    if ( LookaheadSize > 0x200 )
      LookaheadSize = 512;
LABEL_34:
    a1->MiniportMaximumLookahead = LookaheadSize;
    goto LABEL_35;
  }
  if ( (_DWORD)v20 != 3 )
  {
    if ( (_DWORD)v20 == 4
      || (int)v20 > 8 && ((int)v20 <= 10 || (int)v20 > 14 && ((int)v20 <= 16 || (unsigned int)(v20 - 18) <= 1)) )
    {
      a1->MiniportMaximumLookahead = v2->LookaheadSize;
    }
    if ( (int)v20 < 20 )
      goto LABEL_35;
    LookaheadSize = v2->LookaheadSize;
    goto LABEL_34;
  }
  a1->MiniportMaximumLookahead = 512;
LABEL_35:
  if ( ((unsigned int)v20 <= 0x13 && ndisMediaTypeCl[v20] || (_DWORD)v20 == 3) && (v21 & 0x80000001) == 0x80000001 )
    a1->MiniportMaximumLookahead = 512;
  if ( (int)v20 >= 2 && ((int)v20 <= 8 || (int)v20 > 9 && ((int)v20 <= 15 || (_DWORD)v20 == 17)) || (int)v20 >= 20 )
    PhysicalMediumType = NdisPhysicalMediumUnspecified;
  else
    PhysicalMediumType = v2->PhysicalMediumType;
  a1->PhysicalMediumType = PhysicalMediumType;
  if ( (a1->MacOptions & 8) != 0 )
    a1->Flags |= 0x8000000u;
  v24 = a1->MediaType;
  if ( v24 )
  {
    if ( v24 == NdisMediumNative802_11 )
      a1->MaximumLongAddresses = v2->MaxMulticastListSize;
  }
  else
  {
    v25 = a1->MajorNdisVersion < 6u;
    a1->MaximumLongAddresses = v2->MaxMulticastListSize;
    if ( !v25 && a1->PhysicalMediumType == NdisPhysicalMediumWirelessLan )
      return -1073741637;
  }
  v26 = a1->PhysicalMediumType;
  if ( v26 == NdisPhysicalMediumUnspecified )
  {
    v26 = NdisPhysicalMediumUnspecified;
    if ( a1->PhysicalMediumInInf == 14 )
    {
      a1->PhysicalMediumType = NdisPhysicalMedium802_3;
      v26 = NdisPhysicalMedium802_3;
    }
  }
  v25 = a1->MajorNdisVersion < 6u;
  a1->MiniportPhysicalMediumType = v26;
  if ( v25 && (SupportedStatistics = a1->SupportedStatistics) != 0 )
    v2->SupportedStatistics = SupportedStatistics;
  else
    a1->SupportedStatistics = v2->SupportedStatistics;
  a1->DataBackFillSize = v2->DataBackFillSize;
  a1->ContextBackFillSize = v2->ContextBackFillSize;
  SupportedOidListLength = v2->SupportedOidListLength;
  if ( SupportedOidListLength )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, SupportedOidListLength, 0x6D61444Eu);
    a1->SupportedOidList = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, v2->SupportedOidList, v2->SupportedOidListLength);
      a1->SupportedOidListLength = v2->SupportedOidListLength;
    }
  }
  v29 = *(_OWORD *)&a1->RecvScaleCapabilities.Header.Type;
  a1->TopFilterRestartAttributes.AccessType = v2->AccessType;
  a1->TopFilterRestartAttributes.ConnectionType = v2->ConnectionType;
  a1->TopFilterRestartAttributes.ContextBackFillSize = v2->ContextBackFillSize;
  a1->TopFilterRestartAttributes.DataBackFillSize = v2->DataBackFillSize;
  a1->TopFilterRestartAttributes.Header = v2->Header;
  a1->TopFilterRestartAttributes.LookaheadSize = v2->LookaheadSize;
  a1->TopFilterRestartAttributes.MacOptions = a1->MacOptions;
  a1->TopFilterRestartAttributes.MaxMulticastListSize = v2->MaxMulticastListSize;
  a1->TopFilterRestartAttributes.MtuSize = v2->MtuSize;
  v30 = *(_DWORD *)&a1->RecvScaleCapabilities.NumberOfIndirectionTableEntries;
  *(_OWORD *)&a1->TopRecvScaleCapabilities.Header.Type = v29;
  *(_DWORD *)&a1->TopRecvScaleCapabilities.NumberOfIndirectionTableEntries = v30;
  a1->TopFilterRestartAttributes.RecvScaleCapabilities = &a1->TopRecvScaleCapabilities;
  a1->TopFilterRestartAttributes.SupportedPacketFilters = v2->SupportedPacketFilters;
  a1->TopFilterRestartAttributes.SupportedStatistics = v2->SupportedStatistics;
  a1->TopFilterRestartAttributes.MaxXmitLinkSpeed = v2->MaxXmitLinkSpeed;
  a1->TopFilterRestartAttributes.MaxRcvLinkSpeed = v2->MaxRcvLinkSpeed;
  v31 = v2->SupportedOidListLength;
  if ( (_DWORD)v31 || a1->MajorNdisVersion < 6u && a1->SupportedOidListLength )
  {
    if ( a1->MajorNdisVersion < 6u )
    {
      v31 = a1->SupportedOidListLength;
      v2->SupportedOidListLength = v31;
      v2->SupportedOidList = a1->SupportedOidList;
    }
    v32 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v31, 0x6D61444Eu);
    a1->TopFilterRestartAttributes.SupportedOidList = v32;
    if ( v32 )
    {
      memmove(v32, v2->SupportedOidList, v2->SupportedOidListLength);
      a1->TopFilterRestartAttributes.SupportedOidListLength = v2->SupportedOidListLength;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v31) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v31,
      1,
      129,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1,
      v4);
  }
  return 0;
}
