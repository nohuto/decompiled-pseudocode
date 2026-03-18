/*
 * XREFs of rimProcessCompleteFrame @ 0x1C00FED4C
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C00F8C64 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     rimDispatchCompleteFrame @ 0x1C00FE4B0 (rimDispatchCompleteFrame.c)
 *     rimQueueCompleteFrame @ 0x1C00FF7A4 (rimQueueCompleteFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

NTSTATUS __fastcall rimProcessCompleteFrame(__int64 a1, __int64 a2, LARGE_INTEGER *a3)
{
  int v6; // eax
  NTSTATUS result; // eax

  if ( (*(_DWORD *)(a2 + 184) & 0x100) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( (*(_QWORD *)(a1 + 624) || *(_DWORD *)(a1 + 848))
    && (v6 = *(_DWORD *)(a2 + 184), (v6 & 0x1000) != 0)
    && (v6 & 0x20000) != 0
    && (v6 & 0x400000) == 0 )
  {
    rimQueueCompleteFrame(a1, a2, a3);
    result = *(_DWORD *)(a2 + 184);
    if ( (result & 0x100000) == 0 )
    {
      *(_DWORD *)(a2 + 184) = result | 0x100000;
      return ZwSetEvent(*(HANDLE *)(a1 + 376), 0LL);
    }
  }
  else if ( *(_BYTE *)(a1 + 568) )
  {
    *(_BYTE *)(a1 + 568) = 0;
    return rimDispatchCompleteFrame(a1, a2, a3);
  }
  else
  {
    return rimQueueCompleteFrame(a1, a2, a3);
  }
  return result;
}
