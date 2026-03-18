/*
 * XREFs of ?Initialize@CForegroundInfo@@SAJXZ @ 0x1C0060924
 * Callers:
 *     InitializeInputComponents @ 0x1C0060348 (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CForegroundInfo::Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  CInputDest *v3; // rax
  CInputDest *v4; // rbx

  if ( gpForegroundInfo )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v3 = (CInputDest *)Win32AllocPoolZInit(0x80uLL, 1919964227LL);
  v4 = v3;
  if ( v3 )
  {
    memset(v3, 0, 0x78uLL);
    *((_BYTE *)v4 + 120) = 0;
  }
  else
  {
    v4 = 0LL;
  }
  gpForegroundInfo = v4;
  return v4 == 0LL ? 0xC0000017 : 0;
}
