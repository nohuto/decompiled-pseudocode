/*
 * XREFs of RIMHandleTTMDeviceArrival @ 0x1C00A49D8
 * Callers:
 *     rimDoRimDevChange @ 0x1C0055BCC (rimDoRimDevChange.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0058A18 (RimDeviceTypeToRimInputType.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0062540 (RawInputManagerDeviceObjectReference.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C011E9D0 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     WPP_RECORDER_SF_dqqdS @ 0x1C014B364 (WPP_RECORDER_SF_dqqdS.c)
 *     WPP_RECORDER_SF_qdSD @ 0x1C014B548 (WPP_RECORDER_SF_qdSD.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMHandleTTMDeviceArrival(__int64 a1)
{
  unsigned int v1; // esi
  int v3; // edi
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  unsigned __int8 v8; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // edx
  int v13; // r8d
  int v14; // r9d

  v1 = 0;
  if ( !gbTtmEnabled || *(_BYTE *)(a1 + 48) == 3 || (*(_DWORD *)(a1 + 200) & 0x40) != 0 )
  {
    v3 = 0;
  }
  else
  {
    v3 = RawInputManagerDeviceObjectReference(*(void **)(a1 + 32));
    if ( v3 >= 0 )
    {
      v8 = *(_BYTE *)(a1 + 48);
      if ( v8 != 3 )
        v1 = RimDeviceTypeToRimInputType(a1, v8);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqqdS(*(_QWORD *)(a1 + 216), v5, v6, v7);
      v3 = TtmNotifyDeviceArrival(2LL, a1, &gTTMDevCallbacks, v1);
      if ( v3 < 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qdSD(
            *(unsigned __int8 *)(a1 + 48),
            v12,
            v13,
            v14,
            a1 + 208,
            a1,
            *(_BYTE *)(a1 + 48),
            *(_QWORD *)(a1 + 216),
            v3);
        DbgPrintGDI(
          "rimttm:TtmNotifyDeviceArrival FAILED for pRimDev=%p type=%d ustrName=%ls! Status=%08x\n",
          (const void *)a1,
          *(unsigned __int8 *)(a1 + 48),
          *(const wchar_t **)(a1 + 216),
          v3);
        if ( v3 != -1073741768 )
          *(_DWORD *)(a1 + 1312) = 1;
        ObfDereferenceObject(*(PVOID *)(a1 + 32));
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D((_DWORD)gRimLog, 4, 1, 12, (__int64)&WPP_6878f1d2c442338edbb7ef469ac48284_Traceguids, v3);
  return (unsigned int)v3;
}
