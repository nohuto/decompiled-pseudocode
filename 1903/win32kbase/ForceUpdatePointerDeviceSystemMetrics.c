/*
 * XREFs of ForceUpdatePointerDeviceSystemMetrics @ 0x1C00604B0
 * Callers:
 *     <none>
 * Callees:
 *     ?WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z @ 0x1C00604F4 (-WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z.c)
 *     ?WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z @ 0x1C0060640 (-WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z.c)
 */

void __fastcall ForceUpdatePointerDeviceSystemMetrics(__int64 a1)
{
  struct CInputSystemMetrics *v1; // rdi
  unsigned int v2; // ebx
  __int64 v3; // rcx
  CInputSystemMetrics *v4; // rcx

  v1 = gpInputSystemMetrics;
  v2 = *(_DWORD *)gpInputSystemMetrics;
  CInputSystemMetrics::WriteSystemMetricsKey(a1, *(unsigned int *)gpInputSystemMetrics, 0LL);
  CInputSystemMetrics::WriteSystemMetricsKey(v3, v2, 1LL);
  CInputSystemMetrics::WritePointerDevicePresenceKey(v4, *((_DWORD *)v1 + 1));
}
