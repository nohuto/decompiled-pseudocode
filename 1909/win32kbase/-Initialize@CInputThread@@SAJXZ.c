/*
 * XREFs of ?Initialize@CInputThread@@SAJXZ @ 0x1C00A9650
 * Callers:
 *     InitializeInputComponents @ 0x1C00A90D8 (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputThread::Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax

  if ( gpInputThread )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v3 = Win32AllocPool(48LL, 0x7054494Du);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 16) = 0;
    *(_QWORD *)(v3 + 24) = 0LL;
    *(_QWORD *)(v3 + 32) = 0LL;
    *(_DWORD *)(v3 + 40) = 0;
    *(_QWORD *)v3 = 0LL;
    *(_QWORD *)(v3 + 8) = 0LL;
  }
  gpInputThread = (CInputThread *)v3;
  return v3 == 0 ? 0xC0000017 : 0;
}
