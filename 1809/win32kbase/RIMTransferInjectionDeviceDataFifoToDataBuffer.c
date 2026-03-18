/*
 * XREFs of RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C011FD64
 * Callers:
 *     RIMOnPnpNotification @ 0x1C004FE90 (RIMOnPnpNotification.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0126BEC (rimProcessDeviceBufferAndStartRead.c)
 *     rimProcessInjectedDeviceBuffers @ 0x1C0127160 (rimProcessInjectedDeviceBuffers.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMTransferInjectionDeviceDataFifoToDataBuffer(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al
  __int64 result; // rax
  unsigned int v6; // r8d
  unsigned int v7; // r9d
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ecx
  __int64 v11; // rcx
  unsigned __int16 v12; // r9
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ecx

  if ( (*(_DWORD *)(a2 + 184) & 0x2000) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v4 = *(_BYTE *)(a2 + 48);
  if ( v4 )
  {
    if ( v4 != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    result = *(unsigned int *)(a2 + 624);
    if ( (unsigned int)result <= 0xA )
    {
      if ( !(_DWORD)result )
        return result;
    }
    else
    {
      LODWORD(result) = 10;
    }
    v13 = 10 - *(_DWORD *)(a2 + 620);
    if ( v13 >= (unsigned int)result )
      v13 = result;
    if ( v13 )
    {
      v14 = 0;
      do
      {
        ++v14;
        v15 = 3LL * ((*(_BYTE *)(a2 + 628) - *(_BYTE *)(a2 + 624) + 1) & 0xF);
        v16 = 3LL * *(unsigned int *)(a2 + 620);
        *(_QWORD *)(a2 + 4 * v16 + 500) = *(_QWORD *)(a2
                                                    + 12LL * ((*(_BYTE *)(a2 + 628) - *(_BYTE *)(a2 + 624) + 1) & 0xF)
                                                    + 632);
        *(_DWORD *)(a2 + 4 * v16 + 508) = *(_DWORD *)(a2 + 4 * v15 + 640);
        LODWORD(v16) = *(_DWORD *)(a2 + 620);
        --*(_DWORD *)(a2 + 624);
        v17 = v16 + 1;
        *(_DWORD *)(a2 + 620) = v17;
      }
      while ( v14 < v13 );
      *(_DWORD *)(a2 + 256) = 0;
      result = v17;
      v11 = 12LL * v17;
      goto LABEL_25;
    }
    v12 = 23;
  }
  else
  {
    result = *(unsigned int *)(a2 + 776);
    if ( (unsigned int)result <= 0xA )
    {
      if ( !(_DWORD)result )
        return result;
    }
    else
    {
      LODWORD(result) = 10;
    }
    v6 = 10 - *(_DWORD *)(a2 + 772);
    if ( v6 >= (unsigned int)result )
      v6 = result;
    if ( v6 )
    {
      v7 = 0;
      do
      {
        ++v7;
        v8 = 3LL * ((*(_BYTE *)(a2 + 780) - *(_BYTE *)(a2 + 776) + 1) & 0xF);
        v9 = 3LL * *(unsigned int *)(a2 + 772);
        *(_OWORD *)(a2 + 8 * v9 + 476) = *(_OWORD *)(a2
                                                   + 24LL * ((*(_BYTE *)(a2 + 780) - *(_BYTE *)(a2 + 776) + 1) & 0xF)
                                                   + 784);
        *(_QWORD *)(a2 + 8 * v9 + 492) = *(_QWORD *)(a2 + 8 * v8 + 800);
        LODWORD(v9) = *(_DWORD *)(a2 + 772);
        --*(_DWORD *)(a2 + 776);
        v10 = v9 + 1;
        *(_DWORD *)(a2 + 772) = v10;
      }
      while ( v7 < v6 );
      *(_DWORD *)(a2 + 256) = 0;
      result = v10;
      v11 = 24LL * v10;
LABEL_25:
      *(_QWORD *)(a2 + 264) = v11;
      return result;
    }
    v12 = 22;
  }
  return WPP_RECORDER_SF_q(gRimLog, 3u, 0x16u, v12, (__int64)&WPP_432d1bb01b1f3454cb02163d6984f489_Traceguids, a2);
}
