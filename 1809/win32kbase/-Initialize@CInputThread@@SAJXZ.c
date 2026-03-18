/*
 * XREFs of ?Initialize@CInputThread@@SAJXZ @ 0x1C0007B40
 * Callers:
 *     InitializeInputComponents @ 0x1C0007964 (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 CInputThread::Initialize(void)
{
  __int64 v0; // rax

  if ( *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v0 = Win32AllocPool(48LL, 1884571981LL);
  if ( v0 )
  {
    *(_DWORD *)(v0 + 16) = 0;
    *(_QWORD *)(v0 + 24) = 0LL;
    *(_QWORD *)(v0 + 32) = 0LL;
    *(_DWORD *)(v0 + 40) = 0;
    *(_QWORD *)v0 = 0LL;
    *(_QWORD *)(v0 + 8) = 0LL;
  }
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = v0;
  return v0 == 0 ? 0xC0000017 : 0;
}
