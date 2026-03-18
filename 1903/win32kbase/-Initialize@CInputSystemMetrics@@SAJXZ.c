/*
 * XREFs of ?Initialize@CInputSystemMetrics@@SAJXZ @ 0x1C0060420
 * Callers:
 *     InitializeInputComponents @ 0x1C0060348 (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     ?WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z @ 0x1C00604F4 (-WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z.c)
 *     ?WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z @ 0x1C0060640 (-WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputSystemMetrics::Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rax
  __int64 v4; // rcx
  unsigned int *v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  CInputSystemMetrics *v8; // rcx

  if ( gpInputSystemMetrics )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v3 = (unsigned int *)Win32AllocPoolZInit(0xCuLL, 1699576147LL);
  v5 = v3;
  if ( v3 )
  {
    *(_QWORD *)v3 = 0LL;
    v3[2] = 0;
  }
  else
  {
    v5 = 0LL;
  }
  gpInputSystemMetrics = (struct CInputSystemMetrics *)v5;
  if ( !v5 )
    return 3221225495LL;
  v6 = *v5;
  CInputSystemMetrics::WriteSystemMetricsKey(v4, *v5, 0LL);
  CInputSystemMetrics::WriteSystemMetricsKey(v7, v6, 1LL);
  CInputSystemMetrics::WritePointerDevicePresenceKey(v8, v5[1]);
  return 0LL;
}
