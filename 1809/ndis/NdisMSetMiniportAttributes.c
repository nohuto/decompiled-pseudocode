/*
 * XREFs of NdisMSetMiniportAttributes @ 0x1C00C95F0
 * Callers:
 *     ndisLWMInitializeHandler @ 0x1C00F0124 (ndisLWMInitializeHandler.c)
 * Callees:
 *     ?NdisTraceLoggingQosHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C0013424 (-NdisTraceLoggingQosHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_AT.c)
 *     ?NdisTraceLoggingQosConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C0013520 (-NdisTraceLoggingQosConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTR.c)
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C001D0D8 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 *     TraceLoggingProviderEnabled @ 0x1C001DC04 (TraceLoggingProviderEnabled.c)
 *     ndisMSetGeneralAttributes @ 0x1C001DD54 (ndisMSetGeneralAttributes.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     ?NdisTraceLoggingNDKCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C007D7B0 (-NdisTraceLoggingNDKCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIB.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ndisMSetReceiveFilterAttributes @ 0x1C00BA430 (ndisMSetReceiveFilterAttributes.c)
 *     ndisMSetNicSwitchAttributes @ 0x1C00BA684 (ndisMSetNicSwitchAttributes.c)
 *     ndisMSetSriovAttributes @ 0x1C00BAFE8 (ndisMSetSriovAttributes.c)
 *     ndisMSetQosAttributes @ 0x1C00BB350 (ndisMSetQosAttributes.c)
 *     ndisUpdateNoPauseOnSuspend @ 0x1C00C30B8 (ndisUpdateNoPauseOnSuspend.c)
 *     ndisMSetOffloadAttributes @ 0x1C00C9B6C (ndisMSetOffloadAttributes.c)
 *     ndisMSetHDSplitAttributes @ 0x1C00C9F08 (ndisMSetHDSplitAttributes.c)
 *     ndisMSetNative802_11Attributes @ 0x1C00F0A54 (ndisMSetNative802_11Attributes.c)
 *     ndisMSetNDKAttributes @ 0x1C00F77DC (ndisMSetNDKAttributes.c)
 *     ?ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C0101094 (-ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z.c)
 *     NdisMSetAttributesEx @ 0x1C010E770 (NdisMSetAttributesEx.c)
 */

