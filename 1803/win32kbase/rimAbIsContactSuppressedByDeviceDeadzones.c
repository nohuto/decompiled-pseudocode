/*
 * XREFs of rimAbIsContactSuppressedByDeviceDeadzones @ 0x1C00E6688
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C00E72F4 (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1C0105E2C (-IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbIsContactSuppressedByDeviceDeadzones(__int64 a1, struct tagHPD_CONTACT *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rsi
  int v6; // edi
  RIMDeadzone **i; // rsi

  v2 = 0;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v5 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v5 + 456) )
  {
    v6 = 0;
    for ( i = (RIMDeadzone **)(v5 + 416); !*i || !(unsigned int)RIMDeadzone::IsInDeadzone(*i, a2); ++i )
    {
      if ( (unsigned int)++v6 >= 5 )
        return v2;
    }
    return 1;
  }
  return v2;
}
