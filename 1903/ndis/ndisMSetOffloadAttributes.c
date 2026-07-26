/*
 * XREFs of ndisMSetOffloadAttributes @ 0x1C00312F0
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C002F6B0 (NdisMSetMiniportAttributes.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisValidateOffloadCapability@@YAEPEAU_NDIS_OFFLOAD@@@Z @ 0x1C00316F0 (-ndisValidateOffloadCapability@@YAEPEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0031710 (-ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisValidateConnectionOffload@@YAEPEAU_NDIS_TCP_CONNECTION_OFFLOAD@@@Z @ 0x1C00AADB8 (-ndisValidateConnectionOffload@@YAEPEAU_NDIS_TCP_CONNECTION_OFFLOAD@@@Z.c)
 */

__int64 __fastcall ndisMSetOffloadAttributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        _WORD *a3,
        _WORD *a4,
        _WORD *a5)
{
  __int64 v6; // rsi
  size_t v8; // rbx
  int v9; // edx
  unsigned int Flags; // r14d
  unsigned int v11; // r15d
  unsigned __int16 v12; // ax
  size_t v13; // r8
  unsigned __int16 v14; // cx
  unsigned __int8 MajorNdisVersion; // al
  _NDIS_MINIPORT_OFFLOAD *Offload; // rax
  unsigned int v17; // ebx
  _NDIS_OFFLOAD *p_MiniportInitialConfig; // rcx
  __int128 v19; // xmm1
  _NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> v20; // xmm1
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  _NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rax
  _NDIS_OFFLOAD *p_MiniportHardwareCapabilities; // rcx
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  _NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  _NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed_type_IPv6> v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  _NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> v37; // xmm1
  __int128 v38; // xmm0
  __int64 v39; // rax
  _NDIS_MINIPORT_OFFLOAD *v40; // rax
  _NDIS_OFFLOAD *p_MiniportCurrentConfig; // rcx
  _NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed_type_IPv6> v42; // xmm1
  _NDIS_MINIPORT_OFFLOAD *v43; // rax
  _NDIS_MINIPORT_OFFLOAD *v44; // rax
  unsigned __int16 v46; // ax
  size_t v47; // r14
  size_t v48; // r8
  unsigned __int16 v49; // ax
  __int128 v50; // xmm0
  _NDIS_MINIPORT_OFFLOAD *v51; // rax
  _NDIS_MINIPORT_OFFLOAD *v52; // rax
  char v53; // [rsp+30h] [rbp-D0h]
  struct _NDIS_TCP_CONNECTION_OFFLOAD v55; // [rsp+48h] [rbp-B8h] BYREF
  struct _NDIS_TCP_CONNECTION_OFFLOAD v56; // [rsp+60h] [rbp-A0h] BYREF
  struct _NDIS_OFFLOAD v57; // [rsp+80h] [rbp-80h] BYREF
  struct _NDIS_OFFLOAD v58; // [rsp+160h] [rbp+60h] BYREF

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v53 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      13,
      10,
      (struct _GUID *)&WPP_0f86ec8ab8323576aba22cac554c0387_Traceguids,
      (char)a1,
      v53);
  }
  v8 = 216LL;
  memset(&v57, 0, sizeof(v57));
  memset(&v58, 0, sizeof(v58));
  Flags = 0;
  v11 = 0;
  memset(&v55, 0, sizeof(v55));
  memset(&v56, 0, sizeof(v56));
  if ( v6 && !a3 )
    goto LABEL_31;
  if ( a4 )
  {
    if ( !a5 )
      goto LABEL_31;
    v46 = a4[1];
    v47 = 20LL;
    v48 = v46;
    if ( v46 >= 0x14u )
      v48 = 20LL;
    memmove(&v55, a4, v48);
    v49 = a5[1];
    if ( v49 < 0x14u )
      v47 = v49;
    memmove(&v56, a5, v47);
    if ( !ndisValidateConnectionOffload(&v55) || !ndisValidateConnectionOffload(&v56) )
      goto LABEL_31;
    Flags = v55.Flags;
    v11 = v56.Flags;
  }
  if ( v6 )
  {
    v12 = *(_WORD *)(v6 + 2);
    v13 = v12;
    if ( v12 >= 0xD8u )
      v13 = 216LL;
    memmove(&v57, (const void *)v6, v13);
    v14 = a3[1];
    if ( v14 < 0xD8u )
      v8 = v14;
    memmove(&v58, a3, v8);
    if ( !ndisValidateOffloadCapability(&v57) || !ndisValidateOffloadCapability(&v58) )
      goto LABEL_31;
    if ( (a1->DeviceFlags & 2) != 0 )
    {
      v57.Flags &= 0xFFFFFFF9;
      v58.Flags &= 0xFFFFFFF9;
    }
    MajorNdisVersion = a1->MajorNdisVersion;
    if ( (MajorNdisVersion > 6u || MajorNdisVersion == 6 && a1->MinorNdisVersion)
      && *(_BYTE *)(v6 + 1) >= 2u
      && *(_DWORD *)(v6 + 112)
      && !a1->DriverHandle->MiniportDriverCharacteristics.DirectOidRequestHandler )
    {
LABEL_31:
      v17 = -1073741637;
      goto LABEL_28;
    }
  }
  Offload = a1->Offload;
  if ( Offload || (v17 = ndisMAllocateMiniportOffload(a1)) == 0 && (Offload = a1->Offload) != 0LL )
  {
    if ( v6 )
    {
      Offload->SupportsOffload = 1;
      v9 = 128;
      p_MiniportInitialConfig = &a1->Offload->MiniportInitialConfig;
      v19 = *(_OWORD *)((char *)&v57.Checksum.IPv4Receive + 4);
      *(_OWORD *)&p_MiniportInitialConfig->Header.Type = *(_OWORD *)&v57.Header.Type;
      *(_OWORD *)((char *)&p_MiniportInitialConfig->Checksum.IPv4Receive + 4) = v19;
      v20 = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v57.LsoV1.IPv4 + 12);
      *(_OWORD *)((char *)&p_MiniportInitialConfig->Checksum.IPv6Receive + 4) = *(_OWORD *)((char *)&v57.Checksum.IPv6Receive
                                                                                          + 4);
      *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_MiniportInitialConfig->LsoV1.IPv4 + 12) = v20;
      v21 = *(_OWORD *)&v57.LsoV2.IPv4.Encapsulation;
      *(_OWORD *)&p_MiniportInitialConfig->IPsecV1.Supported.IPv4Options = *(_OWORD *)&v57.IPsecV1.Supported.IPv4Options;
      *(_OWORD *)&p_MiniportInitialConfig->LsoV2.IPv4.Encapsulation = v21;
      *(_OWORD *)&p_MiniportInitialConfig->LsoV2.IPv6.MaxOffLoadSize = *(_OWORD *)&v57.LsoV2.IPv6.MaxOffLoadSize;
      p_MiniportInitialConfig = (_NDIS_OFFLOAD *)((char *)p_MiniportInitialConfig + 128);
      p_MiniportInitialConfig[-1].UdpSegmentation.IPv6 = *(_NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed_type_IPv6> *)&v57.IPsecV2.Encapsulation;
      v22 = *(_OWORD *)&v57.Rsc.IPv4.Enabled;
      *(_OWORD *)&p_MiniportInitialConfig->Header.Type = *(_OWORD *)&v57.IPsecV2.UdpEsp;
      *(_OWORD *)((char *)&p_MiniportInitialConfig->Checksum.IPv4Receive + 4) = v22;
      v23 = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)&v57.EncapsulationTypes;
      *(_OWORD *)((char *)&p_MiniportInitialConfig->Checksum.IPv6Receive + 4) = *(_OWORD *)&v57.EncapsulatedPacketTaskOffloadVxlan.MaxHeaderSizeSupported;
      v24 = *(_OWORD *)&v57.UdpSegmentation.IPv4.MaxOffLoadSize;
      v25 = *(_QWORD *)&v57.UdpSegmentation.IPv6.MinSegmentCount;
      *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_MiniportInitialConfig->LsoV1.IPv4 + 12) = v23;
      *(_OWORD *)&p_MiniportInitialConfig->IPsecV1.Supported.IPv4Options = v24;
      *(_QWORD *)&p_MiniportInitialConfig->LsoV2.IPv4.Encapsulation = v25;
      p_MiniportHardwareCapabilities = &a1->Offload->MiniportHardwareCapabilities;
      v27 = *(_OWORD *)((char *)&v58.Checksum.IPv4Receive + 4);
      *(_OWORD *)&p_MiniportHardwareCapabilities->Header.Type = *(_OWORD *)&v58.Header.Type;
      v28 = *(_OWORD *)((char *)&v58.Checksum.IPv6Receive + 4);
      *(_OWORD *)((char *)&p_MiniportHardwareCapabilities->Checksum.IPv4Receive + 4) = v27;
      v29 = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v58.LsoV1.IPv4 + 12);
      *(_OWORD *)((char *)&p_MiniportHardwareCapabilities->Checksum.IPv6Receive + 4) = v28;
      v30 = *(_OWORD *)&v58.IPsecV1.Supported.IPv4Options;
      *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_MiniportHardwareCapabilities->LsoV1.IPv4 + 12) = v29;
      v31 = *(_OWORD *)&v58.LsoV2.IPv4.Encapsulation;
      *(_OWORD *)&p_MiniportHardwareCapabilities->IPsecV1.Supported.IPv4Options = v30;
      v32 = *(_OWORD *)&v58.LsoV2.IPv6.MaxOffLoadSize;
      *(_OWORD *)&p_MiniportHardwareCapabilities->LsoV2.IPv4.Encapsulation = v31;
      v33 = *(_NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed_type_IPv6> *)&v58.IPsecV2.Encapsulation;
      *(_OWORD *)&p_MiniportHardwareCapabilities->LsoV2.IPv6.MaxOffLoadSize = v32;
      p_MiniportHardwareCapabilities = (_NDIS_OFFLOAD *)((char *)p_MiniportHardwareCapabilities + 128);
      v34 = *(_OWORD *)&v58.IPsecV2.UdpEsp;
      p_MiniportHardwareCapabilities[-1].UdpSegmentation.IPv6 = v33;
      v35 = *(_OWORD *)&v58.Rsc.IPv4.Enabled;
      *(_OWORD *)&p_MiniportHardwareCapabilities->Header.Type = v34;
      v36 = *(_OWORD *)&v58.EncapsulatedPacketTaskOffloadVxlan.MaxHeaderSizeSupported;
      *(_OWORD *)((char *)&p_MiniportHardwareCapabilities->Checksum.IPv4Receive + 4) = v35;
      v37 = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)&v58.EncapsulationTypes;
      *(_OWORD *)((char *)&p_MiniportHardwareCapabilities->Checksum.IPv6Receive + 4) = v36;
      v38 = *(_OWORD *)&v58.UdpSegmentation.IPv4.MaxOffLoadSize;
      v39 = *(_QWORD *)&v58.UdpSegmentation.IPv6.MinSegmentCount;
      *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_MiniportHardwareCapabilities->LsoV1.IPv4 + 12) = v37;
      *(_OWORD *)&p_MiniportHardwareCapabilities->IPsecV1.Supported.IPv4Options = v38;
      *(_QWORD *)&p_MiniportHardwareCapabilities->LsoV2.IPv4.Encapsulation = v39;
      v40 = a1->Offload;
      p_MiniportCurrentConfig = &v40->MiniportCurrentConfig;
      v40 = (_NDIS_MINIPORT_OFFLOAD *)((char *)v40 + 440);
      *(_OWORD *)&p_MiniportCurrentConfig->Header.Type = *(_OWORD *)&v40->SupportsOffload;
      *(_OWORD *)((char *)&p_MiniportCurrentConfig->Checksum.IPv4Receive + 4) = *(_OWORD *)((char *)&v40->MiniportCurrentConfig.Checksum.IPv4Transmit
                                                                                          + 4);
      *(_OWORD *)((char *)&p_MiniportCurrentConfig->Checksum.IPv6Receive + 4) = *(_OWORD *)((char *)&v40->MiniportCurrentConfig.Checksum.IPv6Transmit
                                                                                          + 4);
      *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_MiniportCurrentConfig->LsoV1.IPv4 + 12) = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)&v40->MiniportCurrentConfig.LsoV1.IPv4.MaxOffLoadSize;
      *(_OWORD *)&p_MiniportCurrentConfig->IPsecV1.Supported.IPv4Options = *(_OWORD *)&v40->MiniportCurrentConfig.IPsecV1.Supported.AhEspCombined;
      *(_OWORD *)&p_MiniportCurrentConfig->LsoV2.IPv4.Encapsulation = *(_OWORD *)&v40->MiniportCurrentConfig.IPsecV1.IPv4AH;
      *(_OWORD *)&p_MiniportCurrentConfig->LsoV2.IPv6.MaxOffLoadSize = *(_OWORD *)&v40->MiniportCurrentConfig.LsoV2.IPv4.MinSegmentCount;
      p_MiniportCurrentConfig = (_NDIS_OFFLOAD *)((char *)p_MiniportCurrentConfig + 128);
      v42 = *(_NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed_type_IPv6> *)((char *)&v40->MiniportCurrentConfig.LsoV2.IPv6 + 12);
      v40 = (_NDIS_MINIPORT_OFFLOAD *)((char *)v40 + 128);
      p_MiniportCurrentConfig[-1].UdpSegmentation.IPv6 = v42;
      *(_OWORD *)&p_MiniportCurrentConfig->Header.Type = *(_OWORD *)&v40->SupportsOffload;
      *(_OWORD *)((char *)&p_MiniportCurrentConfig->Checksum.IPv4Receive + 4) = *(_OWORD *)((char *)&v40->MiniportCurrentConfig.Checksum.IPv4Transmit
                                                                                          + 4);
      *(_OWORD *)((char *)&p_MiniportCurrentConfig->Checksum.IPv6Receive + 4) = *(_OWORD *)((char *)&v40->MiniportCurrentConfig.Checksum.IPv6Transmit
                                                                                          + 4);
      *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_MiniportCurrentConfig->LsoV1.IPv4 + 12) = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)&v40->MiniportCurrentConfig.LsoV1.IPv4.MaxOffLoadSize;
      *(_OWORD *)&p_MiniportCurrentConfig->IPsecV1.Supported.IPv4Options = *(_OWORD *)&v40->MiniportCurrentConfig.IPsecV1.Supported.AhEspCombined;
      *(_QWORD *)&p_MiniportCurrentConfig->LsoV2.IPv4.Encapsulation = *(_QWORD *)&v40->MiniportCurrentConfig.IPsecV1.IPv4AH;
      v43 = a1->Offload;
      v43->MiniportSetEncapsulation.Header = (_NDIS_OBJECT_HEADER)1835432;
      v43->MiniportSetEncapsulation.IPv4.Enabled = 2;
      v43->MiniportSetEncapsulation.IPv6.Enabled = 2;
      v44 = a1->Offload;
      v44->TopSetEncapsulation.Header = (_NDIS_OBJECT_HEADER)1835432;
      v44->TopSetEncapsulation.IPv4.Enabled = 2;
      v44->TopSetEncapsulation.IPv6.Enabled = 2;
    }
    if ( a4 )
    {
      v50 = *(_OWORD *)&v55.Header.Type;
      a1->Offload->SupportsTcpConnectionOffload = 1;
      v51 = a1->Offload;
      *(_OWORD *)&v51->MiniportTcpConnectionOffloadCurrentConfig.Header.Type = v50;
      v51->MiniportTcpConnectionOffloadCurrentConfig.Flags = Flags;
      v52 = a1->Offload;
      *(_OWORD *)&v52->MiniportHwTcpConnectionOffloadCapabilities.Header.Type = *(_OWORD *)&v56.Header.Type;
      v52->MiniportHwTcpConnectionOffloadCapabilities.Flags = v11;
    }
    v17 = 0;
  }
LABEL_28:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      13,
      11,
      (struct _GUID *)&WPP_0f86ec8ab8323576aba22cac554c0387_Traceguids,
      (char)a1,
      v17);
  }
  return v17;
}
