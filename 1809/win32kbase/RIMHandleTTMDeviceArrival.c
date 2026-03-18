/*
 * XREFs of RIMHandleTTMDeviceArrival @ 0x1C00924DC
 * Callers:
 *     rimDoRimDevChange @ 0x1C004E4B0 (rimDoRimDevChange.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0051550 (RimDeviceTypeToRimInputType.c)
 *     DbgPrintRIMAlways @ 0x1C00F9910 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_dqqdS @ 0x1C01218B8 (WPP_RECORDER_SF_dqqdS.c)
 *     WPP_RECORDER_SF_qdSD @ 0x1C0121C84 (WPP_RECORDER_SF_qdSD.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall RIMHandleTTMDeviceArrival(__int64 a1)
{
  unsigned int v1; // esi
  NTSTATUS v3; // edi
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  unsigned __int8 v8; // al
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+30h] [rbp-28h]

  v1 = 0;
  if ( !gbTtmEnabled || *(_BYTE *)(a1 + 48) == 3 || (*(_DWORD *)(a1 + 200) & 0x40) != 0 )
  {
    v3 = 0;
  }
  else
  {
    v3 = ObReferenceObjectByPointer(*(PVOID *)(a1 + 32), 3u, ExRawInputManagerObjectType, 0);
    if ( v3 >= 0 )
    {
      v8 = *(_BYTE *)(a1 + 48);
      if ( v8 != 3 )
        v1 = RimDeviceTypeToRimInputType(a1, v8);
      v13 = a1;
      WPP_RECORDER_SF_dqqdS(*(_QWORD *)(a1 + 216), v5, v6, v7);
      v3 = TtmNotifyDeviceArrival(2LL, a1, &gTTMDevCallbacks, v1);
      if ( v3 < 0 )
      {
        MicrosoftTelemetryAssertTriggeredMsgKM("rimttm:TtmNotifyDeviceArrival FAILED");
        WPP_RECORDER_SF_qdSD(
          *(unsigned __int8 *)(a1 + 48),
          v9,
          v10,
          v11,
          a1 + 208,
          a1,
          *(_BYTE *)(a1 + 48),
          *(_QWORD *)(a1 + 216),
          v3);
        DbgPrintRIMAlways("rimttm:TtmNotifyDeviceArrival FAILED for pRimDev=%p type=%d ustrName=%ls! Status=%08x\n");
        if ( v3 != -1073741768 )
          *(_DWORD *)(a1 + 1168) = 1;
        ObfDereferenceObject(*(PVOID *)(a1 + 32));
      }
    }
  }
  LODWORD(v12) = v3;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0xCu, (__int64)&WPP_6348e708fd723b9140a504851f6d1be1_Traceguids, v12, v13);
  return (unsigned int)v3;
}
