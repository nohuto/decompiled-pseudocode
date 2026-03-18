/*
 * XREFs of rimProcessHidInput @ 0x1C012704C
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0126BEC (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     rimStackAttachAndProcessInput @ 0x1C0127974 (rimStackAttachAndProcessInput.c)
 *     ApiSetProcessHidRawInput @ 0x1C01648E0 (ApiSetProcessHidRawInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

NTSTATUS __fastcall rimProcessHidInput(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (*(_DWORD *)(a2 + 184) & 0x4000) == 0 && (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *(_QWORD *)(a2 + 480) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !*(_DWORD *)(a1 + 88) && (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (*(_QWORD *)(a1 + 640) || *(_DWORD *)(a1 + 864))
    && (result = *(_DWORD *)(a2 + 184), (result & 0x2000) != 0)
    && (result & 0x20000) != 0
    && (result & 0x400000) == 0 )
  {
    if ( (result & 0x100000) == 0 )
    {
      *(_DWORD *)(a2 + 184) = result | 0x100000;
      result = ZwSetEvent(*(HANDLE *)(a1 + 384), 0LL);
    }
    *(_BYTE *)(a1 + 584) = 1;
  }
  else
  {
    result = rimStackAttachAndProcessInput(a1, a2, *(_QWORD *)(*(_QWORD *)(a2 + 464) + 24LL), (int)a2 + 256, 0);
    if ( (*(_DWORD *)(a2 + 184) & 0x8000) != 0 )
    {
      ApiSetProcessHidRawInput(a2);
      return (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToService(
                             (__int64)&Feature_InputVirtualization__private_propertyCache,
                             0xF89686u,
                             (__int64)&unk_1C01933C8,
                             0,
                             3u);
    }
  }
  return result;
}
