/*
 * XREFs of RIMProcessAnyPointerDeviceInput @ 0x1C00FFE40
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00FEE14 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     rimIsCSWakeablePointerDevice @ 0x1C00F16EC (rimIsCSWakeablePointerDevice.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0100C9C (rimDoProcessAnyPointerDeviceInput.c)
 *     ApiSetIsPTPInputEnabled @ 0x1C0140E88 (ApiSetIsPTPInputEnabled.c)
 *     ApiSetProcessHidRawInput @ 0x1C0141254 (ApiSetProcessHidRawInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMProcessAnyPointerDeviceInput(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned int PenArbitrationType; // ebx
  __int64 v7; // rdi
  int HasMonitor; // eax
  unsigned __int16 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx

  result = (__int64)gpsi;
  v5 = *(unsigned int *)gpsi;
  if ( (v5 & 0x2000) == 0 )
  {
    PenArbitrationType = 0;
    if ( (v5 & 0x4000) == 0
      || (result = *(unsigned int *)(a2 + 200), (result & 0x80u) != 0LL)
      && (result = rimIsCSWakeablePointerDevice(a2, v5), (_DWORD)result) )
    {
      result = (__int64)gpsi;
      if ( (*(_DWORD *)gpsi & 0x2000) == 0 )
      {
        v7 = *(_QWORD *)(a2 + 480);
        if ( (int)IsEnsurePointerDeviceHasMonitorSupported() < 0 )
          HasMonitor = 0;
        else
          HasMonitor = EnsurePointerDeviceHasMonitor(v7);
        if ( HasMonitor )
        {
          if ( *(_DWORD *)(v7 + 24) != 7 || (unsigned int)ApiSetIsPTPInputEnabled() )
          {
            if ( (unsigned int)(*(_DWORD *)(v7 + 24) - 1) > 3 || RawInputManagerObject::bTouchInputAllowed )
            {
              if ( *(_DWORD *)(v7 + 156) )
              {
                if ( !*(_DWORD *)(a1 + 448) )
                {
                  if ( (int)IsGetPenArbitrationTypeSupported() >= 0 )
                    PenArbitrationType = GetPenArbitrationType();
                  if ( PenArbitrationType < 4 )
                    gDeviceArbitrationType = PenArbitrationType;
                  if ( gDeviceArbitrationType >= 4u )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
                }
                rimDoProcessAnyPointerDeviceInput(a1, a2);
                return ApiSetProcessHidRawInput(a2);
              }
              v9 = 13;
            }
            else
            {
              v9 = 12;
            }
          }
          else
          {
            v9 = 11;
          }
        }
        else
        {
          v9 = 10;
        }
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x15u,
          v9,
          (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids);
        return ApiSetProcessHidRawInput(a2);
      }
    }
  }
  return result;
}
