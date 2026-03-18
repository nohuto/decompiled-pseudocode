/*
 * XREFs of rimProcessHidInput @ 0x1C00FF234
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00FEE14 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     rimProcessInput @ 0x1C00FF314 (rimProcessInput.c)
 *     ApiSetProcessHidRawInput @ 0x1C0141254 (ApiSetProcessHidRawInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

NTSTATUS __fastcall rimProcessHidInput(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax

  if ( (*(_DWORD *)(a2 + 184) & 0x4000) == 0 && (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( *(_QWORD *)(a2 + 480) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( !*(_DWORD *)(a1 + 80) && (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( (*(_QWORD *)(a1 + 624) || *(_DWORD *)(a1 + 848))
    && (result = *(_DWORD *)(a2 + 184), (result & 0x1000) != 0)
    && (result & 0x20000) != 0
    && (result & 0x400000) == 0 )
  {
    if ( (result & 0x100000) == 0 )
    {
      *(_DWORD *)(a2 + 184) = result | 0x100000;
      result = ZwSetEvent(*(HANDLE *)(a1 + 376), 0LL);
    }
    *(_BYTE *)(a1 + 568) = 1;
  }
  else
  {
    rimProcessInput(a1, a2, *(_QWORD *)(*(_QWORD *)(a2 + 464) + 24LL), a2 + 256, 0);
    return ApiSetProcessHidRawInput(a2);
  }
  return result;
}
