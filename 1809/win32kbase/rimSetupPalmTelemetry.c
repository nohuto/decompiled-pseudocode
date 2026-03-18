/*
 * XREFs of rimSetupPalmTelemetry @ 0x1C0114BDC
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0115410 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0119644 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1C012F5EC (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
 */

void __fastcall rimSetupPalmTelemetry(__int64 a1)
{
  PalmTelemetry *v2; // rax
  PalmTelemetry *v3; // rbx

  if ( !*(_QWORD *)(a1 + 856) )
  {
    v2 = (PalmTelemetry *)Win32AllocPoolZInit(0x3010uLL, 0x76656B52u);
    v3 = v2;
    if ( v2 )
    {
      PalmTelemetry::_ResetTelemetryData(v2);
      *((_DWORD *)v3 + 4) = 0;
      *(_DWORD *)v3 = 0;
      *((_DWORD *)v3 + 1) = 0;
      *(_QWORD *)(a1 + 856) = v3;
    }
    else
    {
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0xBu, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids);
    }
  }
}
