/*
 * XREFs of ??_GDispBrokerClientHandle@DispBroker@@QEAAPEAXI@Z @ 0x1C00E0B94
 * Callers:
 *     ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C00951B0 (-Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

PVOID __fastcall DispBroker::DispBrokerClientHandle::`scalar deleting destructor'(PVOID P)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  if ( (int)ZwAlpcDisconnectPort(*((_QWORD *)P + 1), 0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  if ( ObCloseHandle(*((HANDLE *)P + 1), 0) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  ExFreePoolWithTag(P, 0x44535042u);
  return P;
}
