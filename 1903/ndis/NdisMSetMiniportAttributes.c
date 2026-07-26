/*
 * XREFs of NdisMSetMiniportAttributes @ 0x1C002F6B0
 * Callers:
 *     ?ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01171B4 (-ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     ?NdisTraceLoggingQosHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C0020678 (-NdisTraceLoggingQosHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_AT.c)
 *     ?NdisTraceLoggingQosConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C0020774 (-NdisTraceLoggingQosConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTR.c)
 *     ndisMSetReceiveFilterAttributes @ 0x1C0021654 (ndisMSetReceiveFilterAttributes.c)
 *     ?ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C0021E14 (-ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_A.c)
 *     ?ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C0022720 (-ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIS.c)
 *     ?ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C00229D4 (-ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_.c)
 *     ndisUpdateNoPauseOnSuspend @ 0x1C00271F4 (ndisUpdateNoPauseOnSuspend.c)
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002FBC4 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C0030770 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 *     TraceLoggingProviderEnabled @ 0x1C003126C (TraceLoggingProviderEnabled.c)
 *     ndisMSetOffloadAttributes @ 0x1C00312F0 (ndisMSetOffloadAttributes.c)
 *     ?ndisMSetHDSplitAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_HD_SPLIT_ATTRIBUTES@@@Z @ 0x1C00317F8 (-ndisMSetHDSplitAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_HD_SPLIT_ATTRIBUTES@@@Z.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     ?ndisMSetNative802_11Attributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES@@@Z @ 0x1C0097A44 (-ndisMSetNative802_11Attributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_NATIVE_.c)
 *     ?NdisTraceLoggingNDKCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C00C29C4 (-NdisTraceLoggingNDKCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIB.c)
 *     ndisMSetNDKAttributes @ 0x1C0119B60 (ndisMSetNDKAttributes.c)
 *     ?ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C01214FC (-ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z.c)
 *     NdisMSetAttributesEx @ 0x1C012F0C0 (NdisMSetAttributesEx.c)
 */

