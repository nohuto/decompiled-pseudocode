/*
 * XREFs of rimSetupPalmTelemetry @ 0x1C00E9FE4
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C00EA954 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1C0108040 (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
 */

void __fastcall rimSetupPalmTelemetry(__int64 a1)
{
  PalmTelemetry *v2; // rax
  PalmTelemetry *v3; // rbx

  if ( !*(_QWORD *)(a1 + 840) )
  {
    v2 = (PalmTelemetry *)Win32AllocPoolZInit(0x3010uLL, 0x76656B52u);
    v3 = v2;
    if ( v2 )
    {
      PalmTelemetry::_ResetTelemetryData(v2);
      *((_DWORD *)v3 + 4) = 0;
      *(_DWORD *)v3 = 0;
      *((_DWORD *)v3 + 1) = 0;
      *(_QWORD *)(a1 + 840) = v3;
    }
    else
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0xBu,
        (__int64)&WPP_d24afaddbe1632fa9c89c4aae49a04f3_Traceguids);
    }
  }
}