NDIS_STATUS __stdcall NdisMSetMiniportAttributes(
        NDIS_HANDLE NdisMiniportHandle,
        PNDIS_MINIPORT_ADAPTER_ATTRIBUTES MiniportAttributes)
{
  UCHAR Type; // r15
  NDIS_STATUS v5; // edi
  UCHAR Revision; // al
  USHORT Size; // cx
  unsigned __int8 v9; // al
  unsigned __int8 v10; // al
  unsigned __int8 v11; // al
  unsigned __int8 v12; // al
  unsigned __int64 MaxXmitLinkSpeed; // r9
  unsigned __int64 XmitLinkSpeed; // rax
  struct _NDIS_OFFLOAD *DefaultOffloadConfiguration; // rbp
  struct _NDIS_OFFLOAD *HardwareOffloadCapabilities; // r14
  UCHAR v17; // dl
  ULONGLONG v18; // r8
  PVOID PoolWithTag; // rax
  NDIS_STATUS v20; // eax
  unsigned int Flags; // r9d
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // edx
  int v26; // ecx
  ULONG v27; // edi
  unsigned __int8 v28; // al
  int v29; // ecx
  unsigned int v30; // ecx
  UCHAR v31; // dl
  ULONGLONG v32; // r8
  NDIS_INTERFACE_TYPE AdapterType[2]; // [rsp+20h] [rbp-28h]

  Type = MiniportAttributes->Header.Type;
  v5 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x7Au, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, (__int64)NdisMiniportHandle, Type);
  ndisReferencePackage((__int64)&ndisPkgs);
  switch ( Type )
  {
    case 0x9Eu:
      Flags = MiniportAttributes->AddDeviceRegistrationAttributes.Flags;
      v22 = 16 * ((*(_WORD *)(*((_QWORD *)NdisMiniportHandle + 474) + 26LL) & 1) + 34);
      if ( (Flags & 1) != 0 )
      {
        *((_DWORD *)NdisMiniportHandle + 31) |= 0x200000u;
        Flags = MiniportAttributes->AddDeviceRegistrationAttributes.Flags;
      }
      if ( (Flags & 2) != 0 )
      {
        *((_DWORD *)NdisMiniportHandle + 31) |= 0x400000u;
        Flags = MiniportAttributes->AddDeviceRegistrationAttributes.Flags;
      }
      v23 = v22 | 0x80;
      if ( (Flags & 4) == 0 )
        v23 = v22;
      v24 = v23 | 0x100;
      if ( (Flags & 8) == 0 )
        v24 = v23;
      v25 = v24 | 0x400;
      if ( (Flags & 0x10) == 0 )
        v25 = v24;
      v26 = v25 | 0x40;
      if ( (Flags & 0x20) == 0 )
        v26 = v25;
      v27 = v26 | 8;
      if ( (Flags & 0x40) == 0 )
        v27 = v26;
      if ( (Flags & 0x100) != 0 )
      {
        *((_DWORD *)NdisMiniportHandle + 470) |= 0x80000000;
        ndisUpdateNoPauseOnSuspend((__int64)NdisMiniportHandle);
        Flags = MiniportAttributes->AddDeviceRegistrationAttributes.Flags;
      }
      if ( (Flags & 0x200) != 0 )
      {
        *((_DWORD *)NdisMiniportHandle + 470) |= 0x200u;
        Flags = MiniportAttributes->AddDeviceRegistrationAttributes.Flags;
      }
      if ( (Flags & 0x400) != 0
        || (v28 = *((_BYTE *)NdisMiniportHandle + 32), v28 <= 6u)
        && (v28 != 6 || *((_BYTE *)NdisMiniportHandle + 33) < 0x1Eu) )
      {
        *((_DWORD *)NdisMiniportHandle + 30) |= 0x400u;
      }
      NdisMSetAttributesEx(
        NdisMiniportHandle,
        MiniportAttributes->AddDeviceRegistrationAttributes.MiniportAddDeviceContext,
        MiniportAttributes->RegistrationAttributes.CheckForHangTimeInSeconds,
        v27,
        MiniportAttributes->RegistrationAttributes.InterfaceType);
      v29 = *((_DWORD *)NdisMiniportHandle + 30);
      if ( (MiniportAttributes->AddDeviceRegistrationAttributes.Flags & 0x80u) != 0 )
      {
        *((_DWORD *)NdisMiniportHandle + 31) |= 0x80u;
        v30 = v29 & 0xFFFEFFFF;
      }
      else
      {
        v30 = v29 | 0x10000;
      }
      *((_DWORD *)NdisMiniportHandle + 30) = v30;
      v5 = 0;
      break;
    case 0x9Fu:
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, MiniportAttributes->Header.Size, 0x2020444Eu);
      *((_QWORD *)NdisMiniportHandle + 341) = PoolWithTag;
      if ( !PoolWithTag )
      {
        v5 = -1073741670;
        break;
      }
      memmove(PoolWithTag, MiniportAttributes, MiniportAttributes->Header.Size);
      v20 = ndisMSetGeneralAttributes(
              (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
              *((_QWORD *)NdisMiniportHandle + 341));
      goto LABEL_51;
    case 0xA0u:
      MaxXmitLinkSpeed = 0LL;
      XmitLinkSpeed = 0LL;
      DefaultOffloadConfiguration = 0LL;
      HardwareOffloadCapabilities = 0LL;
      if ( MiniportAttributes->Header.Size >= 0x28u )
      {
        DefaultOffloadConfiguration = MiniportAttributes->OffloadAttributes.DefaultOffloadConfiguration;
        HardwareOffloadCapabilities = MiniportAttributes->OffloadAttributes.HardwareOffloadCapabilities;
        MaxXmitLinkSpeed = MiniportAttributes->GeneralAttributes.MaxXmitLinkSpeed;
        XmitLinkSpeed = MiniportAttributes->GeneralAttributes.XmitLinkSpeed;
      }
      v5 = ndisMSetOffloadAttributes(
             NdisMiniportHandle,
             DefaultOffloadConfiguration,
             HardwareOffloadCapabilities,
             MaxXmitLinkSpeed,
             XmitLinkSpeed);
      if ( !v5 && TraceLoggingProviderEnabled(&hProvider, v17, v18) )
        NdisTraceLoggingOffloads(
          (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
          HardwareOffloadCapabilities,
          DefaultOffloadConfiguration);
      break;
    case 0xA1u:
      v20 = ndisMSetNative802_11Attributes(NdisMiniportHandle, MiniportAttributes);
      goto LABEL_51;
    case 0xA4u:
      *((_QWORD *)NdisMiniportHandle + 518) = MiniportAttributes->AddDeviceRegistrationAttributes.MiniportAddDeviceContext;
      break;
    case 0xAFu:
      Revision = MiniportAttributes->Header.Revision;
      if ( !Revision )
        goto LABEL_89;
      Size = MiniportAttributes->Header.Size;
      if ( Size < 0x10u )
        goto LABEL_89;
      if ( Revision != 2 )
      {
        if ( Size < 0x50u && Revision >= 3u )
          goto LABEL_89;
        goto LABEL_17;
      }
      if ( Size >= 0x30u )
      {
LABEL_17:
        v9 = *((_BYTE *)NdisMiniportHandle + 32);
        if ( v9 <= 6u && (v9 != 6 || !*((_BYTE *)NdisMiniportHandle + 33)) )
          goto LABEL_90;
        v5 = ndisMSetHDSplitAttributes(
               NdisMiniportHandle,
               MiniportAttributes->AddDeviceRegistrationAttributes.MiniportAddDeviceContext);
        if ( v5 < 0 )
          break;
        if ( MiniportAttributes->Header.Revision >= 2u )
        {
          v10 = *((_BYTE *)NdisMiniportHandle + 32);
          if ( v10 <= 6u && (v10 != 6 || *((_BYTE *)NdisMiniportHandle + 33) < 0x14u) )
            goto LABEL_90;
          if ( MiniportAttributes->OffloadAttributes.HardwareOffloadCapabilities )
          {
            if ( MiniportAttributes->GeneralAttributes.MaxXmitLinkSpeed )
            {
              v5 = ndisMSetReceiveFilterAttributes((__int64)NdisMiniportHandle, (__int64)MiniportAttributes);
              if ( v5 < 0 )
                break;
            }
          }
          if ( MiniportAttributes->Header.Revision >= 2u )
          {
            v11 = *((_BYTE *)NdisMiniportHandle + 32);
            if ( v11 <= 6u && (v11 != 6 || *((_BYTE *)NdisMiniportHandle + 33) < 0x14u) )
              goto LABEL_90;
            if ( MiniportAttributes->GeneralAttributes.XmitLinkSpeed )
            {
              if ( MiniportAttributes->GeneralAttributes.MaxRcvLinkSpeed )
              {
                v5 = ndisMSetNicSwitchAttributes((void **)NdisMiniportHandle, (__int64)MiniportAttributes);
                if ( v5 < 0 )
                  break;
              }
            }
          }
        }
        if ( MiniportAttributes->Header.Revision < 3u )
          break;
        v12 = *((_BYTE *)NdisMiniportHandle + 32);
        if ( v12 > 6u || v12 == 6 && *((_BYTE *)NdisMiniportHandle + 33) >= 0x1Eu )
        {
          if ( !MiniportAttributes->GeneralAttributes.RcvLinkSpeed
            || !MiniportAttributes->Native_802_11_Attributes.WFDAttributes
            || (v5 = ndisMSetSriovAttributes((__int64)NdisMiniportHandle, (__int64)MiniportAttributes), v5 >= 0) )
          {
            if ( MiniportAttributes->HardwareAssistAttributes.HardwareQosCapabilities )
            {
              if ( MiniportAttributes->GeneralAttributes.PowerManagementCapabilities )
              {
                v5 = ndisMSetQosAttributes((__int64)NdisMiniportHandle, (__int64)MiniportAttributes);
                if ( v5 >= 0 )
                {
                  NdisTraceLoggingQosHardwareOffloads(
                    (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                    MiniportAttributes);
                  NdisTraceLoggingQosConfigOffloads(
                    (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                    MiniportAttributes);
                }
              }
            }
          }
          break;
        }
LABEL_90:
        v5 = -1073741637;
        break;
      }
LABEL_89:
      v5 = -1073741811;
      break;
    case 0xB3u:
      v5 = ndisMSetNDKAttributes(NdisMiniportHandle, MiniportAttributes);
      if ( !v5 && TraceLoggingProviderEnabled(&hProvider, v31, v32) )
        NdisTraceLoggingNDKCapabilities((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, MiniportAttributes);
      break;
    case 0xC5u:
      v20 = ndisMSetPacketDirectAttributes(NdisMiniportHandle, MiniportAttributes);
LABEL_51:
      v5 = v20;
      break;
    default:
      goto LABEL_89;
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    AdapterType[0] = v5;
    WPP_SF_qdD(
      0x7Bu,
      &WPP_f453a6740ca1326a168191528118e90e_Traceguids,
      (__int64)NdisMiniportHandle,
      Type,
      *(_QWORD *)AdapterType);
  }
  return v5;
}
