/*
 * XREFs of RIMHandleTTMDeviceArrival @ 0x1C00F6718
 * Callers:
 *     rimDoRimDevChange @ 0x1C00FC564 (rimDoRimDevChange.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C000F238 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     DbgPrintRIMAlways @ 0x1C00C3410 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_dqqdS @ 0x1C00F6E78 (WPP_RECORDER_SF_dqqdS.c)
 *     WPP_RECORDER_SF_qdSD @ 0x1C00F7230 (WPP_RECORDER_SF_qdSD.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMHandleTTMDeviceArrival(__int64 a1)
{
  unsigned int v1; // esi
  NTSTATUS v3; // edi
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  unsigned __int8 v7; // al
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  __int64 v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+30h] [rbp-28h]

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
      v7 = *(_BYTE *)(a1 + 48);
      if ( v7 != 3 )
      {
        v8 = RimDeviceTypeToRimInputType(a1, v7);
        v1 = v8 | 0x80000000;
        if ( (*(_DWORD *)(a1 + 184) & 0x1000) == 0 )
          v1 = v8;
      }
      v16 = a1;
      WPP_RECORDER_SF_dqqdS(WPP_GLOBAL_Control->DeviceExtension, v4, v5, v6);
      v3 = TtmNotifyDeviceArrival(2LL, a1, &gTTMDevCallbacks, v1);
      if ( v3 < 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
        WPP_RECORDER_SF_qdSD(
          WPP_GLOBAL_Control->DeviceExtension,
          v11,
          v12,
          v13,
          a1 + 208,
          a1,
          *(_BYTE *)(a1 + 48),
          *(_QWORD *)(a1 + 216),
          v3);
        DbgPrintRIMAlways(
          "rimttm:TtmNotifyDeviceArrival FAILED for pRimDev=%p type=%d ustrName=%ls! Status=%08x\n",
          (const void *)a1,
          *(unsigned __int8 *)(a1 + 48),
          *(const wchar_t **)(a1 + 216),
          v3);
        if ( v3 != -1073741768 )
          *(_DWORD *)(a1 + 824) = 1;
        ObfDereferenceObject(*(PVOID *)(a1 + 32));
      }
    }
  }
  LODWORD(v15) = v3;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0xCu,
    (__int64)&WPP_6f93d23ab5493b07c801fc1105033033_Traceguids,
    v15,
    v16);
  return (unsigned int)v3;
}
