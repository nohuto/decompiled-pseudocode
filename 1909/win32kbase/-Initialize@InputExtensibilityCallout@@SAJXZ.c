/*
 * XREFs of ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1C00A9E4C
 * Callers:
 *     InitializeInputComponents @ 0x1C00A90D8 (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C00B1E80 (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InputExtensibilityCallout::Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx

  if ( gpInputExtensibilityCallout )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v3 = Win32AllocPoolZInit(0x2C8uLL, 1883524675LL);
  if ( v3 )
  {
    *v3 = 0LL;
    v3[2] = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
    v3[3] = 0LL;
    memset(v3 + 4, 0, 0x2A8uLL);
  }
  else
  {
    v3 = 0LL;
  }
  gpInputExtensibilityCallout = (InputExtensibilityCallout *)v3;
  if ( !v3 )
    InputExtensibilityCallout::UnInitialize();
  return v3 == 0LL ? 0xC0000017 : 0;
}
