/*
 * XREFs of ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1C0007E60
 * Callers:
 *     InitializeInputComponents @ 0x1C0007964 (InitializeInputComponents.c)
 * Callees:
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C0007890 (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     CreateKernelSemaphore @ 0x1C0007F20 (CreateKernelSemaphore.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 InputExtensibilityCallout::Initialize(void)
{
  unsigned int v0; // ebx
  char *v1; // rax
  char *v2; // rdi

  v0 = 0;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v1 = (char *)Win32AllocPoolZInit(0x1E8uLL);
  v2 = v1;
  if ( v1 )
  {
    memset(v1, 0, 0x1E8uLL);
    v2[8] = 0;
    *((_DWORD *)v2 + 3) = 0;
    *((_QWORD *)v2 + 2) = 0LL;
    *((_QWORD *)v2 + 3) = 0LL;
    *((_QWORD *)v2 + 4) = 0LL;
    *((_QWORD *)v2 + 5) = 0LL;
    memset(v2 + 48, 0, 0x1B8uLL);
  }
  else
  {
    v2 = 0LL;
  }
  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = v2;
  if ( !v2 )
  {
    v0 = -1073741801;
    InputExtensibilityCallout::UnInitialize();
    return v0;
  }
  *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 16LL) = CreateKernelSemaphore(0, 0x7FFFFFFF);
  if ( *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 16LL) )
    return v0;
  return 3221225495LL;
}
