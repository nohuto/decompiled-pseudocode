/*
 * XREFs of rimSetupPalmTelemetry @ 0x1C013D350
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C013DBB8 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0141E50 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1C015C6A4 (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
 */

void __fastcall rimSetupPalmTelemetry(__int64 a1)
{
  PalmTelemetry *v2; // rax
  int v3; // edx
  PalmTelemetry *v4; // rbx

  if ( !*(_QWORD *)(a1 + 856) )
  {
    v2 = (PalmTelemetry *)Win32AllocPoolZInit(0x3010uLL, 1986358098LL);
    v4 = v2;
    if ( v2 )
    {
      PalmTelemetry::_ResetTelemetryData(v2);
      *((_DWORD *)v4 + 4) = 0;
      *(_DWORD *)v4 = 0;
      *((_DWORD *)v4 + 1) = 0;
      *(_QWORD *)(a1 + 856) = v4;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v3, 1, 11, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids);
    }
  }
}
