/*
 * XREFs of rimProcessInjectedDeviceBuffers @ 0x1C0127160
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0126BEC (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C011FD64 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     ?PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0125E94 (-PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall rimProcessInjectedDeviceBuffers(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rbx
  _QWORD *v11; // rcx

  v3 = a2;
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  LOBYTE(v5) = *(_BYTE *)(v3 + 48);
  v6 = 0LL;
  LOBYTE(a2) = 1;
  if ( !(_BYTE)v5 && *(_DWORD *)(v3 + 776) || (_BYTE)v5 == 1 && *(_DWORD *)(v3 + 624) )
  {
    if ( !*(_BYTE *)(a1 + 584) )
    {
      if ( (_BYTE)v5 )
      {
        if ( *(_DWORD *)(v3 + 620) )
LABEL_12:
          MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3);
      }
      else if ( *(_DWORD *)(v3 + 772) )
      {
        goto LABEL_12;
      }
      RIMTransferInjectionDeviceDataFifoToDataBuffer(v6, v3, a3);
      InputTraceLogging::RIM::PauseDevice((const struct RIMDEV *)v3);
      *(_DWORD *)(v3 + 184) |= 0x200u;
      v10 = (_QWORD *)(v3 + 104);
      if ( (_QWORD *)*v10 != v10 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
      v5 = a1 + 592;
      v11 = *(_QWORD **)(a1 + 600);
      if ( *v11 != a1 + 592 )
        __fastfail(3u);
      *v10 = v5;
      v10[1] = v11;
      *v11 = v10;
      *(_QWORD *)(a1 + 600) = v10;
      return v5;
    }
    if ( (_BYTE)v5 )
    {
      if ( !*(_DWORD *)(v3 + 620) )
        *(_DWORD *)(v3 + 624) = 0;
    }
    else if ( !*(_DWORD *)(v3 + 772) )
    {
      *(_DWORD *)(v3 + 776) = 0;
    }
  }
  return v5;
}
