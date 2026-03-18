/*
 * XREFs of ?Initialize@CForegroundInfo@@SAJXZ @ 0x1C0007BA4
 * Callers:
 *     InitializeInputComponents @ 0x1C0007964 (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 CForegroundInfo::Initialize(void)
{
  DRIVER_CONTROL *v0; // rax
  DRIVER_CONTROL *v1; // rbx

  if ( WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
    MicrosoftTelemetryAssertTriggeredMsgKM("gpForegroundInfo is expected to be initialized only once");
  v0 = (DRIVER_CONTROL *)Win32AllocPoolZInit(0xB8uLL);
  v1 = v0;
  if ( v0 )
  {
    memset(v0, 0, 0xB0uLL);
    *((_BYTE *)v1 + 176) = 0;
  }
  else
  {
    v1 = 0LL;
  }
  WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = v1;
  return v1 == 0LL ? 0xC0000017 : 0;
}
