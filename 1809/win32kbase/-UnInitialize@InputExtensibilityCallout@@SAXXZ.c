/*
 * XREFs of ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C0007890
 * Callers:
 *     UnInitializeInputComponents @ 0x1C0005BB4 (UnInitializeInputComponents.c)
 *     ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1C0007E60 (-Initialize@InputExtensibilityCallout@@SAJXZ.c)
 * Callees:
 *     ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x1C00078FC (-CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void InputExtensibilityCallout::UnInitialize(void)
{
  __int64 v0; // rbx
  InputExtensibilityCallout *v1; // rcx
  __int64 v2; // rbx

  v0 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    v1 = *(InputExtensibilityCallout **)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 16LL);
    if ( v1 )
    {
      Win32FreePool(v1);
      *(_QWORD *)(v0 + 16) = 0LL;
      *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 16LL) = 0LL;
    }
    InputExtensibilityCallout::CloseCoreMsgPort(v1);
    v2 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    {
      if ( *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 32LL) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      Win32FreePool(v2);
    }
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
  }
}
