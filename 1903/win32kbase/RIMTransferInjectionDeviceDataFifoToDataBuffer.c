/*
 * XREFs of RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C014B948
 * Callers:
 *     RIMOnPnpNotification @ 0x1C006B250 (RIMOnPnpNotification.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01535B4 (rimProcessDeviceBufferAndStartRead.c)
 *     rimProcessInjectedDeviceBuffers @ 0x1C0153C7C (rimProcessInjectedDeviceBuffers.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0038944 (WPP_RECORDER_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMTransferInjectionDeviceDataFifoToDataBuffer(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char v4; // al
  __int64 result; // rax
  unsigned int v6; // r8d
  unsigned int v7; // r9d
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ecx
  __int64 v11; // rcx
  int v12; // r9d
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ecx

  v3 = a2;
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v4 = *(_BYTE *)(v3 + 48);
  if ( !v4 )
  {
    result = *(unsigned int *)(v3 + 900);
    if ( (unsigned int)result <= 0x10 )
    {
      if ( !(_DWORD)result )
        return result;
    }
    else
    {
      LODWORD(result) = 16;
    }
    v6 = 16 - *(_DWORD *)(v3 + 896);
    if ( v6 >= (unsigned int)result )
      v6 = result;
    if ( v6 )
    {
      v7 = 0;
      do
      {
        ++v7;
        v8 = 3LL * ((*(_BYTE *)(v3 + 904) - *(_BYTE *)(v3 + 900) + 1) & 0xF);
        v9 = 3LL * *(unsigned int *)(v3 + 896);
        *(_OWORD *)(v3 + 8 * v9 + 476) = *(_OWORD *)(v3
                                                   + 24LL * ((*(_BYTE *)(v3 + 904) - *(_BYTE *)(v3 + 900) + 1) & 0xF)
                                                   + 908);
        *(_QWORD *)(v3 + 8 * v9 + 492) = *(_QWORD *)(v3 + 8 * v8 + 924);
        LODWORD(v9) = *(_DWORD *)(v3 + 896);
        --*(_DWORD *)(v3 + 900);
        v10 = v9 + 1;
        *(_DWORD *)(v3 + 896) = v10;
      }
      while ( v7 < v6 );
      *(_DWORD *)(v3 + 256) = 0;
      result = v10;
      v11 = 24LL * v10;
LABEL_26:
      *(_QWORD *)(v3 + 264) = v11;
      return result;
    }
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    v12 = 60;
    goto LABEL_29;
  }
  if ( v4 != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  result = *(unsigned int *)(v3 + 700);
  if ( (unsigned int)result <= 0x10 )
  {
    if ( !(_DWORD)result )
      return result;
  }
  else
  {
    LODWORD(result) = 16;
  }
  v13 = 16 - *(_DWORD *)(v3 + 696);
  if ( v13 >= (unsigned int)result )
    v13 = result;
  if ( v13 )
  {
    v14 = 0;
    do
    {
      ++v14;
      v15 = 3 * (((*(_BYTE *)(v3 + 704) - *(_BYTE *)(v3 + 700) + 1) & 0xF) + 59LL);
      v16 = 3 * (*(unsigned int *)(v3 + 696) + 42LL);
      *(_QWORD *)(v3 + 4 * v16) = *(_QWORD *)(v3
                                            + 12 * (((*(_BYTE *)(v3 + 704) - *(_BYTE *)(v3 + 700) + 1) & 0xF) + 59LL));
      *(_DWORD *)(v3 + 4 * v16 + 8) = *(_DWORD *)(v3 + 4 * v15 + 8);
      LODWORD(v16) = *(_DWORD *)(v3 + 696);
      --*(_DWORD *)(v3 + 700);
      v17 = v16 + 1;
      *(_DWORD *)(v3 + 696) = v17;
    }
    while ( v14 < v13 );
    *(_DWORD *)(v3 + 256) = 0;
    result = v17;
    v11 = 12LL * v17;
    goto LABEL_26;
  }
  result = (__int64)&WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = 61;
LABEL_29:
    LOBYTE(a2) = 4;
    return WPP_RECORDER_SF_q((_DWORD)gRimLog, a2, 1, v12, (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids, v3);
  }
  return result;
}
