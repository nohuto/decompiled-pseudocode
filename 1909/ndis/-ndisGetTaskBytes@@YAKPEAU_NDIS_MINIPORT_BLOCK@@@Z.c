/*
 * XREFs of ?ndisGetTaskBytes@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0068550
 * Callers:
 *     ndisPreTaskOffloadQuery @ 0x1C006EE08 (ndisPreTaskOffloadQuery.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 */

__int64 __fastcall ndisGetTaskBytes(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_OFFLOAD *Offload; // rbx
  char v2; // di
  int v3; // ecx
  unsigned int Encapsulation; // eax
  unsigned int v5; // ebx

  Offload = a1->Offload;
  v2 = (char)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      210,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)a1);
  v3 = Offload->TopCapabilities.LsoV1.IPv4.Encapsulation != 0 ? 64 : 28;
  if ( Offload->TopCapabilities.Checksum.IPv4Receive.Encapsulation
    || Offload->TopCapabilities.Checksum.IPv4Transmit.Encapsulation
    || Offload->TopCapabilities.Checksum.IPv6Receive.Encapsulation
    || Offload->TopCapabilities.Checksum.IPv6Transmit.Encapsulation )
  {
    v3 = Offload->TopCapabilities.LsoV1.IPv4.Encapsulation != 0 ? 100 : 64;
  }
  Encapsulation = Offload->TopCapabilities.IPsecV1.Supported.Encapsulation;
  v5 = v3 + 44;
  if ( !Encapsulation )
    v5 = v3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      211,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v2,
      v5);
  return v5;
}
