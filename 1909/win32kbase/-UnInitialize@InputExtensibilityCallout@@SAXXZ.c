/*
 * XREFs of ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C00B1E80
 * Callers:
 *     ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1C00A9E4C (-Initialize@InputExtensibilityCallout@@SAJXZ.c)
 *     UnInitializeInputComponents @ 0x1C00B1AC4 (UnInitializeInputComponents.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x1C00B1ECC (-CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall InputExtensibilityCallout::UnInitialize(InputExtensibilityCallout *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  InputExtensibilityCallout *v4; // rbx

  if ( gpInputExtensibilityCallout )
  {
    InputExtensibilityCallout::CloseCoreMsgPort(a1);
    v4 = gpInputExtensibilityCallout;
    if ( gpInputExtensibilityCallout )
    {
      if ( *((_QWORD *)gpInputExtensibilityCallout + 2) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v3);
      Win32FreePool((__int64)v4);
    }
    gpInputExtensibilityCallout = 0LL;
  }
}
