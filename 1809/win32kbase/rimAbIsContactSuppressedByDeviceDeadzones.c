/*
 * XREFs of rimAbIsContactSuppressedByDeviceDeadzones @ 0x1C010FF6C
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0110BB0 (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1C012DB38 (-IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbIsContactSuppressedByDeviceDeadzones(__int64 a1, struct tagHPD_CONTACT *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rsi
  int v7; // edi
  RIMDeadzone **i; // rsi

  v3 = 0;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v6 + 456) )
  {
    v7 = 0;
    for ( i = (RIMDeadzone **)(v6 + 416); !*i || !(unsigned int)RIMDeadzone::IsInDeadzone(*i, a2); ++i )
    {
      if ( (unsigned int)++v7 >= 5 )
        return v3;
    }
    return 1;
  }
  return v3;
}
