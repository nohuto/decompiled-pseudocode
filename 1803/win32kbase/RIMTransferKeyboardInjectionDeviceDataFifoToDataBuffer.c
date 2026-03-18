/*
 * XREFs of RIMTransferKeyboardInjectionDeviceDataFifoToDataBuffer @ 0x1C00F5274
 * Callers:
 *     RIMOnPnpNotification @ 0x1C00E34B0 (RIMOnPnpNotification.c)
 *     rimProcessKeyboardInput @ 0x1C00FF620 (rimProcessKeyboardInput.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMTransferKeyboardInjectionDeviceDataFifoToDataBuffer(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  unsigned int v4; // edx
  _QWORD *v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 result; // rax

  if ( (*(_DWORD *)(a2 + 184) & 0x1000) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( *(_BYTE *)(a2 + 48) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v3 = *(_DWORD *)(a2 + 620);
  v4 = 10;
  if ( v3 > 0xA || (v4 = *(_DWORD *)(a2 + 620), v3) )
  {
    v5 = (_QWORD *)(a2 + 500);
    v6 = v4;
    do
    {
      v7 = 3LL * ((*(_BYTE *)(a2 + 624) - *(_BYTE *)(a2 + 620) + 1) & 0xF);
      *v5 = *(_QWORD *)(a2 + 12LL * ((*(_BYTE *)(a2 + 624) - *(_BYTE *)(a2 + 620) + 1) & 0xF) + 628);
      v5 = (_QWORD *)((char *)v5 + 12);
      *((_DWORD *)v5 - 1) = *(_DWORD *)(a2 + 4 * v7 + 636);
      --*(_DWORD *)(a2 + 620);
      --v6;
    }
    while ( v6 );
  }
  *(_DWORD *)(a2 + 256) = 0;
  result = v4;
  *(_QWORD *)(a2 + 264) = 12LL * v4;
  return result;
}