NDIS_STATUS __stdcall NdisMSetMiniportAttributes(
        NDIS_HANDLE NdisMiniportHandle,
        PNDIS_MINIPORT_ADAPTER_ATTRIBUTES MiniportAttributes)
{
  UCHAR Type; // r15
  PNDIS_MINIPORT_ADAPTER_ATTRIBUTES v3; // rsi
  NDIS_STATUS v5; // edi
  _NDIS_TCP_CONNECTION_OFFLOAD *TcpConnectionOffloadHardwareCapabilities; // rax
  struct _NDIS_OFFLOAD *DefaultOffloadConfiguration; // rbp
  struct _NDIS_OFFLOAD *HardwareOffloadCapabilities; // r14
  UCHAR v9; // dl
  ULONGLONG v10; // r8
  int v11; // edx
  UCHAR Revision; // al
  USHORT Size; // cx
  unsigned __int8 v15; // al
  unsigned __int8 v16; // al
  unsigned __int8 v17; // al
  unsigned __int8 v18; // al
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

  Type = MiniportAttributes->Header.Type;
  v3 = MiniportAttributes;
  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(MiniportAttributes) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MiniportAttributes,
      1,
      120,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)NdisMiniportHandle,
      Type);
  }
  ndisReferencePackage((__int64)&ndisPkgs);
  switch ( Type )
  {
    case 0x9Eu:
      Flags = v3->AddDeviceRegistrationAttributes.Flags;
      v22 = 16 * ((*(_WORD *)(*((_QWORD *)NdisMiniportHandle + 470) + 26LL) & 1) + 34);
      if ( (Flags & 1) != 0 )
      {
        *((_DWORD *)NdisMiniportHandle + 31) |= 0x200000u;
        Flags = v3->AddDeviceRegistrationAttributes.Flags;
      }
      if ( (Flags & 2) != 0 )
      {
        *((_DWORD *)NdisMiniportHandle + 31) |= 0x400000u;
        Flags = v3->AddDeviceRegistrationAttributes.Flags;
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
        *((_DWORD *)NdisMiniportHandle + 468) |= 0x80000000;
        ndisUpdateNoPauseOnSuspend((__int64)NdisMiniportHandle);
        Flags = v3->AddDeviceRegistrationAttributes.Flags;
      }
      if ( (Flags & 0x200) != 0 )
      {
        *((_DWORD *)NdisMiniportHandle + 468) |= 0x200u;
        Flags = v3->AddDeviceRegistrationAttributes.Flags;
      }
      if ( (Flags & 0x400) != 0
        || (v28 = *((_BYTE *)NdisMiniportHandle + 32), v28 <= 6u)
        && (v28 != 6 || *((_BYTE *)NdisMiniportHandle + 33) < 0x1Eu) )
      {
        *((_DWORD *)NdisMiniportHandle + 30) |= 0x400u;
      }
      NdisMSetAttributesEx(
        NdisMiniportHandle,
        v3->AddDeviceRegistrationAttributes.MiniportAddDeviceContext,
        v3->RegistrationAttributes.CheckForHangTimeInSeconds,
        v27,
        v3->RegistrationAttributes.InterfaceType);
      v29 = *((_DWORD *)NdisMiniportHandle + 30);
      if ( (v3->AddDeviceRegistrationAttributes.Flags & 0x80u) != 0 )
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
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v3->Header.Size, 0x2020444Eu);
      *((_QWORD *)NdisMiniportHandle + 339) = PoolWithTag;
      if ( !PoolWithTag )
      {
        v5 = -1073741670;
        break;
      }
      memmove(PoolWithTag, v3, v3->Header.Size);
      v20 = ndisMSetGeneralAttributes(
              (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
              *((struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES **)NdisMiniportHandle + 339));
      goto LABEL_51;
    case 0xA0u:
      TcpConnectionOffloadHardwareCapabilities = 0LL;
      DefaultOffloadConfiguration = 0LL;
      HardwareOffloadCapabilities = 0LL;
      if ( v3->Header.Size >= 0x28u )
      {
        DefaultOffloadConfiguration = v3->OffloadAttributes.DefaultOffloadConfiguration;
        HardwareOffloadCapabilities = v3->OffloadAttributes.HardwareOffloadCapabilities;
        TcpConnectionOffloadHardwareCapabilities = v3->OffloadAttributes.TcpConnectionOffloadHardwareCapabilities;
      }
      v5 = ndisMSetOffloadAttributes(
             (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
             (char)DefaultOffloadConfiguration,
             TcpConnectionOffloadHardwareCapabilities);
      if ( !v5 && TraceLoggingProviderEnabled(&hProvider, v9, v10) )
        NdisTraceLoggingOffloads(
          (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
          HardwareOffloadCapabilities,
          DefaultOffloadConfiguration);
      break;
    case 0xA1u:
      v20 = ndisMSetNative802_11Attributes(
              (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
              (struct _NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES *)v3);
      goto LABEL_51;
    case 0xA4u:
      *((_QWORD *)NdisMiniportHandle + 514) = v3->AddDeviceRegistrationAttributes.MiniportAddDeviceContext;
      break;
    case 0xAFu:
      Revision = v3->Header.Revision;
      if ( !Revision )
        goto LABEL_89;
      Size = v3->Header.Size;
      if ( Size < 0x10u )
        goto LABEL_89;
      if ( Revision != 2 )
      {
        if ( Size < 0x50u && Revision >= 3u )
          goto LABEL_89;
        goto LABEL_22;
      }
      if ( Size >= 0x30u )
      {
LABEL_22:
        v15 = *((_BYTE *)NdisMiniportHandle + 32);
        if ( v15 <= 6u && (v15 != 6 || !*((_BYTE *)NdisMiniportHandle + 33)) )
          goto LABEL_90;
        v5 = ndisMSetHDSplitAttributes(
               (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
               v3->HardwareAssistAttributes.HDSplitAttributes);
        if ( v5 < 0 )
          break;
        if ( v3->Header.Revision >= 2u )
        {
          v16 = *((_BYTE *)NdisMiniportHandle + 32);
          if ( v16 <= 6u && (v16 != 6 || *((_BYTE *)NdisMiniportHandle + 33) < 0x14u) )
            goto LABEL_90;
          if ( v3->OffloadAttributes.HardwareOffloadCapabilities )
          {
            if ( v3->GeneralAttributes.MaxXmitLinkSpeed )
            {
              v5 = ndisMSetReceiveFilterAttributes((__int64)NdisMiniportHandle, (__int64)v3);
              if ( v5 < 0 )
                break;
            }
          }
          if ( v3->Header.Revision >= 2u )
          {
            v17 = *((_BYTE *)NdisMiniportHandle + 32);
            if ( v17 <= 6u && (v17 != 6 || *((_BYTE *)NdisMiniportHandle + 33) < 0x14u) )
              goto LABEL_90;
            if ( v3->GeneralAttributes.XmitLinkSpeed )
            {
              if ( v3->GeneralAttributes.MaxRcvLinkSpeed )
              {
                v5 = ndisMSetNicSwitchAttributes(
                       (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                       (struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *)v3);
                if ( v5 < 0 )
                  break;
              }
            }
          }
        }
        if ( v3->Header.Revision < 3u )
          break;
        v18 = *((_BYTE *)NdisMiniportHandle + 32);
        if ( v18 > 6u || v18 == 6 && *((_BYTE *)NdisMiniportHandle + 33) >= 0x1Eu )
        {
          if ( !v3->GeneralAttributes.RcvLinkSpeed
            || !v3->Native_802_11_Attributes.WFDAttributes
            || (v5 = ndisMSetSriovAttributes(
                       (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                       (struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *)v3),
                v5 >= 0) )
          {
            if ( v3->HardwareAssistAttributes.HardwareQosCapabilities )
            {
              if ( v3->GeneralAttributes.PowerManagementCapabilities )
              {
                v5 = ndisMSetQosAttributes(
                       (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                       (struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *)v3);
                if ( v5 >= 0 )
                {
                  NdisTraceLoggingQosHardwareOffloads((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, v3);
                  NdisTraceLoggingQosConfigOffloads((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, v3);
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
      v5 = ndisMSetNDKAttributes((char)NdisMiniportHandle);
      if ( !v5 && TraceLoggingProviderEnabled(&hProvider, v31, v32) )
        NdisTraceLoggingNDKCapabilities((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, v3);
      break;
    case 0xC5u:
      v20 = ndisMSetPacketDirectAttributes(NdisMiniportHandle, v3);
LABEL_51:
      v5 = v20;
      break;
    default:
      goto LABEL_89;
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      1u,
      0x79u,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)NdisMiniportHandle,
      Type,
      v5);
  return v5;
}
