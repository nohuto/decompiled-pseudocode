/*
 * XREFs of rimProcessInjectedDeviceBuffers @ 0x1C0153C7C
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01535B4 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C0147CE4 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C014B948 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     ?PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0152564 (-PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall rimProcessInjectedDeviceBuffers(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // rbx
  __int64 **v10; // rcx

  v4 = a1;
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  LOBYTE(v5) = *(_BYTE *)(a2 + 48);
  LOBYTE(a1) = 1;
  if ( !(_BYTE)v5 && *(_DWORD *)(a2 + 900) || (_BYTE)v5 == 1 && *(_DWORD *)(a2 + 700) )
  {
    if ( !*(_BYTE *)(v4 + 584) )
    {
      if ( (_BYTE)v5 )
      {
        if ( *(_DWORD *)(a2 + 696) )
LABEL_12:
          MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
      }
      else if ( *(_DWORD *)(a2 + 896) )
      {
        goto LABEL_12;
      }
      RIMTransferInjectionDeviceDataFifoToDataBuffer(a1, a2, a3);
      InputTraceLogging::RIM::PauseDevice((const struct RIMDEV *)a2);
      *(_DWORD *)(a2 + 184) |= 0x200u;
      v9 = (__int64 *)(a2 + 104);
      if ( (__int64 *)*v9 != v9 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
      v5 = v4 + 592;
      v10 = *(__int64 ***)(v4 + 600);
      if ( *v10 != (__int64 *)(v4 + 592) )
        __fastfail(3u);
      *v9 = v5;
      v9[1] = (__int64)v10;
      *v10 = v9;
      *(_QWORD *)(v4 + 600) = v9;
      return v5;
    }
    if ( (_BYTE)v5 )
    {
      if ( !*(_DWORD *)(a2 + 696) )
      {
        LOBYTE(v5) = InputTraceLogging::RIM::DropInput(a2);
        *(_DWORD *)(a2 + 700) = 0;
      }
    }
    else if ( !*(_DWORD *)(a2 + 896) )
    {
      LOBYTE(v5) = InputTraceLogging::RIM::DropInput(a2);
      *(_DWORD *)(a2 + 900) = 0;
    }
  }
  return v5;
}
