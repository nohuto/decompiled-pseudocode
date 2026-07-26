/*
 * XREFs of ?ndisWmiXlateNdisOffloadToWmiOffload@@YAXPEAU_NDIS_OFFLOAD@@@Z @ 0x1C00A7A18
 * Callers:
 *     ndisWmiExecuteMethod @ 0x1C001DEEC (ndisWmiExecuteMethod.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 */

void __fastcall ndisWmiXlateNdisOffloadToWmiOffload(struct _NDIS_OFFLOAD *a1)
{
  int v2; // ecx
  _NDIS_TCP_IP_CHECKSUM_OFFLOAD::<unnamed_type_IPv4Receive> *p_IPv4Receive; // rdx
  int v4; // eax
  _NDIS_TCP_LARGE_SEND_OFFLOAD_V1 *p_LsoV1; // rdx
  int v6; // ecx
  unsigned int v7; // eax
  __int128 v8; // [rsp+0h] [rbp-99h]
  __int128 v9; // [rsp+10h] [rbp-89h]
  __int128 v10; // [rsp+20h] [rbp-79h]
  __int128 v11; // [rsp+30h] [rbp-69h]
  __int128 v12; // [rsp+40h] [rbp-59h]
  __int128 v13; // [rsp+50h] [rbp-49h]
  __int128 v14; // [rsp+60h] [rbp-39h]

  v8 = *(_OWORD *)&a1->Header.Type;
  v9 = *(_OWORD *)((char *)&a1->Checksum.IPv4Receive + 4);
  v10 = *(_OWORD *)((char *)&a1->Checksum.IPv6Receive + 4);
  v11 = *(__int128 *)((char *)&a1->LsoV1.IPv4 + 12);
  v12 = *(_OWORD *)&a1->IPsecV1.Supported.IPv4Options;
  v13 = *(_OWORD *)&a1->LsoV2.IPv4.Encapsulation;
  v14 = *(_OWORD *)&a1->LsoV2.IPv6.MaxOffLoadSize;
  v2 = 2;
  p_IPv4Receive = &a1->Checksum.IPv4Receive;
  a1->Header = (_NDIS_OBJECT_HEADER)v8;
  a1->Header.Size = 296;
  a1->Checksum.IPv4Transmit.Encapsulation = DWORD1(v8);
  *((_DWORD *)&a1->Checksum.IPv4Transmit + 1) = BYTE8(v8) & 3;
  do
  {
    v4 = DWORD2(v8) >> v2;
    v2 += 2;
    p_IPv4Receive->Encapsulation = v4 & 3;
    p_IPv4Receive = (_NDIS_TCP_IP_CHECKSUM_OFFLOAD::<unnamed_type_IPv4Receive> *)((char *)p_IPv4Receive + 4);
  }
  while ( v2 < 10 );
  p_LsoV1 = &a1->LsoV1;
  a1->Checksum.IPv6Receive.Encapsulation = HIDWORD(v8);
  v6 = 2;
  *((_DWORD *)&a1->Checksum.IPv6Receive + 1) = v9 & 3;
  do
  {
    v7 = (unsigned int)v9 >> v6;
    v6 += 2;
    p_LsoV1->IPv4.Encapsulation = v7 & 3;
    p_LsoV1 = (_NDIS_TCP_LARGE_SEND_OFFLOAD_V1 *)((char *)p_LsoV1 + 4);
  }
  while ( v6 < 10 );
  a1->IPsecV1.Supported.Encapsulation = DWORD1(v9);
  a1->IPsecV1.Supported.AhEspCombined = BYTE8(v9) & 3;
  a1->IPsecV1.Supported.TransportTunnelCombined = (DWORD2(v9) >> 2) & 3;
  a1->IPsecV1.Supported.IPv4Options = (DWORD2(v9) >> 4) & 3;
  a1->IPsecV1.IPv4AH = (_NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4AH>)HIDWORD(v9);
  a1->IPsecV1.Supported.Flags = BYTE8(v9) >> 6;
  a1->IPsecV1.IPv4ESP = (_NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4ESP>)(v10 & 3);
  a1->LsoV2.IPv4.Encapsulation = ((unsigned int)v10 >> 2) & 3;
  a1->LsoV2.IPv4.MaxOffLoadSize = ((unsigned int)v10 >> 4) & 3;
  *(_QWORD *)&a1->LsoV2.IPv6.Encapsulation = *(_QWORD *)((char *)&v10 + 4);
  a1->LsoV2.IPv6.MinSegmentCount = HIDWORD(v10);
  a1->LsoV2.IPv4.MinSegmentCount = (unsigned __int8)v10 >> 6;
  *((_DWORD *)&a1->LsoV2.IPv6 + 3) = v11 & 3;
  *(_QWORD *)&a1->IPsecV2.Encapsulation = *(_QWORD *)((char *)&v11 + 4);
  *(_DWORD *)&a1->IPsecV2.Esp = HIDWORD(v11);
  *(_QWORD *)&a1->IPsecV2.TransportTunnelCombined = v12;
  a1->Flags = ((unsigned int)v11 >> 2) & 3;
  a1->IPsecV2.AuthenticationAlgorithms = BYTE8(v12) & 3;
  a1->IPsecV2.EncryptionAlgorithms = (DWORD2(v12) >> 2) & 3;
  a1->IPsecV2.SaOffloadCapacity = (DWORD2(v12) >> 4) & 3;
  *(_DWORD *)&a1->Rsc.IPv4.Enabled = BYTE8(v12) >> 6;
  *(_DWORD *)&a1->EncapsulatedPacketTaskOffloadGre = (DWORD2(v12) >> 8) & 3;
  a1->EncapsulatedPacketTaskOffloadGre.MaxHeaderSizeSupported = (DWORD2(v12) >> 10) & 3;
  *(_DWORD *)&a1->EncapsulatedPacketTaskOffloadVxlan = BYTE12(v12) & 3;
  a1->EncapsulatedPacketTaskOffloadVxlan.MaxHeaderSizeSupported = (HIDWORD(v12) >> 2) & 3;
  a1->EncapsulatedPacketTaskOffloadVxlan.EncapsulationProtocolInfo.Value = (HIDWORD(v12) >> 4) & 3;
  a1->EncapsulatedPacketTaskOffloadVxlan.Reserved1 = BYTE12(v12) >> 6;
  a1->EncapsulatedPacketTaskOffloadVxlan.Reserved2 = (HIDWORD(v12) >> 8) & 3;
  *(_DWORD *)&a1->EncapsulationTypes = (HIDWORD(v12) >> 10) & 3;
  a1->Rfc6877Xlat.XlatOffload = (HIDWORD(v12) >> 12) & 3;
  *(_OWORD *)&a1->UdpSegmentation.IPv4.Encapsulation = v13;
  a1->UdpSegmentation.IPv6.MaxOffLoadSize = v14;
  a1->Rfc6877Xlat.Flags = WORD6(v12) >> 14;
  a1->UdpSegmentation.IPv6.MinSegmentCount = DWORD1(v14);
  *((_DWORD *)&a1->UdpSegmentation.IPv6 + 3) = BYTE8(v14) & 3;
  a1[1].Header = (_NDIS_OBJECT_HEADER)((DWORD2(v14) >> 2) & 3);
  a1[1].Checksum.IPv4Transmit.Encapsulation = HIDWORD(v14);
}
