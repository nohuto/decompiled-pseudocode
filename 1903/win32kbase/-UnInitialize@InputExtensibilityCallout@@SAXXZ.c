/*
 * XREFs of ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C00B4960
 * Callers:
 *     ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1C0060A90 (-Initialize@InputExtensibilityCallout@@SAJXZ.c)
 *     UnInitializeInputComponents @ 0x1C00B45A4 (UnInitializeInputComponents.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x1C00B49AC (-CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
