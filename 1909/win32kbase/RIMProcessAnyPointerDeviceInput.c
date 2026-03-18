/*
 * XREFs of RIMProcessAnyPointerDeviceInput @ 0x1C0152D34
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01513BC (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     IsPTPInputEnabled @ 0x1C01075DC (IsPTPInputEnabled.c)
 *     rimIsCSWakeablePointerDevice @ 0x1C0145438 (rimIsCSWakeablePointerDevice.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C0145674 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0153BFC (rimDoProcessAnyPointerDeviceInput.c)
 *     ApiSetEnsurePointerDeviceHasMonitor @ 0x1C019C868 (ApiSetEnsurePointerDeviceHasMonitor.c)
 *     ApiSetGetPenArbitrationType @ 0x1C019D140 (ApiSetGetPenArbitrationType.c)
 *     ApiSetProcessHidRawInput @ 0x1C019E1C8 (ApiSetProcessHidRawInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall RIMProcessAnyPointerDeviceInput(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  int v7; // edx
  char result; // al
  int v9; // edx
  int v10; // r9d
  int v11; // r8d
  unsigned int PenArbitrationType; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8

  v5 = *(unsigned int *)gpsi;
  if ( (v5 & 0x2000) != 0
    || (v5 & 0x4000) != 0
    && ((*(_DWORD *)(a2 + 200) & 0x80u) == 0 || !(unsigned int)rimIsCSWakeablePointerDevice(a2, v5, a3))
    || (*(_DWORD *)gpsi & 0x2000) != 0 )
  {
    return InputTraceLogging::RIM::DropInput(a2);
  }
  v6 = *(_QWORD *)(a2 + 480);
  if ( (unsigned int)ApiSetEnsurePointerDeviceHasMonitor(v6) )
  {
    v9 = *(_DWORD *)(v6 + 24);
    if ( v9 != 7 || (unsigned int)IsPTPInputEnabled() )
    {
      if ( (unsigned int)(v9 - 1) > 3 || RawInputManagerObject::bTouchInputAllowed )
      {
        if ( *(_DWORD *)(v6 + 156) )
        {
          if ( !*(_DWORD *)(a1 + 464) )
          {
            PenArbitrationType = ApiSetGetPenArbitrationType();
            if ( PenArbitrationType < 4 )
              gDeviceArbitrationType = PenArbitrationType;
            if ( gDeviceArbitrationType >= 4u )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
          }
          result = rimDoProcessAnyPointerDeviceInput(a1, a2);
          goto LABEL_30;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 4;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 13, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids);
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 12, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = v9 + 4;
      v11 = v9 - 6;
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v9, v11, v10, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 10, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids);
  }
  result = InputTraceLogging::RIM::DropInput(a2);
LABEL_30:
  if ( (*(_DWORD *)(a2 + 184) & 0x8000) != 0 )
    return ApiSetProcessHidRawInput(a2);
  return result;
}
